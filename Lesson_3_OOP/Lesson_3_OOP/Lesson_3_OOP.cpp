#include <iostream>
using namespace std;

//��� ������������, ��� ������ �������� � �������� ����� ������
enum Names {
	Jack, Nick, Mary, Kevin
};

int main() {

	setlocale(0, "");

	Names n1;
	n1 = Jack;

	Names n2 = Mary;

	//������� 0
	cout << n1 << endl;

	//������ � ������ ���� ������ ������ ������� �������� � ����������
	//cin >> n2;

	//����� ��� ������������, ��������� 0 � ��� 0 �� Jack
	if (n1 == Jack) {
		cout << "Jack" << endl;
	}

	system("pause");
	return 0;
}