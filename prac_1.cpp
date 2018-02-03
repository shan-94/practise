#include <iostream>
using namespace std;

class A {
public:
	A();
	A(int x) { 
		a = x;
		b = 0; 
	}
	
	A(int x, int y) {
		a = x;
		b = y;
	}
	display() {
		cout << a << " " << b;
	}
private:
	int a;
	int b;
};

int main() {
	cout << "Hello World \n";
	A obj1(4);
	obj1.display();
	//cout << obj1.a << "\n";
	return 0;
}