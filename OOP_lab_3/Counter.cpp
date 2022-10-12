#include "Counter.h"
#include <sstream>
Counter::Counter() {
	//by default
	max = 20;
	min = 0;
}
Counter::Counter(int value,bool ismax) {
	if (ismax) this->max = value;
	else {
		this->min = value;
		this->current = value;
	}
	
}
//Counter::Counter(int max) {
//	this->max = max;
//	this->current = min;
//}
Counter::Counter(int min, int max) {
	this->min = min;
	this->max = max;
	this->current = min;
}
Counter::Counter(const Counter& o) {
	this->min = o.min;
	this->max = o.max;
	this->current = o.current;
}
Counter::~Counter(){
	cout << "Destructor : "<<this << endl;
}
void Counter::setMin(int min) {
	this->min = min;
	if (current < min) current = min;
};
void Counter::setMax(int max) {
	this->max = max;
	if (current > max) current = min;
};
void Counter::increase() {
	current == max - 1 ? current = min : current++;
}
int Counter::getValue() {
	return current;
}
void Counter::display() {
	cout << "[min = " + to_string(min) + "\tmax = " + to_string(max) + "\tcurrent = " + to_string(current) + "]" << endl;
}
string Counter::toString() {
	return string("[min = " + to_string(min) + "\tmax = " + to_string(max) + "\tcurrent = " + to_string(current) + "]");
}
