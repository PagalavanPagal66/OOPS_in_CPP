#include<bits/stdc++.h>
using namespace std;

class A {
public:
	// fun -> virtual function
	virtual void fun() {
		cout << "A class fun" << endl;
	}
	// pure -> pure virtual function
	//virtual void pure() = 0;
};

class B: public A {
public:
	virtual void fun() {
		cout << "B class fun" << endl;
	}
	void pure() {
		cout << " B pure" << endl;
	}
};

class C: public B {
public:
	void fun() {
		cout << "C class fun" << endl;
	}
	void pure() {
		cout << " C pure" << endl;
	}
	string name = "C";
};

int32_t main() {
	// The A pointer with B object
	A* b_pointer = new B();
	b_pointer->fun();
	// output the updated function upto B

	// The B pointer with C object
	B* c_pointer = new C();
	c_pointer->fun();
	// output the updated function upto C

	//cout << c_pointer->name << endl;
	A a;
	a.fun();
	// ouputs the default function in A (without any updates)
}