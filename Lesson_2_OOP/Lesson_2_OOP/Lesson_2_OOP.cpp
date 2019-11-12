#include <iostream>
using namespace std;

//������� ������ ���������
struct Book {
	//���� ���������
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

	//��������� ������������ �����
	Book classic_1 = { 1, 100, 50 };
	Book classic_2 = { 2, 100, 50 };
	Book classic_3 = { 3, 100, 50 };

	//��������� ������ �����
	Book horror_1 = { 4, 200, 70 };
	Book horror_2 = { 5, 300, 70 };
	Book horror_3 = { 6, 400, 70 };

	//������ ���������� � ���������� ���� �����
	Library l1 = { { classic_1, classic_2, classic_3 }, { horror_1, horror_2, horror_3 } };

	//������� ������������ �����
	for (int i = 0; i < 3; i++) {
		cout << "������������ ����������: " << endl;
		cout << "����� " << i + 1 << endl;

		//���������� � ������� ���������� � ����� ������� � ���������� � ���� ��
		cout << "�������������: " << l1.classic[i].id << endl;
		cout << "����: " << l1.classic[i].pages << endl;
		cout << "���-�� �������: " << l1.classic[i].price << endl;
	}

	//��������� ��������� �����
	cout << "\n\n";

	//������� ����� ������
	for (int i = 0; i < 3; i++) {
		cout << "���������� ������: " << endl;
		cout << "����� " << i + 1 << endl;
		cout << "�������������: " << l1.horror[i].id << endl;
		cout << "����: " << l1.horror[i].pages << endl;
		cout << "���-�� �������: " << l1.horror[i].price << endl;
	}

	system("pause");
	return 0;
}