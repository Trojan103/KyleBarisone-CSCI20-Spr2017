#include<iostream>
using namespace std;

/* 
Kyle Barisone
March 10 2017
This program uses classes and constructors to convert a user entered amount of Feet, Yards and Miles into Inch values.
*/


class DistanceConverter{     // Distance converter class converts all the distances entered in the main function into an inch value.
    public:
    
    void setDistFromInches(double distInches){    // all of my accessor functions
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
    
    // this is the print function for the program
    
    void print(){
       
        
     cout << "This is equivalent to " << getInchesFromFeet() << " Inches" << endl;   
        
     cout << "This is equivalent to " << getInchesFromYards() << " Inches" << endl;   
        
     cout << "This is equivalent to " << getInchesFromMiles() << " Inches" << endl;
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
   
   // this is where the number in parenthesis is converted to its proper inch value.
   
   dist1.setDistToFeet(5);
   
   dist1.setDistToYards(5); 
  
   dist1.setDistToYards(5); 
   dist1.print();
}