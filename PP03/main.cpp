#include<iostream>
using namespace std;

class A
{
public:
	void print()
	{
		cout << "����\n";
	}
};

class B :A
{
public:
	void print()
	{
		cout << "����\n";
	}
};

void main()
{
	A* temp=new	A();
	temp->print();
}