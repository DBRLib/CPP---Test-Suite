/**
 *@author Deven Ronquillo
 *@version 01/06/2020 
 */

#include <iostream>
#include <stack>

using namespace std;

//GLOBS
stack<int> towerA;
stack<int> towerB;
stack<int> towerC;

//RECURSIVE PRINT FOR STACK
void printTower(stack<int> tower){

    if(tower.empty()){

        return;
    }

    int disk = tower.top();
    tower.pop();

    printTower(tower);

    cout << disk << " ";
}

//FORMATING PRINT FUNCTION
void printState(){

    cout << "---------- TOWER STATE ----------" << endl;

    cout << "Tower A | ";
    printTower(towerA);
    cout << endl;

    cout << "Tower B | ";
    printTower(towerB);
    cout << endl;

    cout << "Tower C | ";
    printTower(towerC);
    cout << endl;
}

//RECURSIVE HANOI METHOD
void move(int disk, stack<int> &source, stack<int> &spare, stack<int> &target){

    if(disk == 1){

        target.push(source.top());
        source.pop();

        printState();
        return;
    }

    move(disk - 1, source, target, spare);

    target.push(source.top());
    source.pop();

    printState();

    move(disk - 1, spare, source, target);
    
}

int main(){

    int disks;

    //GET DISK COUNT
    cout << "---TOWERS OF HANOI---" << endl;
    cout << "Enter disk count: ";
    cin >> disks;

    //POPULATE STARTING TOWER
    for(int x = disks; x >= 1; x--){

        towerA.push(x);
    }

    printState();
    move(disks, towerA, towerB, towerC);

    return 0;
}