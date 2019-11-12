#include <iostream>
using namespace std;

//Сначала создаём структуру
struct Book {
	//Поля структуры
	int id;
	int pages;
	float price;
};

int main() {
	setlocale(0, "");



	//Присвоили созданную структуру
	Book b1;

	//Инициализировали поля
	b1.id = 1;
	b1.pages = 150;
	b1.price = 99.9;

	//2 способ
	Book b2 = { 2, 100, 170.5 };

	Book b3;
	b3 = b1;

	cout << "Идентификатор книги: " << b1.id << endl;
	cout << "Страниц в книге: " << b1.pages << endl;
	cout << "Цена книги: " << b1.price << endl;

	cout << "Идентификатор книги: " << b2.id << endl;
	cout << "Страниц в книге: " << b2.pages << endl;
	cout << "Цена книги: " << b2.price << endl;

	cout << "Идентификатор книги: " << b3.id << endl;
	cout << "Страниц в книге: " << b3.pages << endl;
	cout << "Цена книги: " << b3.price << endl;

	system("pause");
	return 0;
}