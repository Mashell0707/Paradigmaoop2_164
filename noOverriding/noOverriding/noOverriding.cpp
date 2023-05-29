#include <iostream>
using namespace std;

class baseClass {
public:
	virtual void perkenalan() final {
		cout << "Halo saya fuction dari Base Class!";
	}
};

class derivedClass : public baseClass {
public:
	void perkenalan() {
		cout << "Halo saya function dari derived class!";
	}
};
int main() {
	derivedClass a;
	a.perkenalan();
	return 0;
}