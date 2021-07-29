/*
    ==========================================
    Problem Number : 160A
    Problem Name   : Twins
    Author         : Saeed Gooda
    ==========================================
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], sum = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr+n);
    sum = sum/2;
    int sum2 = 0 , count = 0;
    for(int i = n-1 ; i >=0  ; i--){
        if(sum2 > sum){
            break;
        }
        count++;
        sum2 += arr[i];
    }
    cout << count << endl;
    return 0;
}
