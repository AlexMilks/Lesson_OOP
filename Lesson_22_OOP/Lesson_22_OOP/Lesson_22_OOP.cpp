#include <iostream>
#include <string>
using namespace std;

//����������
//������ ������� ��������� � ���������
//������ ������ �� ����������� �����	

//������ ������ ��������� �� �������������� �������, � ������� �����
//��� ����� ��� ����� ������� ����� ����������, ����� ������������� ������������, ��� ������ �� �������� ��� ������������� �������
//�������� ��� ������ ������ Array
//���� ������ ������� ������, ��� ��� ���� ��� �� ����������� �� ���� �� ������
//������ ����� ������������� ����������, ����� ����� ������ �������, ������� � � ����������� int len
//���������� �������� � ������� ����� throw
//������ ��� ����� ������� try, �� ������ �� �������������� ����������
//������ �� ��� ��� ���������� ����������
//������ �������, ����� ���� ������� ���������� ��� ������, ��� ��������� �����, ��� �������
//��� �������� ��� ���� ���������� � ��������������� ��������, ����� ����
//� ����� ������� ���������� ������ ��� �������

//��� ����������� �������� ���������� � ����� ��� �++ ������ ������

const int MAX = 3;

class Array {
private:
	int arr[MAX];
public:
	//������ ����� ���� ����� ��������� ��� ������� �������
	class Big {
	};

	//������ ����� ���� ����� ��������� ��� ��������� �������
	class Small {
	};

	class errorIndex {
	public:
		//���� ������� ����� ��������� ������������ ������
		int index;

		//��� ������������� �������
		errorIndex(int i) : index(i) {

		}

	};

	//��� �� �������� ��������� ��������� ����� int*
	Array(int* a, int len) {
		//���� ��� ����� ����������, �� ����� ������������ ���������
		//�������� � ������� ����� throw
		//������ ���������� ������ ������ Exception
		if (len > MAX) {
			//��� ����� ������
			throw Big();
		}

		if (len < MAX) {
			//��� ����� ������
			throw Small();
		}

		for (int i = 0; i < MAX; i++)
		{
			arr[i] = a[i];
		}
	}

	int getElement(int);
};

int Array::getElement(int index) {
	//��������, ���� �� �������������, �� ����������� ������, � ��������� � ���� catch, �������� �������� ����� �������
	if (index < 0 || index > MAX) {
		throw errorIndex(index);
	}
	return arr[index];
}

int main() {
	setlocale(0, "");

	//����� ���������� �� ������, ��� ���� ��������� ���������� ��������� ��� ���������, ��� 3 �� ������
	int a[] = { 1, 2, 3 };

	//� ���� ���� ���������� ���� ��� ���, ��� ����� ��������� ������
	//������� �������� �� ���� � Array
	try {
		//������ ��������� ������� � ����� ��� ������
		Array arrayObj(a, sizeof(a) / sizeof(int));

		//����� ���������� �� ������ ��� ����� ������� �������������� �������, ������ ������ �������� ������������, ������� ����� ������
		cout << arrayObj.getElement(-4) << endl;
	}
	//������ �������� ���������� ����������
	//����� ������� ��� �������������� ������
	//��� ������ ������� ���� ����� �������������� ���� ������
	//���� ���������� ���� ��� ������ ���� Big
	catch (Array::Big) {
		cout << "������ ������� �������!" << endl;
	}

	//���� ���������� ���� ��� ������ ���� Small
	catch (Array::Small) {
		cout << "������ ������� ���������!" << endl;
	}

	//��� ��� ����� ������� ������������� ��� �������, ������� �� ������� ��� ��������� ������
	catch (Array::errorIndex e) {
		cout << "�������� ��� �������� " << e.index << " �� ����������" << endl;
	}

	system("pause");
	return 0;
}
