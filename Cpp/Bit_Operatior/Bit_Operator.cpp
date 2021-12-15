#include <iostream>

using namespace std;

int main() {
	// ~, &, |, ^, <<, >>
	//~: Not 연산자
	/*int num = 0;
	cout << ~num << endl;
	cout << ~~num << endl;

	unsigned int num0 = 0;
	cout << ~num0 << endl;

	unsigned int num1 = 1;
	cout << ~num1 << endl;*/

	//&: And 연산자
	/*int num0 = 5;
	int num1 = 11;

	int result = num0 & num1;
	cout << result << endl;*/

	//uint32_t attendanceBook = 0u;
	/*if (attendanceBook & (int)pow(2,0))
	{
		cout << "1st" << endl;
	}
	if (attendanceBook & (int)pow(2, 1))
	{
		cout << "2st" << endl;
	}
	if (attendanceBook & (int)pow(2, 2))
	{
		cout << "3st" << endl;
	}
	if (attendanceBook & ((int)pow(2, 0) + (int)pow(2,1)))
	{
		cout << "1 or 2" << endl;
	}

	int flag = (int)pow(2, 0) + (int)pow(2, 1);
	if ((attendanceBook & flag) == flag)
		cout << "1 and 2" << endl;*/

		//OR
	//uint32_t attendanceBook = 0u;
	///*if (!(attendanceBook & (int)pow(2, 0)))
	//	attendanceBook += (int)pow(2, 0);*/
	//attendanceBook |= ((int)pow(2, 0) + (int)pow(2, 2));
	//cout << attendanceBook << endl;

	//XOR
	//1^1 = 0
	//1^0 = 1
	//0^1 = 1
	//0^0 = 0
	/*int num0 = 5;
	int num1 = 10;
	cout << (num0 ^ num1);*/

	//uint32_t attendanceBook = 0u;

	//attendanceBook |= (int)pow(2, 0);
	//cout << attendanceBook << endl;

	//attendanceBook ^= (int)pow(2, 0);
	//cout << attendanceBook << endl;

	//attendanceBook ^= (int)pow(2, 0);
	//cout << attendanceBook << endl;

	/*int a = 1, b = 3, c = 2, d = 1, e = 2;
	cout << (a ^ b ^ c ^ d ^ e);*/

	// <<, >> Shift 연산자
	cout << (1 << 3);

}