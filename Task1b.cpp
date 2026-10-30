#include <iostream>
#include <string>
#include <array>

using namespace std;

void outputArray(array<char, 100> a, int n)
{
	int i = 0;
	while(i < n)
	{
		cout << a[i] << ", ";
		i = i+1;
	}
	
	return;
}

int arraySum(array<char, 100> a, int n)
{
	int sum = 0;  // initial assumed sum with adding anything
	
	int i = 0;
	while(i < n)
	{
		sum = sum+a[i];
		i = i+1;
	}
	
	return sum;
}

int main()
{
	// array of capacity 100 have 7 data items
	array<char, 100> ar{'A','B','d','e','f','3','5'};
	int N = 7;
	
	int total = arraySum(ar, N);
	
	cout << "Array is " << endl;
	outputArray(ar, N);
	cout << endl << endl;
	
	cout << "The total of items in array is: ";
	cout << total << endl;
	
    return 0;
}