#include <iostream>

using namespace std;

int main() {
	unsigned short s0 = 40000;
	cout << typeid(s0 + s0).name() << endl; //int 보다 작은경우 자동으로 프로모션 진행

	unsigned int i0 = 4100000000;
	cout << typeid(i0 + i0).name() << endl;

	
}