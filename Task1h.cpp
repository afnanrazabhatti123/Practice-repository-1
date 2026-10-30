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

// search key in array of size n, and return its index, otherwise return -1
int searchIndex(array<char, 100> a, int n, char key)
{
	int loc = -1;  // -1 an invalid index, assuming key is not in array
	
	int i = 0;
	while(i < n)
	{
		if(a[i] == key && loc == -1)
		{
			loc = i;
		}
		i = i+1;
	}
	
	return loc;
}

bool search(array<char, 100> a, int n, char key)
{
	bool r;
	int j = searchIndex(a, n, key);
	r = j != -1;
	return r;
}

int main()
{
	// array of capacity 100 have 7 data items
	array<char, 100> ar{'F','6','d','e','1','3','b'};
	int N = 7;
	
	cout << "Array is " << endl;
	outputArray(ar, N);
	cout << endl << endl;
	
	int locOf55 = searchIndex(ar, N, '55');
	cout << "The zero based location of 55 is : ";
	cout << locOf55 << endl;
	
	int locOfF = searchIndex(ar, N, 'F');
	cout << "The zero based location of f is : ";
	cout << locOfF << endl;
	
	bool s55 = search(ar, N, 55);
	cout << "55 is in array, bool saying : ";
	cout << s55 << endl;
	
	bool s20 = search(ar, N, 20);
	cout << "20 is in array, bool saying : ";
	cout << s20 << endl;

    return 0;
}