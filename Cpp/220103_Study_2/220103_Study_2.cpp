#include <iostream>

using namespace std;

class Base {
protected:
	int num;

public:
	void func() {
		cout << num << endl;
	}
};

class Derived :public Base {
public:
	void foo() {
		num = 20;
		func();
		this->func();

		num += 20;
		func();
	}
};

int main() {
	Derived d;
	//d.num = 10;
	d.foo();
}