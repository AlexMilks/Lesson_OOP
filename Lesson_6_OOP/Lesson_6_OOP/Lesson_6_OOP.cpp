#include <iostream>
using namespace std;

class Counter {
private:
	//Поле
	int countz;
public:
	//Конструктор
	Counter() : countz(0) {

	}

	//Конструктор с одним параметром
	Counter(int c) : countz(c) {

	}

	//Метод
	int getCount() {
		return countz;
	}

	//Теперь перегрузим операцию ++, в круглых скобках ничего нет так как унарная
	//Возвращается объект класса
	Counter operator++ () {
		//Вернуть безымянный объект
		return Counter(++countz);
	}

	//То что в скобках int, просто говорит компилятору, что этот метод вызывается в постфиксной форме записи
	Counter operator++ (int) {
		return Counter(countz++);
	}
};

int main() {
	setlocale(0, "");

	//Перегрузка операций - определение какой либо операции для пользовательского типа данных
	//Нужно, чтобы сделать код более понятным и наглядным

	//Перегрузка унарных операций (Унарные, это те котороые имеют только один операнд ++ -- и т.д.)

	//Объект
	Counter c1;
	Counter c2;

	cout << c1.getCount() << endl;

	//Увеличим префиксно на 1
	//++c1;
	c1++;

	//Присвоим в c2
	c2 = c1++;

	cout << c2.getCount() << endl;
	cout << c1.getCount() << endl;

	system("pause");
	return 0;
}