//Singleton
#include <iostream>

using namespace std;
#define singleton X::Instance()

class X {
private: //does not access
	X() = default; //constructor
	X(X&) = default; //copy constructor
	X& operator=(const X&) = default; //assigner

public:  //does access
	static X* Instance(); //static
	
	int hi();
	void xx() { cout << "xx" << endl; }
};

X* X::Instance()
{
	static X instance; //static
	return &instance;
}

int X::hi() {
	int a = 1;
	return a;
}

int main() {
	// X a; // Error!
	cout << X::Instance()->hi() << endl;
	singleton->xx();

	cin.get();
	return 0;

}
