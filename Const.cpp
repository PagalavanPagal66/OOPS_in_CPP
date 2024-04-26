#include<bits/stdc++.h>
using namespace std;

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

}