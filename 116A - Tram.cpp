/*
    ==========================================
    Problem Number : 116A
    Problem Name   : Tram
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b;
    int capacity = 0;
    int stillIn = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> a >> b;
        stillIn -= a;
        stillIn += b;
        capacity = max(capacity,stillIn);
    }
    cout << capacity;
    return 0;
}
