/**
 *@author Deven Ronquillo
 *@version 01/06/2020 
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//VS Code helloworld example. 
int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}