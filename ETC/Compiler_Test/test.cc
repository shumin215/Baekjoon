#include <iostream>
#include <cstdio>
using namespace std;

class Bird
{
	public:
		Bird()
		{
			cout << "Bird의 생성자" << endl;
		}
		virtual bool canFly();
		~Bird()
		{
			cout << "Bird의 소멸자" << endl;
		}
};

class Chicken : public Bird
{
	public:
		Chicken()
		{
			cout << "Chicken의 생성자" << endl;
		}
		bool canFly();

		void helloWorld()
		{
			printf("Hello World\n");
		}
};

class Eagle : public Bird
{
	public:
		Eagle()
		{
			cout << "Eagle의 생성자" << endl;
		}
		bool canFly();
};

bool Chicken::canFly()
{
	cout << "I can't fly" << endl;
	return false;
}

bool Eagle::canFly()
{
	cout << "I can fly" << endl;
	return true;
}

bool Bird::canFly()
{
	cout << "I don't know" << endl;
	return true;
}


int main(void)
{
	Bird* pBird = new Chicken();
	pBird->canFly();
//	pBird->helloWorld();

	cout << "---------------" << endl;

	pBird = new Eagle();
	pBird->canFly();

	cout << "---------------" << endl;

	Bird b;
	b.canFly();

	cout << "---------------" << endl;

	Bird *chic = new Bird();
	chic->canFly();

	cout << "---------------" << endl;
	cout << "---------------" << endl;
	cout << "---------------" << endl;
	cout << "---------------" << endl;




	return 0;
}

