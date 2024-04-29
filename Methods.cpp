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
