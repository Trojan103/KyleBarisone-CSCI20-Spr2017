#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

/* 
Kyle Barisone
May 23 2016
This program can calculate the derivative of binomials and polynomials. It works for negative exponents but does not work for multiplication or division of polynomials.
It uses a class to determine the value of the constant and the exponent of the binomial and the answer is output to solution.txt when the user types in their problem.
*/

//class for determining binomial power and constant
class exponent {
    
private: 
int BinomialN_;     //initializing private variables
int BinomialK_;

public:

//exponent function for binomial
void setBinomial(int BinomialN) {
    BinomialN_ = BinomialN - 1;
        
    }

//constant function for binomial    
int setConstant(int BinomialK, int BinomialN){
    if (BinomialN > 0 || BinomialN < 0){
        BinomialK_ = BinomialK * BinomialN;
    }
    else{
        BinomialK_ = 0;
    }

}

int getExponent(){
    return BinomialN_;
}

int getConstant(){
    return BinomialK_;
}
};

int main(){
    
ofstream fout;              // initializing file output

int k;                      // initializing variables
int n;

int polynomialK[10];        // initializing arrays for polynomials
int polynomialN[10];

char variable;
int choice;
int i;
int j;

exponent expon;             // initializing class

//opens solution file
fout.open("solution.txt");

cout << "Enter 1 for binomial or 2 for polynomial" << endl;
cin >>choice;


//if the user chooses a binomial, they press one
if (choice == 1){
    cout << "Enter the constant of your binomial: ";
    cin >> k;

    cout << "Enter the variable of your equation: ";
    cin >> variable;

    cout << "Enter the exponential of your binomial: ";
    cin >> n;

    fout << "f(x) = " << k << variable << "^" << n << endl; 
    
    
    // if statement depending on how large 
    if (n > 1){
    
    //Sends variable n to the class    
    expon.setBinomial(n);
    expon.setConstant(k, n);
    if (choice == 1){
    fout << "f'(x) = " << expon.getConstant() << variable << "^" << expon.getExponent() << endl;
    
    }
    }

    //if statement for if the exponent is 1
    else if (n == 1){
    fout << "f'(x) = " << k << endl;
    }
    
    //if statement for if the exponent is 0
    else if (n == 0){
        cout << "The derivative of f(x) is 0";    
    }
    
    else {
        //sends the exponent and the consstant to class.
        expon.setBinomial(n);
        expon.setConstant(k, n);
        fout << "f'(x) = (" << expon.getConstant() << "/" << variable << "^" << fabs(expon.getExponent()) << ")" << endl;
    
    }

}

// if the user chooses number 2 it is a polynomial
else if (choice == 2){
    cout << "enter variable name: ";
    cin >> variable;
    
//when the user enters a constant the constant array increases by 1
    for (i = 0; i<10; i++){
        cout << "Enter the constant of all of your binomials in order (Enter 0 when finised): ";
        cin >> polynomialK[i];
        
        // if statement that breaks if the constant is 0
        if (polynomialK[i] == 0){
            break;
        }
    }
    
    //when the user enters a number the exponent array increases by 1
    for (j=0; j<10; j++){
        cout << "Enter the power of all of your binomials in order (Enter 0 when finished): ";
        cin >> polynomialN[j];
        
        //if statement that breaks if the exponent is 0
        if (polynomialN[j] == 0){
            break;
        }
    }

//re-initializing the i and j variables back to 0
i = 0;
j = 0;
fout << " f(x) =  ";
    
    //while the exponent and constant are not equal to 0 they will output the data
    while (polynomialK[i] != 0 && polynomialN[j] != 0){
        fout << polynomialK[i] << variable << "^" << polynomialN[j] << " + ";
        polynomialK[i] = polynomialK[i] * polynomialN[j];
        polynomialN[j] = polynomialN[j] - 1;
        j++;
        i++;
    
}

fout << endl;
i = 0;
j = 0;
fout << "f'(x) = ";
    
    //when the exponent and the constant do not equal 0, it outputs the values in the order they were typed.
    while (polynomialK[i] != 0 && polynomialN[j] != 0){
        if (polynomialN[j] > 1){
            fout << polynomialK[i] << variable << "^" << polynomialN[j];
            
            if (polynomialK[i] !=0){
                fout << " + ";
            }
            
            j++;
            i++;
        }
        
        else{
            polynomialN[j] = polynomialN[j] * -1;
            
            //if the exponent is negative, the output is different
            fout << polynomialK[i] << "/"<< variable << "^" << polynomialN[j];
            if(polynomialK[i] != 0){
                fout << " + ";
            }
            
            j++;
            i++;
        }
    }   
}
fout.close();
cout << "Done! Please check the solution guide to see the answer";
}