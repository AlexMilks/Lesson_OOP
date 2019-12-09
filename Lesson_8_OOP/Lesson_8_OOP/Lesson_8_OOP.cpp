#include <iostream>
using namespace std;

int const LIMIT = 10;

//���������� �������� ���������� ������� []
class Array {
private:
	int arr[LIMIT];
public:
	//�����������
	Array() {
		for (int i = 0; i < LIMIT; i++)
		{
			arr[i] = 0;
		}
	}

	//���������� []
	int& operator[] (int n) {
		if (n < 0 || n >= LIMIT) {
			cout << "������ ����������" << endl;
			exit(1);
		}
		return arr[n];
	}
};

int main() {
	setlocale(0, "");

	Array a1;

	//������� 5-�� �������
	cout << a1[5] << endl;

	//����� �������, ��� a[4] = 7
	//����� ��� ������� ������� &, ����� �� ����� ��� ������, � �� ��� ������������

	a1[5] = 7;
	cout << a1[5] << endl;

	system("pause");
	return 0;
}