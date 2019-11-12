#include <iostream>
using namespace std;

//Сначала создаём структуру
struct Book {
	//Поля структуры
	int id;
	int pages;
	float price;
};

struct Library {
	Book classic[3];
	Book horror[3];
};

int main() {

	setlocale(0, "");

	//Заполняем классические книги
	Book classic_1 = { 1, 100, 50 };
	Book classic_2 = { 2, 100, 50 };
	Book classic_3 = { 3, 100, 50 };

	//Заполняем хоррор книги
	Book horror_1 = { 4, 200, 70 };
	Book horror_2 = { 5, 300, 70 };
	Book horror_3 = { 6, 400, 70 };

	//Создаём библиотеку и закидываем туда книги
	Library l1 = { { classic_1, classic_2, classic_3 }, { horror_1, horror_2, horror_3 } };

	//Выводим классические книги
	for (int i = 0; i < 3; i++) {
		cout << "Классическая литература: " << endl;
		cout << "Книга " << i + 1 << endl;

		//Обращаемся к объекту библиотеки с полем классик и обращаемся к полю ид
		cout << "Идентификатор: " << l1.classic[i].id << endl;
		cout << "Цена: " << l1.classic[i].pages << endl;
		cout << "Кол-во страниц: " << l1.classic[i].price << endl;
	}

	//Несколько переносов строк
	cout << "\n\n";

	//Выводим книги ужасов
	for (int i = 0; i < 3; i++) {
		cout << "Литература ужасов: " << endl;
		cout << "Книга " << i + 1 << endl;
		cout << "Идентификатор: " << l1.horror[i].id << endl;
		cout << "Цена: " << l1.horror[i].pages << endl;
		cout << "Кол-во страниц: " << l1.horror[i].price << endl;
	}

	system("pause");
	return 0;
}