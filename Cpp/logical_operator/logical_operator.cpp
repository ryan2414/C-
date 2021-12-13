#include <iostream>

using namespace std;

int main() {
	//&& , ||, !

	/*true && true == true;
	true && false == false;
	false && true == false;
	false && false == false;*/

	//int num0 = 10, num1(10);
	//int num2 = 20, num3(30);
	//if (num0 == num1 && num2 == num3) {
	//	cout << "AND" << endl;
	//}

	//if ((num0 == num1) || (num2 == num3)) {
	//	cout << "OR" << endl;
	//}


	//if (true || false && false) //우선 순위 &&가 높다 
	//	cout << "OK" << endl;

	bool result1 = printf("") && printf("ABC");//and 연산자의 경우 첫 조건이 false면 뒤에 조건을 하지 않는다.

	bool result = printf("a") || printf("ABC");//or 연산자의 경우 첫 조건이 true면 뒤에 조건을 하지 않는다.

	bool r = true;
	r = !r;
	cout << r;
}