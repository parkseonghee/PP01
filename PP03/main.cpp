#include<iostream>
using namespace std;

class A
{
public:
	void print()
	{
		cout << "µ¥Çì\n";
	}
};

class B :A
{
public:
	void print()
	{
		cout << "ÇìÇó\n";
	}
};

void main()
{
	A* temp=new	A();
	temp->print();
}