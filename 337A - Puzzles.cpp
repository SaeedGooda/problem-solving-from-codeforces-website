/*
    ==========================================
    Problem Number : 337A
    Problem Name   : Puzzles
    Author         : Saeed Gooda
    ==========================================
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int f[m];
    for(int i = 0 ; i < m ; i++){
        cin >> f[i];
    }
    sort(f,f+m);
    int Min = 1000000000;
    for(int i = 0 ; i+n-1 < m ; i++){
        if(f[n-1+i]-f[i] < Min){
            Min = f[n-1+i]-f[i];
        }
    }
    cout << Min << endl;
    return 0;
}

