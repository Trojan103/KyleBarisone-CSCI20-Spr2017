 #include <iostream>
 using namespace std;
 
 int main(){
    
    //This program takes the current population and adds the population added per year to it.
    
    int currentPop = 324473133;
    int secondsPerYear = 31536000;
    int babiesPerYear = 3942000; 
    int deathsPerYear = 2866909;
    int immigrantsPerYear = 1087448;
    int addPopYear = babiesPerYear - deathsPerYear + immigrantsPerYear;
    int year = 0;
    
    
    cout << "Enter the desired year to estimate the population";
    cin >> year;
    int prediction = currentPop +  ( year * addPopYear );
    cout << "The population in " <<  year  << " will be ";
    cout <<  prediction;
 
 }