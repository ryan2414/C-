#include <iostream>
#include <numeric>

using namespace std;

int main() {
	cout << (int)numeric_limits<uint8_t>::max() << endl;
	cout << numeric_limits<uint16_t>::max() << endl;
	cout << numeric_limits<uint32_t>::max() << endl;
	cout << numeric_limits<uint64_t>::max() << endl;
	cout << endl;
	cout << (int)numeric_limits<int8_t>::max() << endl;
	cout << numeric_limits<int16_t>::max() << endl;
	cout << numeric_limits<int32_t>::max() << endl;
	cout << numeric_limits<int64_t>::max() << endl;
	cout << endl;
	cout << (int)numeric_limits<int8_t>::min() << endl;
	cout << numeric_limits<int16_t>::min() << endl;
	cout << numeric_limits<int32_t>::min() << endl;
	cout << numeric_limits<int64_t>::min() << endl;
}