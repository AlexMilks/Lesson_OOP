#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//������������ ���� �����
//put() - ��� ������ ������� � ����
//get() - ��� ��������� ������� �� �����
//+ ������� ����� ��������� .rdbuf()
 
//�������� ����/�����
//��������������� ���������� ��� �� ��������� �������� � ����� ���������� 
//� ��������� ������ ����� ������������ �������� ����/�����

int main() {
	setlocale(0, "");

	string text = "���";

	//��� ������ ������ � ����
	ofstream output;

	//������� ���� ���
	output.open("file.txt");

	//���-�� �������� ����� �������� ����� .size
	for (int i = 0; i < text.size(); i++)
	{
		//���������� ���������� ����
		output.put(text[i]);
	}

	//��������� ����
	output.close();

	//������� ��� ������
	ifstream input;
	input.open("file.txt");

	//�������������� ���������� � ������� �� ����� ��������� ��� ������
	char ch;

	//���������� ��� ������� ���� �� ����� �� ����� �����
	//� ch ����� ������� ������
	/*while (input.get(ch))
	{
		cout << ch;
	}

	cout << endl;*/

	//������ ���������� ��� ������� �������
	//������ ���� ���������� ����� � ����������
	cout << input.rdbuf() << endl;


	//�������� ����/�����
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//������� � ���� � ������� ��������� �����
	//���������� � ������ ������� �������, �� ��� ������ ����� � �������� ������
	ofstream output2("file.txt", ios::binary);

	//���������� � ���� ���������� ����� .write
	//������������� ���������� int* � char*
	//������ �������� ��� ����� ����� ������ � ������ �.�. ��� 10* (int) ����������, ����� � ������ sizeof �.�. 10*4
	output2.write(reinterpret_cast<char*>(arr), 10 * sizeof(int));

	//��������� ����
	output2.close();

	//������ � ������� ����� ����������
	int arr2[10];

	//����, ��� ������ ����� � �������� �������
	ifstream input2("file.txt", ios::binary);

	//��� ������ ���������� .read
	//������������� ���������� int* � char*
	//� ����� ������ ������ ����������
	input2.read(reinterpret_cast<char*>(arr2), 10 * sizeof(int));

	//��������� ����
	input2.close();

	//��� ��������� ������� �� ����� ��� �������
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " - " << arr2[i] << endl;
	}

	system("pause");
	return 0;
}