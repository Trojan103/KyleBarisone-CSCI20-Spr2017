#include <iostream>
using namespace std; 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Class that calculates the score

class scoreCalculator{ 
    
    public:
    
    scoreCalculator(){
        Score_ = 0;
        
    }
    void setNumber(int number){
    number = rand() % 6 + 1;
       return;
    }
    
    void setScore(int sum){
        int number;
       return;
    }
    
    //void resetScore(){
        //int sum = 0;
        //return;
    //}
    int getNumber(){
        int number;
        return number;
    }
    int getScore(){
        int sum;
        return sum;
        
    }
    
    
    private:
    int Score_;
    
};

    // initializing variable
    
    int main(){
    int number;
    int turn = 1;
    int choice = 0;
    int AINumber = 0;
    int AIsum = 0;
    int sum = 0;
    
    scoreCalculator score;
    
    // prompts the user to play 
    
cout << "Enter a 1 to play" << endl;    
cin >> choice;

   // while loop that decides whose turn it is and keeps track of the score
   
while(turn == 1 && choice == 1){
cout << "Enter a 1 to roll or a 2 to pass" << endl;
cin >> choice;
    
        
  // if statement that picks the random number and adds it to your score  
  
    if(turn == 1 && choice == 1){
    number = rand() % 6 + 1;
    score.setScore(sum);
    sum = sum + number;
    
    cout << "This is what you got last roll: " << number << endl;
    cout << "This is the total score: " << sum << endl;
    
    score.setScore(sum);
    cout << "Testing class value for sum: " << score.getScore() << endl;
    cout << " " << endl;
    
    
    }
    
    if(number == 1){
            cout << "you got a 1 and reset your score." << endl;
            sum = 0;
            cout << "This is what you got last roll: " << number << endl;
            cout << "This is the total score: " << sum << endl;
            turn = 2;
    }
        
    
   //if statement for if you pass
   
    if (turn == 1 && choice == 2){
    turn = turn + 1;
    }
   // nested while loop so it comes back to you when the computer is finished
   
    while(turn == 2){
    AINumber = rand() % 6 + 1;
    AIsum = AIsum + AINumber;
    cout << AINumber << ": The computer got this roll" << endl;
    cout << AIsum << ": This is the total AI score" << endl;
    cout << " " << endl;
    
        // AI passes if it gets a 2
        
        if (AINumber == 2){
        turn = 1;
        choice = 1;
        
        }
    
        // AI's turn is forfeited upon getting a one
        
        if (AINumber == 1){
        AIsum = 0;
        turn = turn - 1 ;
        choice = 1;
        
        }
        
        
        
        
 }

    }
}
        