 #include <iostream>
 using namespace std;
 
 int main(){
/* This program is used to emulate coin star. By taking all of the coins given to the machine from the user it taxes the total amount of money recieved
by 10.9% and gives you an amount in dollars. That amount is how much the user will recieve after using the machine. */

// The total amount of each coins that are inputed.
 int numQuarters = 0;
 int numDimes = 0;
 int numNickels = 0;
 int numPennies = 0;
 
 double moneyBack = 0;
 double tax = .109;
 
 //This variable computes the total amount of money given to the machine in cents
 int moneyTotal = 0;

//This line of code has you enter the amount of money you wish to convert.
 cout << "Enter the amount of money you have. ";
 cin >> moneyTotal;
 
 //These lines of code tell you how many of each coin you are imputting based on the amount of money you put in
 numQuarters = moneyTotal / 25;
 numDimes = moneyTotal % (numQuarters * 25) / 10;
 numNickels = moneyTotal % ((numQuarters * 25) + (numDimes * 10)) / 5;
 numPennies = moneyTotal % ((numQuarters * 25) + (numDimes * 10) + (numNickels * 5)) / 1;
 
 //computes the amount of money back you earn.
 moneyBack = moneyTotal - (moneyTotal * tax);
 moneyBack = moneyBack/100;
 
 //The output statement that shows how much money the user will recieve from the machine
 cout << "You gave the machine " << moneyTotal << " in cash. ";
 cout << "That equals " << numQuarters << " Quarters, " << numDimes << " Dimes, " << numNickels << " Nickels, and " << numPennies << " Pennies."; 
 cout << "You will recieve $" << moneyBack  << " after tax.";
 
 
 }