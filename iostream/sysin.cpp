/**
 *@author Deven Ronquillo
 *@version 01/06/2020 
 */
#include <iostream>

using namespace std;

//Simple command line data retrieval + casting.
int main(){

    char c;
    int i;
    float f;


    cout << "Input a single char: ";
    cin >> c;
    cout << "Input an int:";
    cin >> i;
    cout << "input a float:";
    cin >> f;

    printf("the char %c when cast to an int is: %i\n", c, int(c));
    printf("the char %c when cast to a float is: %f\n", c, float(c));

    printf("the int %i when cast to a char is: %c\n", i, char(i));
    printf("the int %i when cast to a float is: %f\n", i, float(i));

    printf("the float %f when cast to a int is: %c\n", f, int(f));
    printf("the float %f when cast to a char is: %i\n", f, char(f));

    return 0;
}