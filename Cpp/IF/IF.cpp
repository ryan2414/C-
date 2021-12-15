#pragma warning(disable : 4996)
#include <iostream>

using namespace std;

int main() {
	int num = 0;
	if (num == 0) {
		cout << "Executed 0" << endl;
	}

	if (num != 0) {
		cout << "Executed 1" << endl;
	}

	int num0 = 0;
	if (num0++ == 0 && num0++ == 1)
	{
		cout << num0 << endl;
		cout << "wow1" << endl;
	}

	int num1 = 1;
	bool result = num1 == 0;
	if (result) {
		cout << "num0 == 0" << endl;

	}
	else
	{
		cout << "!(num0 == 0)" << endl;
	}

	int score;
	cin >> score;
	char grade;
	if (score == 100)
		grade = 'A';
	else if (90 <= score && score < 100)
		grade = 'B';
	else if (80 <= score && score < 90)
		grade = 'C';
	else
	{
		grade = 'D';
	}

	cout << grade << endl;
		
	
	int number, number1;
	if (int count = scanf("%d %d", &number,&number1))
	{
		printf("count : %d", count);
	}
	else
	{
		printf("else count : %d", count);
	}
}