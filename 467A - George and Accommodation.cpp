/*
    ==========================================
    Problem Number : 467
    Problem Name   : George and Accommodation
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int p, q;
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> p >> q;
        if(q - p - 2 >= 0){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
