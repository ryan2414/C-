#include <iostream>

using namespace std;

int main() {
	int nums[3] = { 1,2,3 };
	int matrix[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int matrix1[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int matrix2[3][3] = {};

	//memcpy(&matrix2, &matrix, sizeof(matrix));
	//copy(&matrix[0][0], &matrix[0][0] + 3 * 3, &matrix2[0][0]);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				matrix2[i][j] += matrix[i][k] * matrix1[k][j];
			}
		}
	}

	for (int i = 0; i < size(matrix2); i++)
	{
		for (int j = 0; j < size(matrix2[i]); j++)
		{
			cout << matrix2[i][j]<< " ";
		}
		cout << endl;
	}


}