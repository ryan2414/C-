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


	//if (true || false && false) //�켱 ���� &&�� ���� 
	//	cout << "OK" << endl;

	bool result1 = printf("") && printf("ABC");//and �������� ��� ù ������ false�� �ڿ� ������ ���� �ʴ´�.

	bool result = printf("a") || printf("ABC");//or �������� ��� ù ������ true�� �ڿ� ������ ���� �ʴ´�.

	bool r = true;
	r = !r;
	cout << r;
}