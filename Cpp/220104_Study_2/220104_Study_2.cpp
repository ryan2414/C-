#include <iostream>

using namespace std;

enum class TypeA {
	A, B, C
};

enum class TypeB {
	A, B, C
};

int main() {
	TypeA typeA = static_cast<TypeA>(0);
	TypeB typeB = static_cast<TypeB>(typeA);

	cout << static_cast<int>(typeA) << endl;
	cout << static_cast<int>(typeB) << endl;


}