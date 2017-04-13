/* Kyle Barisone
4/13/2017
This program uses an array and a class in order to input 10 numbers and store them. It finds the minimum of the numbers entered as well as the max and the sum. It will also tell
you if the numbers are sorted in order and uses a print function to print it all out.
*/

#include <iostream>
using namespace std;

// Class for all of my array values

class ArrayTools{
    
    public:
    
// constructor

    ArrayTools(int array[]){
       for (int i = 0; i < 10; i++){
           myArray_[i] = array[i];
       }
    }
    
// finds the minimum value of the values entered
    int Find_min(int num1, int num2){
      int minimum = myArray_[num1];
      for(int i = num1; i < num2; i++){
          
          if(myArray_[i] < minimum){
              minimum = myArray_[i];
              
            }
        }
        return minimum;
    }
    
// finds the max value of the entered values
    int Find_max(int num1, int num2){
        int maximum = myArray_[num1];
      for(int i = num1; i < num2; i++){
          
          if(myArray_[i] > maximum){
              maximum = myArray_[i];
              
            }   
        }
        return maximum;
    }
    
//finds the sum of the values entered

    int Find_sum(){
        int sum = 0;
        for(int i=0; i < 10; i++){
        sum = sum + myArray_[i];
            
        }
        return sum;
    }
    
    int Search(int numSearch) {
        for (int i = 0; i < 10; i ++){
            if(myArray_[i] == numSearch){
                return numSearch;
            }
        }
    }

// tells you if each number is in order from small to large

    int Is_sorted(){
        
        for (int i = 0; i < 9; i++){
            
          if (myArray_[i] > myArray_[i + 1])  {
              cout << "no" << endl;
          }
          
          else {
              cout << "Yes" << endl;
          }
        }
    }
    
    void Print(){
        
    for (int i = 0; i < 10; i++) { 
        cout << myArray_[i];
        
        if (i != 9) {       
            cout << ", ";
        }
    }
    
cout << endl;
}
    
    private:
    int myArray_[];
        
    
};

int main()
{
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cout << "enter 10 numbers and press the enter key after each one" << endl;
        cin >> myArray[i];
    }
    ArrayTools a(myArray);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}