#include<iostream>
#include"Counter.h"
using namespace std;

int main() {
	Counter a(15, false);
	
	cout<<a.getValue()<<endl;
	for (int i = 0; i < 12; i++)
	{
		a.increase();
	}


	a.display();
	a.setMax(50);
	a.setMin(-50);
	a.display();
	cout << a.toString() << endl;

	Counter* b = new Counter(a);
	cout << b->getValue() << endl;
	for (int i = 0; i < 12; i++)
	{
		b->increase();
	}


	b->display();
	b->setMax(50);
	b->setMin(-50);
	b->display();
	cout << b->toString() << endl;
	b->~Counter();

	return 0;
}