#include <iostream>
using namespace std; 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number = 0;
    int turn = 1;
    int choice = 0;
    int AINumber = 0;
    int AIsum = 0;
    int sum = 0;
    
    cin >> choice;
    
while(turn == 1 && choice == 1){
cin >> choice;
    
    if(turn == 1 && choice == 1){
    number = rand() % 6 + 1;
    sum = sum + number;
    cout << number << ": This is what you got last roll" << endl;
    cout << sum << ": This is the total score" << endl;
    
    if(number == 1){
            cout << "you got a 1 and reset your score.";
            
    }
    }
    
if (turn == 1 && choice == 2){
turn = turn + 1;
    
    }
}
    
    while(turn == 2){
    AINumber = rand() % 6 + 1;
    AIsum = AIsum + AINumber;
    cout << AINumber << ": The computer got this roll" << endl;
    cout << AIsum << ": This is the total AI score" << endl;
    
    if (AINumber == 2){
        turn = turn - 1;
        choice = 1;
    }
    
    if (AINumber == 1){
        AIsum = 0;
        turn = turn - 1 ;
        choice = 1;
    }
        
    }
    



}