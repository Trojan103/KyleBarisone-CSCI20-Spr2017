#include<iostream>
using namespace std;

/* 
Kyle Barisone
March 10 2017
This program uses classes and constructors to convert a user entered amount of Feet, Yards and Miles into Inch values.
*/

class DistanceConverter{                         // Distance converter class
    public:
    
    void setDistFromInches(double distInches){ // all of my accessor functions
        Inches_ = distInches;
    }
    
    void setDistToMiles(double distMiles){
        Inches_ = distMiles;
        return;
    }
    
    void setDistToFeet(double distFeet){
        Inches_ = distFeet;
        return;
    }
    
    void setDistToYards(double distYards){
        Inches_ = distYards;
        return;
    }
    
    double getDistFromInches(){   //retrieves inches
        double distInches;
        return distInches;
    }
    
    double getInchesFromYards(){   // converts yards to inches and retrieves the value
        double distYards;
        distYards = Inches_ * 36;
        return distYards;
    }
    
    double getInchesFromFeet(){   // converts feet to inches
        double distFeet;
        distFeet = Inches_ * 12;
        return distFeet;
    }
    
    double getInchesFromMiles(){  // converts miles to inches
        double distMiles;
        distMiles = Inches_ * 63360;
        return distMiles;
    }
    
    DistanceConverter(){      // initializing the class variable
        Inches_ = 0;
    }
    
    DistanceConverter(double distInches){
        Inches_ = distInches;
    }
    
    private:
    double Inches_;            // class variable
};

int main(){
   double distFeet;         // initializing the variables
   double distInches;
   double distYards;
   double distMiles;
   
   DistanceConverter dist1;
   
   // this is where the user enters the distances that they want converted to inches
   
   cout << "please enter the amount of feet you want to convert to inches" << endl;
   cin >> distFeet;
   dist1.setDistToFeet(distFeet);
   cout << "This is equivalent to " << dist1.getInchesFromFeet() << " Inches" << endl;
   
   cout << "please enter the amount of yards you want to convert to inches" << endl;
   cin >> distYards;
   dist1.setDistToYards(distYards); 
   cout << "This is equivalent to " << dist1.getInchesFromYards() << " Inches" << endl;
   
   cout << "please enter the amount of Miles you want to convert to inches" << endl;
   cin >> distMiles;
   dist1.setDistToYards(distMiles); 
   cout << "This is equivalent to " << dist1.getInchesFromMiles() << " Inches" << endl;
}