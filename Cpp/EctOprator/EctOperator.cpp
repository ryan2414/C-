#include <iostream>
#include <limits>
using namespace std;

int main() {
	/*int num = -10;
	int abs = num < 0 ? -num : num;
	cout << abs << endl;*/

	//int num = 0;
	////num == 0 ? (cout << "num == 0") : (cout << "num != 0");
	//cout <<( num == 0 ? "num == 0" : "num != 0");

	unsigned int uintNum = 1;
	int intNum = 1u;
	float fNum = 1.1;

	uintNum = intNum;
	intNum = uintNum;
	fNum = intNum;

	short sNum = std::numeric_limits<int>::max();
	cout << sNum;

}