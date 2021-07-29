/*
    ==========================================
    Problem Number : 677A
    Problem Name   : Vanya and Fence
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int a[n];
    int width = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        (a[i] > h)? width += 2 : width += 1;
    }
    cout << width << endl;
    return 0;
}
