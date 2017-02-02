 #include <iostream>
 using namespace std;
 
 int main(){
     /* estpopulation was calculated by dividing the current population by the
     current year. While this is not when humanity began it gives us the rate
     of population increase since the year 1. Making this program able to
     estimate future as well as past populations */
     
    int currentPop = 324473020;
    int currentYear = 2017;
    int estPopulation = currentPop/currentYear;
    int year = 1;
    int prediction = year * estPopulation;
    
    cout << "Enter the desired year to estimate the population";
    cin >> year;
    cout << "The population in " <<  year << " will be ";
    cout <<  prediction;
 
 }