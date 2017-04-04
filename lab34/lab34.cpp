#include <iostream>
using namespace std; 

int main(){
// initialization
        int num;
        int sum=0;
        cout << "Enter numbers separated by spaces" << " and terminated with a negative number." << endl;
         // read first number
        cin >> num;
        
        // The while loop makes it so a user can keep entering numbers until they input a negative number.
         while (num >= 0)
  {
               // add in to the sum
               sum = sum + num;
                // read in next number (getting ready for next loop test)
               cin >> num;
        }
                cout << "Sum was " << sum << endl;
                return 0;
}