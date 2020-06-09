#include<iostream>
#include<fstream>

#include<string>

#include<cmath>
#include<cstring>

#include<vector>

using namespace std;

int main(int argc, char *argv[]){

    ifstream file;
    string fileName = "pals.txt";

    cout << "Please Provide a file: ";

    //cin >> fileName;
    file.open(fileName);

    while(file.good()){

        cout << "file loaded from input." << endl;
    
        string line;
        while(file.peek() != EOF){

            getline(file, line);
            cout << "Read line: " << line << endl;

            cout << "Begining format..." << endl;

            string queuedPalindrome;
            for(int x = 0; x < line.size(); x++){

                if((int)line[x] >= 65 && (int)line[x] <= 90){

                    queuedPalindrome += (char)((int)line[x] + 32);
                }else if((int)line[x] >= 97 && (int)line[x] <= 122){

                    queuedPalindrome += (char)line[x];
                }
            }

            cout << "Formated string: " << queuedPalindrome << endl;
            cout << "Testing formated string for palindromeness..." << endl;

            for(int x = 0; x < floor(queuedPalindrome.size()/2); x++){

                if(queuedPalindrome[x] != queuedPalindrome[queuedPalindrome.size() - 1 - x]){

                    cout << queuedPalindrome << " is not a palindrome" << endl;
                    break;
                }else if(x == floor(queuedPalindrome.size()/2) - 1){

                    cout << queuedPalindrome << " is a palindrome" << endl;
                }
            }
        }
    }
    
    file.close();
}