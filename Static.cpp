#include<bits/stdc++.h>
using namespace std;

class A {
public:
	static int a;
	A(int value) {
		a = value;
	}
	static void printer() {
		cout << a << endl;
	}
};

int A::a;

int main() {
	A a(10);
	A::printer();
}