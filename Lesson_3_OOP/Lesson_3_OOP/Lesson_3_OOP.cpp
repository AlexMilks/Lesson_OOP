#include <iostream>
using namespace std;

//Тип перечесление, ими тяжело работать с потоками ввода вывода
enum Names {
	Jack, Nick, Mary, Kevin
};

int main() {

	setlocale(0, "");

	Names n1;
	n1 = Jack;

	Names n2 = Mary;

	//Выведет 0
	cout << n1 << endl;

	//Ошибка к такому типу данных нельзя вводить значения с клавиатуры
	//cin >> n2;

	//Можно так использовать, выводится 0 и раз 0 то Jack
	if (n1 == Jack) {
		cout << "Jack" << endl;
	}

	system("pause");
	return 0;
}