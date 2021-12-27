#include <iostream>
#include <array>

using namespace std;

int main() {
	array<int, 5> arr{};
	cout << arr.size() << endl;

	int arr0[5] = { 1,2,3,4,5 };
	cout << sizeof(arr0) / sizeof(int) << endl;

	array<int, 5> arr1{ 1,2,3,4,5 };
	array<int, 5> arr2{ 5,4,3,2,1};

	//arr1.swap(arr2);

	for (int i = 0; i < arr1.size(); ++i)
		cout << arr1[i];
	cout << endl;

	for (int i = 0; i < arr1.size(); ++i)
		cout << arr2[i];
	cout << endl;


}