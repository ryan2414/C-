#include <iostream>

using namespace std;

int main() {
	//const int arraySize = 31;
	//bool attendanceBook[arraySize];
	////배열 갯수는 상수가 들어가야 한다.

	//int nums[3] = { 1,2,3 };
	int nums0[] = { 1,2,3,4,1,2,3,1,2,3,1,2,3 };
	int nums[] = { 5,4,3,1,7,4,3,5,6,1,2 };
	int result = 0;
	for (int i = 0; i < size(nums0); ++i)
	{
		result ^= nums0[i];
	}
	cout << result << endl;

	for (int i = 0; i < size(nums); ++i) {
		for (int j = 0; j < size(nums) - i - 1; ++j)
		{
			if (nums[j] > nums[j + 1])
			{
				int temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < size(nums); i++)
	{
		cout << nums[i] << endl;
	}
}