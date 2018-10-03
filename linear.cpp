#include<iostream>
using namespace std;

int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
         return i; 
    return -1; 
} 
int main()
{
int n, x;
cout<<"size of the array\n";
cin>>n;
int arr[n];
cout<<"value to bea searched\n";
cin>>x;
cout<<search(arr[],n,x);
}