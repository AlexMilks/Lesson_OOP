#include <iostream>
#include <string>
using namespace std;

//Прототип функции, говорит что она просто есть
void show();

//Функция с параметрами, так же является прототипом
void numbers(int, int);

//Функция с параметром по умолчанию, так же прототип
//Для стринг подключаем библиотеку string
//Тут Кевин как значение по умолчанию
void hello(string name = "Кевин");

//Передача параметров по ссылке, так же прототип
void change(int&);

//Функция с возвращаемым значением
int plusz(int, int);

//Встраивыемые функции, если тело мало выйгрыш в скорости по времени
inline void func() {
	cout << "Встраиваемая функция" << endl;
}
//Статические переменные
//В функциях обычно локальные переменные, видны только им, потом удаляются
//Чтобы сделать статической написать как в этом примере,
//и она будет сохранять значение пока не закончится работа программы
void func2();

int main() {
	setlocale(0, "");

	show();

	numbers(3, 5);
	numbers(5, 3);

	hello();
	hello("Джон");

	int a = 5;
	int b = 7;

	change(b);

	cout << b << endl;

	cout << plusz(a, b) << endl;

	func();

	//Запустим несколько раз чтобы показать сохранение переменной, тип она статическая
	func2();
	func2();
	func2();
	func2();
	func2();

	system("pause");
	return 0;
}

void show() {
	cout << "Я функция" << endl;
}

void numbers(int a, int b) {

	if (a <= b) {
		while (a <= b)
		{
			cout << a++ << " ";
		}
		cout << endl;
	}
	else
	{
		cout << "Ошибка" << endl;
	}

}

void hello(string name) {
	cout << "Привет, " << name << endl;
}

void change(int &a) {
	a += 10;
}

int plusz(int a, int b) {
	return a + b;
}

void func2() {
	static int counter = 1;

	cout << "Функция запустилась в " << counter << " раз" << endl;
	counter++;
}