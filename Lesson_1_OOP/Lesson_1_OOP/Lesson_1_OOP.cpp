#include <iostream>
using namespace std;

//������� ������ ���������
struct Book {
	//���� ���������
	int id;
	int pages;
	float price;
};

int main() {
	setlocale(0, "");



	//��������� ��������� ���������
	Book b1;

	//���������������� ����
	b1.id = 1;
	b1.pages = 150;
	b1.price = 99.9;

	//2 ������
	Book b2 = { 2, 100, 170.5 };

	Book b3;
	b3 = b1;

	cout << "������������� �����: " << b1.id << endl;
	cout << "������� � �����: " << b1.pages << endl;
	cout << "���� �����: " << b1.price << endl;

	cout << "������������� �����: " << b2.id << endl;
	cout << "������� � �����: " << b2.pages << endl;
	cout << "���� �����: " << b2.price << endl;

	cout << "������������� �����: " << b3.id << endl;
	cout << "������� � �����: " << b3.pages << endl;
	cout << "���� �����: " << b3.price << endl;

	system("pause");
	return 0;
}