/*
    ==========================================
    Problem Number : 25A
    Problem Name   : IQ test
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, even = 0, odd = 0 , evenIndex, oddIndex;
    for(int i = 1 ; i <= n ; i++){
        cin >> a;
        if(a % 2 == 0){
            even++;
            evenIndex = i;
        }
        else{
            odd++;
            oddIndex = i;
        }
    }
    if(even > odd) cout << oddIndex; else cout << evenIndex;
    return 0;
}
