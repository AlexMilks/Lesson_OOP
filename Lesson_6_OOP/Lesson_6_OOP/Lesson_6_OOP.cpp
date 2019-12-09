#include <iostream>
using namespace std;

class Counter {
private:
	//����
	int countz;
public:
	//�����������
	Counter() : countz(0) {

	}

	//����������� � ����� ����������
	Counter(int c) : countz(c) {

	}

	//�����
	int getCount() {
		return countz;
	}

	//������ ���������� �������� ++, � ������� ������� ������ ��� ��� ��� �������
	//������������ ������ ������
	Counter operator++ () {
		//������� ���������� ������
		return Counter(++countz);
	}

	//�� ��� � ������� int, ������ ������� �����������, ��� ���� ����� ���������� � ����������� ����� ������
	Counter operator++ (int) {
		return Counter(countz++);
	}
};

int main() {
	setlocale(0, "");

	//���������� �������� - ����������� ����� ���� �������� ��� ����������������� ���� ������
	//�����, ����� ������� ��� ����� �������� � ���������

	//���������� ������� �������� (�������, ��� �� �������� ����� ������ ���� ������� ++ -- � �.�.)

	//������
	Counter c1;
	Counter c2;

	cout << c1.getCount() << endl;

	//�������� ��������� �� 1
	//++c1;
	c1++;

	//�������� � c2
	c2 = c1++;

	cout << c2.getCount() << endl;
	cout << c1.getCount() << endl;

	system("pause");
	return 0;
}