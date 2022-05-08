#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
	Car()
	{
		cout << "car를 생성합니다\n";
	}
	~Car()
	{
		cout << "car를 소멸합니다\n";
	}

	virtual void OpenWindow()
	{
		cout << "창문을 엽니다\n";
	}

	virtual void ChangeGear()
	{
		cout << "기어을 바꿉니다\n";
	}
};

class Spark:public Car
{
public:
	Spark()
	{
		cout << "Spark를 생성합니다\n";
	}
	~Spark()
	{
		cout << "Spark를 소멸합니다\n";
	}

	void OpenWindow()
	{
		cout << "수동으로 창문을 엽니다\n";
	}

	void ChangeGear()
	{
		cout << "수동으로 기어을 바꿉니다\n";
	}
};

class Escalade :public Car
{
public:
	Escalade()
	{
		cout << "Escalade를 생성합니다\n";
	}
	~Escalade()
	{
		cout << "Escalade를 소멸합니다\n";
	}

	void OpenWindow()
	{
		cout << "자동으로 창문을 엽니다\n";
	}

	void ChangeGear()
	{
		cout << "자동으로 기어을 바꿉니다\n";
	}
};

//운전자 함수
void main()
{
	int carNum = 2;

	Car** c;
	c = new Car * [carNum];
	c[0] = new Spark();
	c[1] = new Escalade();

	for (size_t i = 0; i < 2; i++)
	{
		c[i]->OpenWindow();
		c[i]->ChangeGear();
		delete(c[i]);
	}

}