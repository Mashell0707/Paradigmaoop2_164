#include <iostream>
using namespace std;

class baseClass final {
public:
	virtual void perkenalan() {
		cout << "Halo saya function dari base class ";
	}
};
class derivedClass {
public:
	void perkenalan() {
		cout << "Halo saya function dari derived class";
	}
};
int main() {
	derivedClass a;
	a.perkenalan();

	return 0;
}