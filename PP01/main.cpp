//1주차########################

//#include <iostream>

//using namespace std;

//int main()
//{
//    int a = 3, b = 5;
//    //std::cout << "Hello World!\n";
//    cout << a + b << "Hello World!\n";
//    return 0;
//}

//2주차########################

//#include<iostream>
//#include<string>
//
//
//namespace normal
//{
//	void print(std::string str)
//	{
//		std::cout<< "안 " << str;
//	}
//}
//
//namespace visual_novel
//{
//	void print(std::string str)
//	{
//		std::cout<< "이은석 : "<< str;
//	}
//}
//
//
//
//int main()
//{
//	normal::print("평화롭고 아름다운 프로그래밍 패턴시간\n");
//	return 0;
//}

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Player
//{
//public:
//	Player()	//생성자
//	{
//		cout << "주인공이 생성되었습니다!! 아 맑은 공기" << endl;
//	}
//	~Player()  //소멸자
//	{
//		cout << "자..잠깐 멈춰!" << endl;
//	}
//};
//
//int main() 
//{	
//	Player *player = new Player();
//	delete(player);
//	return 0;
//}

#include <iostream>
#include <string>

using namespace std;
bool is_game_running = false;

class GameObject
{
public:
	GameObject()
	{
		cout << "게임 오브젝트 생성!\n";
	}
	virtual ~GameObject()
	{
		cout << "게임 오브젝트 소멸!\n";
	}

	virtual void Start()
	{}
	virtual void Update()
	{}

};

class Player: public GameObject
{
public:
	int HP = 100;
	Player()
	{
		cout << "플레이어 생성!\n";
	}

	~Player()
	{
		cout << "플레이어 소멸!\n";
	}

	void Start()
	{
		cout << "플레이어의 HP는" << HP << "입니다!\n";
	}

	void Update()
	{
		cout << "플레이어 업데이트!\n";
	}
};

class Enemy :public GameObject
{
public:
	int HP = 100;

	Enemy() 
	{
		cout << "적 생성!\n";
	}

	~Enemy()
	{
		cout << "적 소멸!\n";

	}
	

	void Start()
	{
		cout << "적의 HP는"<<HP<<"입니다!\n";

	}

	void Update()
	{
		cout << "적 업데이트!\n";
	}
};


int main()
{
	is_game_running = true;

	GameObject* p = new Player();
	GameObject* e = new Enemy();

	p->Start();
	e->Start();

	while (is_game_running)
	{
		p->Update();
		e->Update();

		cout << "입력해주세요 (1:게임종료, 2:게임 계속): ";
		int input;
		cin >> input;
		if (input==1)
		{
			is_game_running = false;
		}
	}
	delete(p);
	delete(e);

	return 0;
}


