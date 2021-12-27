#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char str[] = "abc";
	cout << str << endl;
	cout << str[0] << endl;
	cout << str[1] << endl;
	cout << str[2] << endl;
	cout << str[3] << endl;
	cout << sizeof(str) << endl;

	cout << (int)str[0] << endl;
	cout << (int)str[1] << endl;
	cout << (int)str[2] << endl;
	cout << (int)str[3] << endl;
	cout << strlen(str) << endl;
}