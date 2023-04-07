#include <iostream>
using namespace std;

class Base {
	public:
		int publicMember = 0xa;
	protected:
		int protectedMember;
	private:
		int privateMember;
};

class Derived : protected Base {
	public:
		void printMembers() {
			cout << "Public member: " << publicMember << endl;
			cout << "Protected member: " << protectedMember << endl;
			// privateMember is not accessible in the derived class
		}
};

class Derived2 : public Derived {
	public:
		void accessProtectedMember() {
			// protectedMember is accessible in the derived class
			protectedMember = 20;
		}
};

int main() {

	Derived derivedObj;
	derivedObj.printMembers();

	Derived2 derivedObj2;
	// publicMember and protectedMember are not accessible outside the class hierarchy
	derivedObj2.accessProtectedMember();
	derivedObj2.printMembers();
	return 0;
}
