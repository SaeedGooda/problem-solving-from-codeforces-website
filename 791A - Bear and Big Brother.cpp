/*
    ==========================================
    Problem Number : 791A
    Problem Name   : Bear and Big Brother
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b; // a ==> weight of Limak & b ==> weight of Bob
    int num = 0;
    cin >> a >> b;
    if(a <= b){
        while(a<=b){
            a *= 3;
            b *= 2;
            num++;
        }
        cout << num << endl;
    }
    return 0;
}
