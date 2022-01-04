#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class String {
private:
	char* _chars;

public:
	String(const char* chars)
		: _chars(new char[strlen(chars) + 1]) {
		strcpy(_chars, chars);
	}

	char& operator[](int index) {
		const String& s = *this;
		const char& c = s[index];
		return const_cast<char&>(c);
	}

	const char& operator[](int index)  const {
		return _chars[index];
	}
};

void func(const int& i) {

	int& j = const_cast<int&>(i);
	j = 10;
}

int main() {
	int i = 0;
	func(i);

	cout << i << endl;

	String s0("abc");
	s0[0] = 'b';
	cout << s0[0] << endl;

	const String& s1 = s0;
	cout << s1[0] << endl;
}