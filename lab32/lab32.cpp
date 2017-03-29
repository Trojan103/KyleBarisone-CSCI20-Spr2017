#include<iostream>
#include<string>
using namespace std;

/* Kyle Barisone
March 28 2017
This program is used to calculate income tax based on various details such as
amount owed, marriage status, and amount withheld*/

int main(){
    
    string name;                //variable names
    int status;
    double wages = 0;
    double withheld = 0;
    double tax = 0;
    double wages1 = 0;
    double wages2 = 0;
    double moneyBack = 0;
    
        // This is where the user imputs their information.
        
    cout << "Please enter your name." << endl;      
    getline(cin, name);
    
    cout << "Please enter your marriage status.(enter '1' for single/ '0' for Married)." << endl;
    cin >> status;
    
    cout << "Enter the amount of wages you have earned" << endl;
    cin >> wages;
    
    cout << "Now enter the amount of taxes withheld" << endl;
    cin >> withheld;
    
         // switch case determining their tax deductions based on marriage status.
         
    switch (status) {
        
        case 0:
        wages1 = wages - 7800;
        
        case 1:
        wages1 = wages - 3900;
    }
    
        // all the if statements for the various combinations of data
    
    if (wages1 < 0){
        tax = 0;
        wages2 = wages1 - 0;
    }
    
    else if(status == 1 && wages > 0 && wages <=8925){
        tax = 0.10;
        wages2 = (wages1 * tax);
        
    }
    
    else if (status == 1 && wages < 36250 && wages >=8925){
        tax = 0.15;
        wages2 = wages1 - (892.5 + (wages1 * tax)) - 8925;
    }
    
    else if (status == 1 && wages < 87850 && wages1 >= 36250){
        tax = 0.25;
        wages2 = wages1 - (4991.25 + (wages1 * tax)) - 36250;
    }
    
    else if (status == 1 && wages >= 87850){
        tax = 0.28;
        wages2 = wages1 - (17891.25 + (wages1 * tax)) - 87850;
    }
    
        // if statements for married couples
    
    if(status == 0 && wages > 0 && wages <=17850){
        tax = 0.10;
        wages2 = (wages1 * tax);
        
    }
    
    else if (status == 0 && wages < 72500 && wages >=17851){
        tax = 0.15;
        wages2 = wages1 - (1785 + (wages1 * tax)) - 17850;
    }
    
    
    else if (status == 0 && wages >= 72500){
        tax = 0.28;
        wages2 = wages1 - (9982.50 + (wages1 * tax)) - 72500;
    }
    
  // This is where the data is outputted back to the user
  
    cout << "name: " << name << endl;
    cout << "Total money owed: $" << wages2 << endl;
    cout << "Total gross adjusted income: " << wages1 << endl;


 if (wages2 < withheld){
       moneyBack = withheld - wages2;
       cout<<"You owe: $" << moneyBack << endl;
   }
    
    else {
        moneyBack = wages2 - withheld;
        cout << "You will recieve: $" << moneyBack << endl;
    }
}