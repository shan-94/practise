#include <iostream>
using namespace std;

class A {
public:
	A();
	A(int x){ a = x; }
	display() {
		cout << a ;
	}
private:
	int a;
};

int main() {
	cout << "Hello World \n";
	A obj1(4);
	obj1.display();
	//cout << obj1.a << "\n";
	return 0;
}