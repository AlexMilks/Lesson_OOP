#include <iostream>
#include <string>
using namespace std;

//Шаблоны
//Для чего нужны:
//	Шаблоны позволяют использовать одни и те же функции или классы для обработки данных разных типов

//Шаблоны функций
//Пишем функцию которая складывает два целых числа
//Теперь мы решили что нам нужна ещё одна, но чтобы работала с типом float

int add(int a, int b) {
	return a + b;
}

float add(int a, int b) {
	return a + b;
}

int main() {
	setlocale(0, "");



	system("pause");
	return 0;
}