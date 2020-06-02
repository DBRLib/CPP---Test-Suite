/**
 * @author Deven Ronquillo
 * @version 01/06/2020
 */
#include<iostream>

using namespace std;

int main(void){

    int rounds;

    cout << "---VARIABLE FIZZBUZZ---" << endl;
    cout << "Provide an int:";
    cin >> rounds;

    cout << endl;

    for(int x = 1; x <= rounds; x++){

        cout << x << ": ";

        if(x % 3 == 0){

            cout << "Fizz";
        }
        if(x % 5 == 0){

            cout << "Buzz";
        }

        cout << endl;
    }
}