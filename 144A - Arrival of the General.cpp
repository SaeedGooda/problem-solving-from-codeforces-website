/*
    ==========================================
    Problem Number : 144A
    Problem Name   : Arrival of the General
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int maxIndex(int arr[], int n){
    int Max = 0 , index = 0;
    for(int i = n-1 ; i >= 0 ; i--){
        if(arr[i] >= Max){
            Max = arr[i];
            index = i;
        }
    }
    return index;
}
int minIndex(int arr[], int n){
    int Min = 10000000 , index = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] <= Min){
            Min = arr[i];
            index = i;
        }
    }
    return index;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    (minIndex(a,n) < maxIndex(a,n))? cout << (n - minIndex(a,n) - 1) + maxIndex(a,n) - 1 << endl :
        cout << (n - minIndex(a,n) - 1) + maxIndex(a,n) << endl;
    return 0;
}
