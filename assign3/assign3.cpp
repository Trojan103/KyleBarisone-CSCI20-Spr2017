#include <iostream>
using namespace std; 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

class scoreCalculator{ 
    
    public:
    
    void setScore(int sum){
        Score_ = sum;
        return;
    }
    
    int getScore(){
        int sum;
        int number;
        sum = sum + number;
    }
    
    
    private:
    int Score_;
    
};

    // initializing variable
    
    int main(){
    int number = 0;
    int turn = 1;
    int choice = 0;
    int AINumber = 0;
    int AIsum = 0;
    int sum = 0;
    
cout << "Enter a 1" << endl;    
cin >> choice;
    
while(turn == 1 && choice == 1){

cout << "Enter a 1 to roll or a 2 to pass" << endl;
cin >> choice;
    
    if(turn == 1 && choice == 1){
    number = rand() % 6 + 1;
    sum = sum + number;
    cout << "This is what you got last roll: " << number << endl;
    cout << "This is the total score: " << sum << endl;
    
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
        