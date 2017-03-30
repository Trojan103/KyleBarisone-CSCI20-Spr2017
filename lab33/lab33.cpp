#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
    
    int userNum = 0;
    int i = 0;
    int guessAttempts = 0;
//these next two lines are my randomizer
    srand(time(0));
    int randNum = rand() % 50 + 1;
    
//My while loop which calculates if the user number is correct, too high, or too low  

    while (userNum != randNum){
        
        cout << "Please enter a number between 1 and 50: " << endl;
        cin >> userNum;
    
        if (userNum < randNum){
            cout << "Too low" << endl;
        }
        
        else if (userNum > randNum){
            cout << "too high" << endl;
        }
    }
    
    for(i=0; i <=10; i++){
    if (userNum = randNum){
        cout << "Congratulations!! You Win!" <<endl;
    }
    }
    
    
}