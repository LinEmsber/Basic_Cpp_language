#include<iostream>
#include<array>

using namespace std;

int main() {
	array<int,4>a = {10, 20, 30, 40};
	cout << "The size of array is : ";

	//size of the array using size()
	cout << a.size() << endl;

	//maximum no of elements of the array
	cout << "Maximum number of elements array can hold is : ";
	cout << a.max_size() << endl;

	// Printing array elements using at()
	cout << "The array elements are (using at()) : ";
	for ( int i=0; i<4; i++)
		cout << a.at(i) << " ";
	cout << endl;

	// Filling array with 1
	a.fill(1);

	// Displaying array after filling
	cout << "Array after filling operation is : ";
	for ( int i=0; i<4; i++)
		cout << a[i] << " ";

	return 0;
}
