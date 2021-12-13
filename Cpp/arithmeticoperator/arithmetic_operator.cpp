#include <iostream>

using namespace std;

int main() {
	/*cout << 40 - 32 / 2 << "==" << 24 << endl;
	cout << 4 - 6 + 2 + 8 / 2 / 2 * 2 << endl;
	int a, b, c;
	a = b = c = 10;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;*/
	
	int num = 10;
	cout << ++num + num++ << endl;
	cout << num << endl;

	printf("%d %d\n", ++num, ++num);
	printf("%d\n", num);

	//한 문장에 같은 변수를 조작하면 오류가 발생할 수 있다.

}