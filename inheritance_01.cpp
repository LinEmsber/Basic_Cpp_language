#include <iostream>
using namespace std;

class Base {
	public:
		int publicMember;
	protected:
		int protectedMember;
	private:
		int privateMember;
};

class Derived : public Base {
	public:
		void printMembers() {
			cout << "Public member: " << publicMember << endl;
			cout << "Protected member: " << protectedMember << endl;
			// privateMember is not accessible in the derived class
		}
};

int main() {

	Base baseObj;
	baseObj.publicMember = 1;
	cout << baseObj.publicMember << endl;

	Derived derivedObj;
	derivedObj.publicMember = 10;
	// protectedMember and privateMember are not accessible outside the class hierarchy
	derivedObj.printMembers();

	return 0;
}
