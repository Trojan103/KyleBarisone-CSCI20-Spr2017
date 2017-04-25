#include <iostream>
#include <string>
using namespace std;

/* Kyle Barisone
April 25 2017
This program uses strings in order to create usernames for the user based on the users information that they input.
*/

int main(){
//intitializing strings and ints
string firstName;
string lastName;
string nickName;
int favNumber;

cout << "Welcome to the user name generator!" << endl;
cout << "Please enter your first name: ";
cin >> firstName;

//Ensures the first name length is less than 10 or will have the user re - enter until it is
while (firstName.length() > 10){
    cout << "That name is too long try again: ";
    cin >> firstName;
}

cout << "Thank you, please enter your last name: " << endl;
cin >> lastName;

//if last name is above 20 it makes you type the last name in again until it isnt
while (lastName.length() > 20){
    cout << "That name is too long try again: ";
    cin >> lastName;
}

//if the names are the same it will warn the user
if(firstName == lastName){
    cout << "First name and last name are the same!" << endl;
}

cout << "Now enter a nickname that you have or had growing up!: ";
cin >> nickName;

//sets boundary for nickname length at 20
while (nickName.length() > 20){
    cout << " That nickname is too long try again: ";
    cin >> nickName;
}

cout << "Enter your favorite Number!: ";
cin >> favNumber;

cout << "Thank you we are now generating user names based on the information given" << endl;
cout << endl;
cout << endl;
cout << endl;
cout << "Here are your usernames!" << endl;
cout << "-----------------------" << endl;

//outputting the 3 username options

cout << firstName.at(0) << lastName << endl;
cout << nickName << favNumber << endl;
cout << lastName.at(0) << firstName << favNumber << endl;
cout << firstName << lastName.substr(0,3) << endl;
cout << favNumber << firstName.at(0) << lastName.at(0) << nickName.at(0) << endl;
}