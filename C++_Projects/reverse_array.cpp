#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"dislay reverse array: ";
    for(int i = n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
