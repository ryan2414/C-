#include <iostream>

using namespace std;
int main() {
	/*int i;
	for ( i = 0; i < 10; i++)
	{
		cout << i << endl;
	}*/
	//////
	/*int num;
	cin >> num;

	int total = 1;
	for (;num;num--)
	{
		total *= num;
	}
	cout << total << endl;*/
	//////
	/*for (char ch = 'a'; ch < 'z'; ch++)
	{
		cout << ch << endl;
	}*/
	//////
	int num;
	cin >> num;

	if (0 == num)
	{
		cout << 0 << endl;
	}
	else if (1 == num) {
		cout << 1 << endl;
	}
	else {
		int prevValue = 0;
		int currValue = 1;
		for (int i = 0; i < num - 1; i++)
		{
			int nextValue = prevValue + currValue;
			prevValue = currValue;
			currValue = nextValue;
		}

		cout << currValue;
	}



}