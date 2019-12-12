//extern int GlobalVar;

int func();

class JustClass {
private:
	int Justint;
public:
	void JustFunc();
};

//Создаём своё пространство имён
//В теле все переменные и функции
namespace my {
	extern int GlobalVar;
}

//Ещё одно
namespace other {
	extern int GlobalVar;
}