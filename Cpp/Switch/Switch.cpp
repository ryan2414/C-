#include <iostream>

using namespace std;

int main() {
	cout << "What's your favorite food?" << endl;
	cout << "1) Kimch" << endl;
	cout << "2) Korean BBQ" << endl;
	cout << "3) Chicken" << endl;
	cout << ">";

	int num;
	cin >> num;

	switch (num)
	{
	case 1:
		cout << "You selected Kimch" << endl;
		break;
	case 2:
		cout << "You selected Korean BBQ" << endl;
		break;
	case 3:
		cout << "You selected Chicken" << endl;
		break;
	default:
		cout << "Invalid Input" << endl;
		break;
	}
}