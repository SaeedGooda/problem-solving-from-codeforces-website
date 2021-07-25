/*
    ==========================================
    Problem Number : 339A
    Problem Name   : Helpful Maths
    Author         : Saeed Gooda
    ==========================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int len = ceil((double)str.size()/2);
    char a[len];
    int j = 0;
    for(int i = 0 ; i < str.size() ; i++){
        if(str[i] == '+'){
            continue;
        }
        a[j] = str[i];
        j++;
    }
    int size = sizeof(a)/sizeof(a[0]);
    sort(a,a+size);
    for(int i = 0 ; i < size ; i++){
        if(i != size-1){
            cout << a[i] << "+";
        }
        else{
            cout << a[i];
        }
    }
    return 0;
}
