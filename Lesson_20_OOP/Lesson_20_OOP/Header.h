//extern int GlobalVar;

int func();

class JustClass {
private:
	int Justint;
public:
	void JustFunc();
};

//������ ��� ������������ ���
//� ���� ��� ���������� � �������
namespace my {
	extern int GlobalVar;
}

//��� ����
namespace other {
	extern int GlobalVar;
}