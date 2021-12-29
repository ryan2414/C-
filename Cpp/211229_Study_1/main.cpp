#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>
#include <compare>

using namespace std;

class String {
private:
	char* _chars;

public:
	explicit String(const char* chars) : _chars(new char[strlen(chars) + 1]) {
		strcpy(_chars, chars);
	}

	bool operator==(const String& s) const {
		return strcmp(_chars, s._chars) == 0;
	}

	bool operator==(const char* s) const {
		return strcmp(_chars, s) == 0;
	}

	bool operator!=(const String& s) const {
		return !(*this == s);
	}

	bool operator<(const String& s) const {
		return strcmp(_chars, s._chars) < 0;
	}

	bool operator>(const String& s) const {
		return strcmp(_chars, s._chars) > 0;
	}

	bool operator>=(const String& s) const {
		return !(*this < s);
	}

	bool operator<=(const String& s) const {
		return !(*this > s);
	}

	strong_ordering operator<=>(const String& s) const {
		int result = strcmp(_chars, s._chars);
		if (result < 0)
			return strong_ordering::less;
		if (result > 0)
			return strong_ordering::greater;
		return strong_ordering::equal;
	}

	void print() {
		cout << _chars << endl;
	}

	friend bool operator==(const char* s0, const String& s1);
};

bool operator==(const char* s0, const String& s1) {
	return strcmp(s0, s1._chars) == 0;
}
int main() {
	String s0("b");
	String s1("a");

	if ("b" == s0)
		cout << "!s!" << endl;

}