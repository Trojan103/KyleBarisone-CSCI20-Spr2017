 #include <iostream>
 #include <string>
 #include <cmath>
 using namespace std;
 
 int main(){
     /*
     Kyle Barisone
     February 21 2017
     This program is used to calculate wind chill based on the old style formula as well as the new style formula. It also tells the difference of the
     two as well as wind speed.
     */
     
     //These will be the user imputted variables
     double velocity = 0;
     double temp = 0;
     
     cout << "Please enter the temperature." << endl;
     cin >> temp;
     
     cout << "Now enter the starting wind speed" << endl;
     cin >> velocity;
     
    //These are the formulas for calculating the old style formula for windchill
    double oldStyle1 = .25 * velocity;
    double oldStyle2 = 3.71 * sqrt(velocity);
    double oldStyle3 = oldStyle2 + 5.81 - oldStyle1;
    double oldStyle4 = temp - 91.4;
     
    double oldStyleWindChill = .081 * oldStyle3 * oldStyle4 + 91.4;
    
    //These are the formulas for calculating the new style formula for wind chill
    double newStyle1 = temp * .6215;
    double newStyle2 = 35.75 * pow(velocity , 0.16);
    double newStyle3 = .4275 * temp * pow(velocity , 0.16);
     
    double newStyleWindChill = 35.74 + newStyle1 - newStyle2 + newStyle3;
    
    //This formula is used to calculate the difference between the old style and new style using absolute value to make sure the value is positive
    double difference = abs(oldStyleWindChill - newStyleWindChill);
     
     //This ouputs all of the information to the user
     cout << "The wind chill based on the old formula is: " << oldStyleWindChill << endl;
     cout << "The wind chill based on the new formula is: " << newStyleWindChill << endl;
     cout << "The difference between the two is: " << difference << endl;
     cout << "Wind speed: " << velocity << endl;
     
     
     
     
 }