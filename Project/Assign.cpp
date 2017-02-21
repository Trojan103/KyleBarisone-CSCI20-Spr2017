#include <iostream>
 #include <string>
 using namespace std;
 
 /*
 Kyle Barisone
 Feb 18 2017
 This program will calculate your weekly salary based on the numbers inputted into the code. It is calculated with a 17% tax as well as 130 
 dollars of healthcare each week.
 */
 
 //This struct holds the variables for salary, hours worked, and name
 struct paySlip {
     double salaryPerHour;
     double hoursWorked;
     string name;
     string last;
     int daysWorked;
 };
 
 int main(){
     
     //This is where the user imputs their information into the machine.
    paySlip  paySlip1;
    cout << "This program will calculate how much you will be paid on your pay slip." << endl;
    
    cout << "First things first, What is your first name?" << endl;
    cin >> paySlip1.name;
    
    cout << "And your last name?" <<endl;
    cin >> paySlip1.last;
    
    cout << "Please Enter the amount of money you make per hour." << endl;
    cin >> paySlip1.salaryPerHour;
    
    cout << "Now enter the amount of hours you have worked." << endl;
    cin >> paySlip1.hoursWorked;
    
    cout << "Enter the amount of days you have worked." << endl;
    cin >> paySlip1.daysWorked;
    
    //These are my calculations for figuring out the total after tax
    double weeklySalary = paySlip1.hoursWorked * paySlip1.salaryPerHour;
    double healthCareCharge = weeklySalary - 130;
    double netProfit = healthCareCharge - (healthCareCharge * .17);
    
    //This is where the code is outputted to the user with the final amounts.
    cout << "Pay per hour: $" << paySlip1.salaryPerHour << endl;
    cout << "Weekly wages for: " << endl;
    cout << "Name: " << paySlip1.last << ", " << paySlip1.name << endl;
    cout << "Hours Worked: " << paySlip1.hoursWorked << endl;
    cout << "Gross pay: $" << weeklySalary << endl;
    cout << "Net Profit after Health Care Charges and 17% tax: $" << netProfit <<endl;
    cout << "Days worked: " << paySlip1.daysWorked << endl;
    
 }