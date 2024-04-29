#include<bits/stdc++.h>
using namespace std;


class SmartPtr {
	int* ptr;
public:
	explicit SmartPtr(int* p = NULL) { ptr = p; }
	int value() {
		return *ptr;
	}
	void changeval() {
		(*ptr)++;
	}
	~SmartPtr() {cout << "DELETED" << endl; delete (ptr); }
	int& operator*() { return *ptr; }
};

int main() {
	int value = 10;
	int* ptr = &value;
	unique_ptr<SmartPtr> P1(new SmartPtr(ptr));
	//cout << P1->value() << endl;
	unique_ptr<SmartPtr> P2(new SmartPtr(ptr));
	//P2 = move(P1);
	// cout << P2->value() << endl;
	// cout << P1->value() << endl;
	// shared_ptr<SmartPtr> P3(new SmartPtr(ptr));
	// weak_ptr<SmartPtr> P4 (P3);
	// cout << P3->value() << endl;
	P1->changeval();
	cout << P2->value() << endl;
	cout << P1->value() << endl;
}
