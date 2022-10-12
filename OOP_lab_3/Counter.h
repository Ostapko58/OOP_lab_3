#include<iostream>
#include<string>
using namespace std;
class Counter
{
private:
	int max = 20;
	int min = 0;
	int current = min;
public:
	Counter();
	Counter(int,bool);
	//Counter(int max);
	Counter(int , int );
	Counter(const Counter&);
	~Counter();
	void setMin(int );
	void setMax(int );
	void increase();
	int getValue();
	void display();
	string toString();
};

