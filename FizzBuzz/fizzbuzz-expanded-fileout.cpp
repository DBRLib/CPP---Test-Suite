/**
 * @author Deven Ronquillo
 * @version 02/06/2020
 */
#include<iostream>
#include<fstream>

using namespace std;

int main(void){

    int rounds;

    cout << "---VARIABLE FIZZBUZZ---" << endl;
    cout << "Provide an int:";
    cin >> rounds;

    cout << endl;

    ofstream fileOut;
    fileOut.open("fb_out.txt");

    for(int x = 1; x <= rounds; x++){

        cout << x << ": ";
        fileOut << x << ": "; 

        if(x % 3 == 0){

            cout << "Fizz";
            fileOut << "Fizz";
        }
        if(x % 5 == 0){

            cout << "Buzz";
            fileOut << "Buzz";
        }

        cout << endl;
        fileOut <<endl;
    }

    fileOut.close();
    return 0;
}