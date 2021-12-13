#include <iostream>
#include <compare>
using namespace std;

int main() {
	/*int num0 = 10, num1(10);
	if (num0 == num1)
	{
		cout << "num0 == num1" << endl;
	}*/

	//int num0 = 1, num1(0);
	//if (num0 <=> num1)
	//	cout << "num0, num1" << endl;
	//A와 B의 관계를 물어보는 연산자
	//(왼쪽 - 오른쪽)으로 생각하면 편하다.
	//cout.setf(ios_base::boolalpha);
	//cout << ((1 <=> 1) == 0) << endl;
	//cout << ((1 <=> 1) < 0) << endl;
	//cout << ((2 <=> 1) > 0) << endl;
	//cout << is_eq(1 <=> 1) << endl;//같은지
	//cout << is_neq(1 <=> 1) << endl;//다른지
	//cout << is_lt(1 <=> 2) << endl;//왼쪽이 작은지 (less than)
	//cout << is_lteq(1 <=> 2) << endl;//왼쪽이 작거나 같은지
	//cout << is_gt(3 <=> 2) << endl;//왼쪽이 큰지
	//cout << is_gteq(3 <=> 2) << endl;//왼쪽이 큰지

	cout.setf(ios_base::boolalpha);
	cout << typeid(1 <=> 1).name() << endl;//strong_order 완전히 같은것 
	cout << typeid(1 <=> 1.0).name() << endl;//partial_ordering 동등한?
	cout << ((1 <=> 1.0) == partial_ordering::equivalent) << endl;
	cout << ((1 <=> 1) == strong_ordering::equal) << endl;
}