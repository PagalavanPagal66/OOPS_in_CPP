#include<bits/stdc++.h>
using namespace std;

class Constmethod {
private:
	int value;
	mutable int counter;
	// this mutables can the power to get updated even inside the const methods
public:
	void WithoutConstant() {
		value += 10;
	}
	void WithConstant() const {
		//value+=10; -> since this method is const, we cant make any modifications to the class variables here
		int a = 10;
		a += 10;
		counter++;
	}
};
int main() {
	int a = 10;
	int* ptr = &a;
	//regular int and its pointer
	cout << *ptr << endl;
	const int b = 20;
	// const int need to be typecasted before assingning into the int pointers
	int* ptr2 = (int*)&b;
	cout << *ptr2 << endl;


	const int * ptr3 = &b;
	int const * ptr4 = &b;
	// ptr3 & ptr4 does the same job here, they are const int pointers

	// If we have to make a pointer as constant ,
	// that is the pointer itself a constant, need change must be made
	const int* const ptr5 = &b;


	Constmethod obj;
	obj.WithConstant();
}