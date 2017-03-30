#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

/* Kyle Barisone
March 30 2017
This program picks a random number between 1 and 50. after that is done, the user
enters a number between 1 and 50. If the number entered is less than the random
number, it will say too low and vice versa. When you guess the number correctly
a for loop is used to repeat the congratulations message.*/

int main() {
    
    //These are my variables used for the program
    
    int userNum = 0;
    int i = 0;
    
//these next two lines are my randomizer

    srand(time(0));
    int randNum = rand() % 50 + 1;
    
//My while loop which calculates if the user number is correct, too high, or too low  

    while (userNum != randNum){
    
        if (userNum < randNum){
            cout << "Too low" << endl;
        }
        
        else if (userNum > randNum){
            cout << "too high" << endl;
        }
        
        cout << "Please enter a number between 1 and 50: " << endl;
        cin >> userNum;
    }
    
//This prints "Congratulations you win while i is less than or equal to 10." 

    for(i=0; i <= 10; i++){
        
        if (userNum = randNum){
            cout << "Congratulations!! You Win!" <<endl;
        }
    }
    
    
}