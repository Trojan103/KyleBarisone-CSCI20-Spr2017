#include<iostream>
using namespace std;

/* 
Kyle Barisone
March 9 2017
This program converts temperatures from  celsius and farenheit to Kelvin*/

class TemperatureConverter{                         //Temperature converting class
    public:
    
    void SetTempFromKelvin(double tempKelvin){      
        Kelvin_ = tempKelvin ;}
        
    void SetTempFromCelsius(double tempCelsius){    // Converts and sets values from celsius to Kelvin
        Kelvin_ = tempCelsius + 273.15;
        return;
    }
    
    void SetTempFromFahrenheit(double tempFarenheit){  // converts and sets values from farenheit to Kelvin
        Kelvin_ = (5 * (tempFarenheit-32)/9) + 273.15;
        return;
    }
    
    double GetTempFromKelvin(){
        
    }
    
    double GetTempAsCelsius(){                        // Retrieves tempCelsius
        double tempCelsius;
        tempCelsius = Kelvin_ - 273.15;
        return tempCelsius;
    }
    
    double GetTempAsFahrenheit(){                     // Retrieves tempFarenheit
        double tempFarenheit;
        tempFarenheit = (((Kelvin_ - 273.15)*9)/5) + 32;
        return tempFarenheit;
        
    }
    
    void PrintTemperatures(){
       
    }
    
    TemperatureConverter(){
    Kelvin_ = 0;
}

    TemperatureConverter(double tempKelvin){
    Kelvin_ = tempKelvin;
}
    
    private:
        double Kelvin_;
        
};


int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}