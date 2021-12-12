#pragma warning(disable: 4996)
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	freopen("output.txt", "w", stdout);

	cout << 1 << endl;
	cout << '1' << endl;

	cout << 'a' << endl;
	cout << (char)97 << endl;

	operator << (cout, 'a');

	cout << 'a' << 'b' << endl;

	cout.put('a');
	cout.put('\n');
	cout.write("hello world", 5) << endl;

	cout.width(10);
	//cout.fill('#');
	cout << 1 << endl;

	float num = 0.1234567f;
	cout << num << endl;

	cout.precision(2);
	cout << num << endl;

	cout.precision(10);
	cout << num << endl;

	cout.setf(ios_base::showpos);
	cout << 1 << endl;

	cout.unsetf(ios_base::showpos);
	cout << 2 << endl;


	cout << true << endl;
	cout << false << endl;

	cout.setf(ios_base::boolalpha);
	cout << true << endl;
	cout << false << endl;


	cout.setf(ios_base::right, ios_base::adjustfield);
	cout.width(10);
	cout << -10 << 20 << endl;

	cout.setf(ios_base::left, ios_base::adjustfield);
	cout.width(10);
	cout << -10 << 20 << endl;

	cout.setf(ios_base::internal, ios_base::adjustfield);
	cout.width(10);
	cout << -10 << 20 << endl;

	cout.setf(ios_base::hex, ios_base::basefield);
	cout << 16 << endl;

	cout.setf(ios_base::dec, ios_base::basefield);
	cout << 16 << endl;

	cout.setf(ios_base::oct, ios_base::basefield);
	cout << 16 << endl;

	cout << hex << 16 << endl;

	hex(cout);
	cout << 16 << endl;

	cout << setw(10) << setfill('#') << setprecision(10) << showpos << 1.1f << endl;
	cout << setw(10) << setfill('#') << setprecision(1) <<   0.1f << endl;

}