 #include <iostream>
 #include <cstdlib>
 #include <ctime>
 #include <string>
 using namespace std;
 
 /* 
 Kyle Barisone
 March 7 2017
 This program accepts the input of a book name, author, and publication date for 5 different books using classes and outputs all of the entered information back to the user.
 */
 
 
 // This is my class for the books
 class Book{
     private:
     
    string newTitle;
    string newAuthor;
    int newYear;
        
     public:    
        void setBookTitle(string title)
        {
            newTitle = title;
        }
        
        void setBookAuthor(string author)
        {
            newAuthor = author;
        }
        
        void setBookYear(int year)
        {
            newYear = year;
        }
        
        string getBookTitle(){
            return newTitle;
        }
        
        string getBookAuthor(){
            return newAuthor;
        }
        
        int getBookYear(){
            return newYear;
        }
 };
 
 int main() {
     
    string title;
    string author;
    int year;
    
    
    Book Book1;
    Book Book2;
    Book Book3;
    Book Book4;
    Book Book5;

//Book 1 input
    
    cout << "Please enter the name of a book.";
    cin >> title;
    Book1.setBookTitle(title);
    
    cout << "Enter the author of this book.";
    cin >> author;
    Book1.setBookAuthor(author);
    
    cout << "Enter the publication date of this book.";
    cin >> year;
    Book1.setBookYear(year);

//Book 2 input

    cout << "Please enter the name of a second book.";
    cin >> title;
    Book2.setBookTitle(title);
    
    cout << "Enter the author of this book.";
    cin >> author;
    Book2.setBookAuthor(author);
    
    cout << "Enter the publication date of this book.";
    cin >> year;
    Book2.setBookYear(year);
    
//Book 3 input    

    cout << "Please enter the name of a third book.";
    cin >> title;
    Book3.setBookTitle(title);
    
    cout << "Enter the author of this book.";
    cin >> author;
    Book3.setBookAuthor(author);
    
    cout << "Enter the publication date of this book.";
    cin >> year;
    Book3.setBookYear(year);
    
//Book 4 input

    cout << "Please enter the name of a fourth book.";
    cin >> title;
    Book4.setBookTitle(title);
    
    cout << "Enter the author of this book.";
    cin >> author;
    Book4.setBookAuthor(author);
    
    cout << "Enter the publication date of this book.";
    cin >> year;
    Book4.setBookYear(year);

//Book 5 input

    cout << "Please enter the name of a fifth book.";
    cin >> title;
    Book5.setBookTitle(title);
    
    cout << "Enter the author of this book.";
    cin >> author;
    Book5.setBookAuthor(author);
    
    cout << "Enter the publication date of this book.";
    cin >> year;
    Book5.setBookYear(year);

//Book 1 output

    cout << "----------------------------------------------" <<endl;
    cout << "Book 1: " << Book1.getBookTitle() << endl;
    cout << "Written by: " << Book1.getBookAuthor() << endl;
    cout << "Year Written: " << Book1.getBookYear() << endl;
    cout << "----------------------------------------------" <<endl;

//Book 2 output

    cout << "Book 2: " << Book2.getBookTitle() << endl;
    cout << "Written by: " << Book2.getBookAuthor() << endl;
    cout << "Year Written: " << Book2.getBookYear() << endl;
    cout << "----------------------------------------------" <<endl;

//Book 3 output

    cout << "Book 3: " << Book3.getBookTitle() << endl;
    cout << "Written by: " << Book3.getBookAuthor() << endl;
    cout << "Year Written: " << Book3.getBookYear() << endl;
    cout << "----------------------------------------------" <<endl;
    
//Book 4 output

    cout << "Book 4: " << Book1.getBookTitle() << endl;
    cout << "Written by: " << Book1.getBookAuthor() << endl;
    cout << "Year Written: " << Book1.getBookYear() << endl;
    cout << "----------------------------------------------" <<endl;

//Book 5 output

    cout << "Book 5: " << Book5.getBookTitle() << endl;
    cout << "Written by: " << Book5.getBookAuthor() << endl;
    cout << "Year Written: " << Book5.getBookYear() << endl;
    cout << "----------------------------------------------" <<endl;
    
    
    
 }