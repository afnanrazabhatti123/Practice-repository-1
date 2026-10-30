#include<iostream>
#include<array>
using namespace std;
bool ispalindrome(array<char,100>arr,int n){
    bool w=false;
    int i=0;
    while(i<n){
        if(arr[i]==arr[n-1-i])
        w=true;
        else{
            w=false;
            break;
        }
        i++;
    }
    return w;
}
int main(){
    array<char,100>arr;
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int i=0;
    cout<<"Enter "<<n<<" numbers in array:"<<endl;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    cout<<"1 for yes and 0 for no:"<<ispalindrome(arr,n);
    return 0;
}