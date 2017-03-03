 #include <iostream>
 #include <cstdlib>
 #include <ctime>
 using namespace std;
 
/*
Kyle Barisone
Feb 28 2017
This program accepts two numbers inputted by the user and swaps them. After swapping them,
the program takes a random number between those two integers and outputs it to the user.
After that is completed, the program sets that number to pounds and converts it to kilograms and back to pounds.
numbers are slightly off because of rounding.
*/

//This is where my functions are declared
  int randNumber(int lowLimit, int highLimit);
  void numbSwap (int& lowLimit, int& highLimit);
  double poundsToKilo(int Rand);
  double kiloToPounds(int Kilo);
  
 int main(){
  int lowLimit = 0;  
  int highLimit = 0;
  
  //This is where the user imputs the low limit and the high limt they want their number between.
  cout << "Please enter a low limit: ";  
  cin >> lowLimit;
  cout << "Please enter a high limit: ";
  cin >> highLimit;
  
  cout << "Your random number is " << randNumber(lowLimit, highLimit) <<  " pounds." << endl;
  
  //Variables being caught from other functions
  int Rand = randNumber(lowLimit, highLimit);
  int Kilo = poundsToKilo(Rand);
  
 cout << "This converts to " << poundsToKilo(Rand) << " ounces" <<endl;

 cout << "Which converted back to pounds is " << kiloToPounds(Kilo) <<" Pounds.";
   return 0;
   
 }
 
 //This function is used to swap the low limit with the high limit.
 void numbSwap (int& lowLimit, int& highLimit){
     int temp1 = 0;
     int temp2 = 0;
     
     temp1 = lowLimit;
     temp2 = highLimit;
     
     lowLimit = temp2;
     highLimit = temp1;
     
 }
 
 // This function comes up with the random number between the low limit and the high limit which were swapped before.
 int randNumber(int lowLimit, int highLimit){
     
     
     srand(time(0));
     
     numbSwap(lowLimit, highLimit);
     
     int randPounds = ((rand() % lowLimit - highLimit) + highLimit);
     
     return randPounds;
    
     
     
 }
 
 // This function converts the pounds to Kilograms.
double poundsToKilo(int Rand){
  
  double Kilo = 0.45359237 * Rand;
  
  return Kilo;
}

// This function undoes the previous function
double kiloToPounds(int Kilo){
    
    double Pounds = Kilo / 0.43359237;
    
    return Pounds;
}