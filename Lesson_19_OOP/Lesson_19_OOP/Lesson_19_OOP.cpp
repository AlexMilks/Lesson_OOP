#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//��� ���������� � ����� � ��� ������ �� ���� ������� ���������������� ����� ������
//��� ������ ������ ������������ �������� �����
//��� ������������� ����������� � ������������ ������� ����������, ����� ��� ����� ���������� ����� �����
//������� ������, ������ �� ��� ����������� �������

//��������� ��������� �����/������
//����� ����� ������� ���:
//cout << some1;
//cin >> some1;
//��� ����� ��� ����� ������� ������������� �������

//������������� �������

//�� ����� void � ��� ����� ������ ��� ���������� �������� ����� �� �������� � ����� ������ � ������

class Something {
private:
	string somestr;
	int someint;
public:
	Something() {
	}

	Something(string str, int i) {
		somestr = str;
		someint = i;
	}

	void showSomething() {
		cout << somestr << " " << someint << endl;
	}

	//������ �������� ����� ����� istream, ���������� ��� ������ �� ������
	//������ ���� �� ������
	//��� ��� cin
	//s - ��� �����
	friend istream& operator >> (istream& s, Something& ssome1);

	//��� ��� cout
	friend ostream& operator << (ostream& s, Something& ssome1);
};

//������� ���� �������
//�� ��� ��� ������ ���������� ��� ���������� ��������, ����� ����� ����������, �� ��� ������, ����� ����� ���������
//��� �������� �����
istream& operator >> (istream& s, Something& ssome1) {
	cout << "������� ������: ";
	//�� ����� ���������� ���������� � ���� somestr
	s >> ssome1.somestr;
	cout << "������� �����: ";
	//�� ������ ����� ���������� � ������� � ���� someint
	s >> ssome1.someint;
	//��� ��� ��� �� void, � �����
	return s;
}

//��� �������� ������
ostream& operator << (ostream& s, Something& ssome1) {
	//������ ���������� � ��� �������, � ������� ��� ������
	//s ������ ���� cout
	s << ssome1.somestr << " - " << ssome1.someint << endl;
	//��� ��� ��� �� void, � �����
	return s;
}

int main() {
	setlocale(0, "");

	Something some("string", 7);

	//��� ������ � ��� ������ ���������� � ����
	//����� �������� .dat, ������ - �����
	//����, � ��� ��� �������� �����
	// | ��� ���� ����� ���������� � ������ ���������� �� ����� � ������� ������ out � in
	//� ����� ������ ���� ������������� �� ��������
	//���� ��������, ������� ����� �������
	fstream file("file.dat", ios::binary | ios::out | ios::in);

	//�������� ������, � file.dat
	//���������� ��������� �� ������
	file.write(reinterpret_cast<char*>(&some), sizeof(Something));

	//��� ���� ����� ��������� ���� ��� ����� ����������� ��������� ����� �� ������
	//����� ������ ��������� ����� � ����� �����
	//���������� ����� ����� ���������
	cout << file.tellg() << endl;
	//���������� ��������� � ������ 
	file.seekg(0);
	//��� ���� ����� ��������� � ������������
	cout << file.tellg() << endl;

	//���� ����� ���������� ��������� �� �����
	Something some2;

	//�����, ��� ����� ��������� some2, ����� �� ����� ��������� ���������
	file.read(reinterpret_cast<char*>(&some2), sizeof(some2));

	some2.showSomething();

	///////��� ���������� �����/������
	Something ssome1, ssome2;

	//��� ����� ����� 69 - �������� ���������� �� �������, 70 - ���������� ���������� � ����������
	cin >> ssome1 >> ssome2;
	cout << ssome1 << ssome2;

	system("pause");
	return 0;
}