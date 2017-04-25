#include <iostream>
#include <string>
#include <cstring>
using namespace std;

/*Kyle Barisone
4/25/2017
This program is designed to give the user 3 user name options to use based on information
that is inputted by the user. */

int main() {
    
// initializing my c strings and my variables

 char lastName[20];
 char firstName[10];
 int favNumber;
 char nickName[20];
 
 cout << "This program will generate you 3 user names!" << endl;
 cout << "Please enter your first name. : ";
 cin >> firstName;

//This while loop will ensure that the user enters a first name of less than 10 characters
 while(strlen(firstName) > 10){
     cout << "I'm sorry, That name is too long" << endl;
     cout << "Please enter your first name. : ";
     cin >> firstName;
 }
 
 cout << "Thank you, please enter your last name: ";
 cin >> lastName;
 
 //Loop that makes sure last name is not longer than 20 characters
 while(strlen(lastName) > 20){
     cout << "I'm sorry, That name is too long" << endl;
     cout << "Please enter your last name. : ";
     cin >> lastName;
 }
 
 //Makes user change last name if the first and last names are the same
 while(strlen(firstName) == strlen(lastName)){
     cout << "Im sorry those names are the same please try again." << endl;

    while(strlen(firstName) > 10){
        cout << "I'm sorry, That name is too long" << endl;
        cout << "Please enter your first name. : ";
        cin >> firstName;
    }
 
    cout << "Thank you, please enter your last name: ";
    cin >> lastName;
 
    while(strlen(lastName) > 20){
     cout << "I'm sorry, That name is too long" << endl;
     cout << "Please enter your last name. : ";
     cin >> lastName;
 }
}

//Extra variables for wider variety of nick names
cout << "Please enter your favorite number: ";
cin >> favNumber;

cout << "Do you have any nicknames?: ";
cin >> nickName;

while(strlen(nickName) > 20){
     cout << "That nickname is too long please try again";
     cin >> nickName;
 }
 
cout << endl;

// outputs the user names
 cout << "Thank you, here are your 3 usernames: "<< endl;
 cout << "----------------------------" << endl;
 cout << "user Name 1: " << firstName[0] << lastName << endl;
 cout << "user Name 2: " << lastName << favNumber << endl;
 cout << "user Name 3: " << nickName << "0" << favNumber << endl;
    
}