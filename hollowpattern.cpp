#include<iostream>
#include<array>
using namespace std;
int main(){
int n ;
cout<<"Enter the height of the hollow diamond(only odd):"<<endl;
cin>>n;
int i = 1;
while (i <= 2 * n - 1) {
    int k;
    if (i <= n)
        k = i;
    else
        k = 2 * n - i;
    int s = 1;
    while (s <= n - k) {
        cout << " ";
        s++;
    }
    int j = 1;
    while (j <= 2 * k - 1) {
        if (j==1|| j == 2 * k - 1)
            cout << "*";      // dono kinaare
        else
            cout <<" ";      // andar khali
        j++;
    }
    cout << endl;
    i++;
}
return 0;
}