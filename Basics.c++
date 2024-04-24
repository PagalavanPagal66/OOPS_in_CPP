#include<bits/stdc++.h>
using namespace std;


class person {
private:
	string personal_mail;
	int age;
protected:
	string gender;
	string mobile_number;
public:
	string name;
	person(string fun_name, string fun_gender) {
		name = fun_name;
		age = 0;
		gender = fun_gender;
	}
	void increase_age() {
		age++;
	}
	void decrease_age() {
		age--;
	}
	void get_details() {
		cout << " Name : " << name << endl;
		cout << " Age  : " << age << endl;
	}
};

class temp : public person {
public:
	temp(string name, string gender) : person(name, gender) {

	}
	void get_protected_values() {
		cout << gender << endl;
	}
};

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	person pagal("pagal", "male");
	pagal.increase_age();
	pagal.increase_age();
	pagal.get_details();
	temp child("child", "female");
	child.get_protected_values();
	child.get_details();
	return 0;
}
