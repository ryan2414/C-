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
	//A�� B�� ���踦 ����� ������
	//(���� - ������)���� �����ϸ� ���ϴ�.
	//cout.setf(ios_base::boolalpha);
	//cout << ((1 <=> 1) == 0) << endl;
	//cout << ((1 <=> 1) < 0) << endl;
	//cout << ((2 <=> 1) > 0) << endl;
	//cout << is_eq(1 <=> 1) << endl;//������
	//cout << is_neq(1 <=> 1) << endl;//�ٸ���
	//cout << is_lt(1 <=> 2) << endl;//������ ������ (less than)
	//cout << is_lteq(1 <=> 2) << endl;//������ �۰ų� ������
	//cout << is_gt(3 <=> 2) << endl;//������ ū��
	//cout << is_gteq(3 <=> 2) << endl;//������ ū��

	cout.setf(ios_base::boolalpha);
	cout << typeid(1 <=> 1).name() << endl;//strong_order ������ ������ 
	cout << typeid(1 <=> 1.0).name() << endl;//partial_ordering ������?
	cout << ((1 <=> 1.0) == partial_ordering::equivalent) << endl;
	cout << ((1 <=> 1) == strong_ordering::equal) << endl;
}