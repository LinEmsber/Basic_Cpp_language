#include <iostream>

using namespace std;

class Shape
{
	public:

		// The virtual keyword will make the area() function a virtual function that 
		// allows for dynamic binding (i.e. runtime polymorphism).  The = 0 assignment
		// will make it a pure virtual function, and makes Shape an abstract class.
		virtual double area() = 0;
};

class Square : public Shape
{
	public:
		double side;

		Square(double side) : side(side) {}

		double area()
		{
			return side * side;
		}
};

class Triangle : public Shape
{
	public:
		double base;
		double height;

		Triangle(double base, double height) :
			base(base), height(height) {}

		double area()
		{
			return 0.5 * base * height;
		}
};

int main()
{
	// We *cannot* make a Shape object instance because it is an abstract class.
	// So the below code will cause a compiler error if we uncomment it.
	// Shape shape;

	// We CAN create pointers and references of the type of an abstract class,
	// allowing us to create an array of pointers to object instances of 
	// derived classes of Shape.
	Shape *shapes[] =
	{
		new Square(5),
		new Triangle(8,10),
	};

	// Because we have an array of pointers to Shapes, which support dynamic 
	// binding of the area() member function, we can use runtime polymorphism 
	// to loop through our array of pointers to Shapes and call the area 
	// member function for each object!  This allows us to utilize polymorphism,
	// BUT without implementing a "generic Shape" area member function that 
	// would not make any sense.
	//
	for (int i = 0; i < 4; i++)
		cout << "Shape " << i << ": " << shapes[i]->area() << endl;

	return 0;
}
