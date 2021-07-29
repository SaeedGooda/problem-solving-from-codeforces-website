/*
    ==========================================
    Problem Number : 136A
    Problem Name   : Presents
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;
int get(int arr[] , int v , int n){
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == v){
            return (i+1);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int p[n];
    for(int i = 0 ; i < n ; i++){
        cin >> p[i];
    }
    for(int i = 0 ; i < n ; i++){
        cout << get(p, i+1, n) << " ";
    }
    return 0;
}
