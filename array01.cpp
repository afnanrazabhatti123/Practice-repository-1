#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
	cout << "Declaring two arrays a and b of four floats" << endl << endl;
	
	// float a[4]; // we will use modern style as follows
	// float b[4]; // we will use modern style as follows
	array<float, 4> a;
	array<float, 4> b;
	
	cout << "initializing array a element by element" << endl << endl;

	a[0] = 0.001;
	a[3] = 3.72;
	a[1] = 1.99;
	a[2] = 2.2222;
	
	cout << "displaying array a, element by element" << endl;
	cout << a[0] << ", ";
	cout << a[1] << ", ";
	cout << a[2] << ", ";
	cout << a[3] << endl;
	cout << endl;

	cout << "assigning complete array a to array b, using assignment operator as: b = a" << endl << endl;
	b = a;
	
	cout << "displaying array b, element by element using loop and varying index k" << endl;
	int k = 0;
	while(k < 4)
	{
		cout << b[k] << ", "; // output k'th element of array
		a[k] = k * b[k]; // just demonstrating use of array elements in expression
		k = k + 1;
	}
	cout << endl << endl;

	float sum = b[0]+b[1]+b[2]+b[3];
	cout << "sum of elements array b is " << sum << endl;
	cout << "average of elements array b is " << sum/4.0 << endl;
	cout << endl;
	
	float sum2 = a[0]+a[1]+a[2]+a[3];
	cout << "sum of elements array a is " << sum2 << endl;
	cout << "average of elements array a is " << sum2/4.0 << endl;
	cout << endl;
	
	
	return 0;
}