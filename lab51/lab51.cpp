#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;                                                
    char * name = new char[nameLength];                          //changed array to nameLength to keep track of that variable

    cout << "Please enter a 10 letter word or less" << endl;
    cin >> name;

    char * head  = name;                                         //declares a pointer named head that points to a space in memory called name
    char * tail = name;                                          //declares a pointer named tails that points to a space in memory called name
    nameLength = strlen(name);                                   //got rid of star because name is not a pointer.

while (strlen(name) > 10)                                        //changed if statement to while loop and moved it higher so it has the user continue to enter words
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!! TRY AGAIN: ";
          cin >> name;
     }
     
cout << "Your word is " << name << endl;
    

    if (nameLength<10)                                          // if statement that runs while name is less than 10 letters
    {
         while (*head != '\0')                                  // runs until character at the end of the word 
         {
                cout << *head;                                  // outputs the word in pointer head
                head++;                                         // adds one to head each time
         }
     }
     

     cout << endl;

     tail = &name[strlen(name) - 1];                           //Sets tail equal to name adress with the length of name minus one 

     if (nameLength <= 10)                                    // changed to less than or equal because 10 letter words work
     {
          while (tail >= name)                                // changed to while tail is greater than or equal to name because it would leave out the first letter
          {
                 cout << *tail;
                 tail--;
          }
     }
     cout << endl;

     head = name;
     tail = &name[strlen(name) - 1];                          //sets taile equal to name adress and subtracts 1

     head++;                                                  //adds to head
     tail--;                                                  //subtracts from tails

     if (*head == *tail)                                      // if the words are the same front and back it will output that it is a palindrome
     {
         cout << "It is an palindrome!" << endl;
     }
     else
     {
         cout << "It is not an palindrome" << endl;           // if the words arent the same it outputs that it is not a palindrome
     }

     return 0; 
}