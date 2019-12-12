#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//Как записывать в файлы и как читать от туда объекты пользовательских типов данных
//При записи обычно используется бинарный режим
//Для совместимости записанного и прочитанного объекта достаточно, чтобы они имели одинаковый набор полей
//Верхняя строка, только не для виртуальных функций

//Перегрука оператора ввода/вывода
//Чтобы могли сделать так:
//cout << some1;
//cin >> some1;
//Для этого нам нужно создать дружественные функции

//Дружественные функции

//За место void у нас стоят потоки для нескольких объектов чтобы мы записали в одном потоке и вывели

class Something {
private:
	string somestr;
	int someint;
public:
	Something() {
	}

	Something(string str, int i) {
		somestr = str;
		someint = i;
	}

	void showSomething() {
		cout << somestr << " " << someint << endl;
	}

	//Первый аргумент будет поток istream, передавать его должны по ссылке
	//Объект тоже по ссылке
	//Это для cin
	//s - это поток
	friend istream& operator >> (istream& s, Something& ssome1);

	//Это для cout
	friend ostream& operator << (ostream& s, Something& ssome1);
};

//Запишем тело функций
//То что идёт первым аргументом при перегрузке операции, стоит перед оператором, то что вторым, стоит после оператора
//Для операции ввода
istream& operator >> (istream& s, Something& ssome1) {
	cout << "Введите строку: ";
	//Мы будем записывать информацию в поле somestr
	s >> ssome1.somestr;
	cout << "Введите число: ";
	//Из потока береём информацию и положим в поле someint
	s >> ssome1.someint;
	//Так как уже не void, а поток
	return s;
}

//Для операции вывода
ostream& operator << (ostream& s, Something& ssome1) {
	//Вводим информацию в том формате, в котором нам удобно
	//s играет роль cout
	s << ssome1.somestr << " - " << ssome1.someint << endl;
	//Так как уже не void, а поток
	return s;
}

int main() {
	setlocale(0, "");

	Something some("string", 7);

	//Для записи и для чтения информации в файл
	//Лучше подходит .dat, почему - прост
	//Флаг, о том что двоичный режим
	// | наш файл будет записывать и читать информацию из файла с помощью флагов out и in
	//В такой записи файл автоматически не создаётся
	//Сами создадим, ручками через каталог
	fstream file("file.dat", ios::binary | ios::out | ios::in);

	//Записать объект, в file.dat
	//Используем указатель на объект
	file.write(reinterpret_cast<char*>(&some), sizeof(Something));

	//Для того чтобы прочитать файл нам нужно переместить указатель файла на начало
	//После записи указатель стоит в конце файла
	//Возвращает номер позии указателя
	cout << file.tellg() << endl;
	//Перемещаем указатель в начало 
	file.seekg(0);
	//Для того чтобы убедиться в корректности
	cout << file.tellg() << endl;

	//Куда будем записывать инфомацию из файла
	Something some2;

	//Можно, где объём поставить some2, будет всё равно правильно вычислять
	file.read(reinterpret_cast<char*>(&some2), sizeof(some2));

	some2.showSomething();

	///////Для перегрузки ввода/вывода
	Something ssome1, ssome2;

	//Нам нужно чтобы 69 - выводить информацию об объекте, 70 - записывать информацию с клавиатуры
	cin >> ssome1 >> ssome2;
	cout << ssome1 << ssome2;

	system("pause");
	return 0;
}