#pragma warning(disable: 4996)
#include <cstdio>

int main() {
	int num = 0;
	scanf("%d", &num);//C에서는 함수 외부에 있는 변수를 사용할 때 &를 사용해야한다. 
	printf("%d", num);
}