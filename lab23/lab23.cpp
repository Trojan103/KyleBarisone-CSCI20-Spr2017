 #include <iostream>
 #include <cstdlib>
 #include <ctime>
 using namespace std;
 
/*
Kyle Barisone
Feb 28 2017
This program accepts two numbers inputted by the user and swaps them. After swapping them,
the program takes a random number between those two integers and outputs it to the user.
*/

//This is where my functions are declared
  void randNumber(int lowLimit, int highLimit);
  void numbSwap (int& lowLimit, int& highLimit);
  
 int main(){
   
  int lowLimit = 0;  
  int highLimit = 0;
  
  //This is where the user imputs the low limit and the high limt they want their number between.
  cout << "Please enter a low limit: ";  
  cin >> lowLimit;
  cout << "Please enter a high limit: ";
  cin >> highLimit;
  
   randNumber(lowLimit, highLimit);
   
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
 void randNumber(int lowLimit, int highLimit){
     
     
     srand(time(0));
     
     numbSwap(lowLimit, highLimit);
     
     cout << ((rand() % lowLimit) + highLimit);
     
     
     
 }