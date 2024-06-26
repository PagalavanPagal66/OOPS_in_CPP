#include<bits/stdc++.h>
using namespace std;


class SmartPtr {
	int* ptr;
public:
	explicit SmartPtr(int* p = NULL) { ptr = p; }
	int value() {
		return *ptr;
	}
	~SmartPtr() {cout << "DELETED" << endl; delete (ptr); }
	int& operator*() { return *ptr; }
};

int main() {
	int value = 10;
	int* ptr = &value;
	unique_ptr<SmartPtr> P1(new SmartPtr(ptr));
	cout << P1->value() << endl;
	unique_ptr<SmartPtr>P2;
	P2 = move(P1);
	cout << P2->value() << endl;
	cout << P1->value() << endl;
}
