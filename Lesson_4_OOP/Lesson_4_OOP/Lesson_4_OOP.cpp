#include <iostream>
#include <string>
using namespace std;

//�������� �������, ������� ��� ��� ������ ����
void show();

//������� � �����������, ��� �� �������� ����������
void numbers(int, int);

//������� � ���������� �� ���������, ��� �� ��������
//��� ������ ���������� ���������� string
//��� ����� ��� �������� �� ���������
void hello(string name = "�����");

//�������� ���������� �� ������, ��� �� ��������
void change(int&);

//������� � ������������ ���������
int plusz(int, int);

//������������ �������, ���� ���� ���� ������� � �������� �� �������
inline void func() {
	cout << "������������ �������" << endl;
}
//����������� ����������
//� �������� ������ ��������� ����������, ����� ������ ��, ����� ���������
//����� ������� ����������� �������� ��� � ���� �������,
//� ��� ����� ��������� �������� ���� �� ���������� ������ ���������
void func2();

int main() {
	setlocale(0, "");

	show();

	numbers(3, 5);
	numbers(5, 3);

	hello();
	hello("����");

	int a = 5;
	int b = 7;

	change(b);

	cout << b << endl;

	cout << plusz(a, b) << endl;

	func();

	//�������� ��������� ��� ����� �������� ���������� ����������, ��� ��� �����������
	func2();
	func2();
	func2();
	func2();
	func2();

	system("pause");
	return 0;
}

void show() {
	cout << "� �������" << endl;
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
		cout << "������" << endl;
	}

}

void hello(string name) {
	cout << "������, " << name << endl;
}

void change(int &a) {
	a += 10;
}

int plusz(int a, int b) {
	return a + b;
}

void func2() {
	static int counter = 1;

	cout << "������� ����������� � " << counter << " ���" << endl;
	counter++;
}