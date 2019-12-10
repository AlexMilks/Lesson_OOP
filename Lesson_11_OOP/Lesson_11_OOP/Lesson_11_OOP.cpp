#include <iostream>
using namespace std;

//������������ - �������� ������, ������� �������� �����������
//����������� ����� - ��� ������� �����������, �������� �� ��� ����������� � ����� ���� �������
//����������� ����� �������� {���} ��������, ��� � ��������
//������������ � ���, ��� ����� ������������ ������������ ��� ��������� ���
//��� �� ��� ��������� ������������ ����� ������, ��� ����������� ��������� ����

//���������� ������� - �������� �������� ����� ���� ������� �������� ������, ����� � ���������� ���� ���� �� �������

//���������� ������ ����� Counter
class Counter {
	//protected �������� ��� � � ���� ������, ��� � � ����������
protected:
	int countz;
public:
	Counter() : countz(0) {
	}

	Counter(int c) : countz(c) {
	}

	int get_count() {
		return countz;
	}

	//�������� ������� �������, ����� �����������
	void show_count() {
		cout << "��� ������ ����� Counter: " << countz << endl;
	}

	Counter operator++ () {
		return Counter(++countz);
	}
};

//������ ����� ����������
//����� ���������, ��� �� ���� �����������
//����� ������������ ������� public, ����� �������� � private, ����� ��������
//���� ������� private, �� �� ��� ���� � public � protected ����� �������
//� ������������� ���� �����, ����� � ���������� ������� ����������� �������� ������ 
class NewCounter : public Counter {
public:
	NewCounter(int c) : Counter(c) {

	}

	//������ ���, ��� ��� ��� ������������
	Counter operator--() {
		//������ ��� ��� �� � countez privat
		//����������, �� �������� � ������������� ��������
		return --countz;
	}

	//��������� ����� ����� �� �������, ������ ����
	//�������� �����, ���� �������� nc, ������ ��� ������������� �� ���� ����� � NewCounter, � ����� ������ ����� � ������ ��������
	void show_count() {
		//���� ��� ����� ���� ������� � nc ������� �����, �� ����� ������� ���
		//��������� �������������� ������ Counter, ����� ::
		Counter::show_count();
		cout << "��� ������ ����� NewCounter: " << countz << endl;
	}
};

int main() {
	setlocale(0, "");

	Counter c;
	NewCounter nc(4);

	//������ ��� ��� � �������� ����� ������ ���, ��� ���� � ����������
	//c--;

	++c;
	//1
	++nc;
	//1
	--nc;
	//0
	--nc;
	//-1

	cout << c.get_count() << endl;
	cout << nc.get_count() << endl;

	//������ ��� ��������� ��� nc ������ ������ counter, �� ��� �� ������, ���������� �������
	c.show_count();
	cout << endl;
	nc.show_count();


	system("pause");
	return 0;
}