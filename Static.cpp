#include<bits/stdc++.h>
using namespace std;

class A {
public:
	static int a;
	A(int value) {
		a = value;
	}
	static void Printer() {
		cout << a << endl;
	}
};

class B {
public:
	int* a;
	B(int &value) {
		a = &value;
	}
	void Printer() {
		cout << *a << endl;
	}
	int IncreaseCounter() {
		(*a)++;
	}

	void PrintCounter() {
		cout << *a << endl;
	}
	~B() {
		cout << a << endl;
		free(a);
		cout << "DELETED" << endl;
		cout << a << endl;
	}
};


static int cnt = 0;

int IncreaseCounter() {
	cnt++;
}

void PrintCounter() {
	cout << cnt << endl;
}

int A::a;

int main() {
	A a(10);
	A::Printer();
	IncreaseCounter();
	IncreaseCounter();
	PrintCounter();
}