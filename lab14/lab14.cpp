 #include <iostream>
 using namespace std;
 
 int main(){
/* This program is used to emulate coin star. By taking all of the coins given to the machine from the user it taxes the total amount of money recieved
by 10.9% and gives you an amount in dollars. That amount is how much the user will recieve after using the machine */

// The tax rate
 double tax = .109;

// The value of all the coins
 double penny = .01;
 double nickel = .05;
 double dime = .10;
 double quarter = .25;
 
// These variables are the total amount of each coin
 int numQuarters = 0;
 int numDimes = 0;
 int numNickels = 0;
 int numPennies = 0;
 
 //This is where the user imputs the amount of coins that they have
 cout << "Enter the amount of each coin you have starting with quarters, then dimes, then nickels, then pennies.";
 cin >>numQuarters >> numDimes >> numNickels >> numPennies;
 
 // These variable store the value of each coin presented to the machine.
 double valQuarters = numQuarters * quarter;
 double valDimes = numDimes * dime;
 double valNickels = numNickels * nickel;
 double valPennies = numPennies * penny;
 
 //This variable computes the total amount of money given to the machine
 double moneyTotal = valQuarters + valDimes + valNickels + valPennies;
 
 //These two variables are used to calculate the tax and subtract it from the original total
 double moneyBack1 = moneyTotal * tax;
 double moneyBack2 = moneyTotal - moneyBack1;
 
 //The output statement that shows how much money the user will recieve from the machine
 cout << "You will recieve $" <<moneyBack2  << " after tax.";
 
 
 }