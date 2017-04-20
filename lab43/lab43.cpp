/* This program is meant to mimic a menu at a restaurant. There are 10 max of each item. The user orders what they want and it puts it into a "cart". 
When the user is done ordering the the price of the items in the cart are computed
Kyle Barisone
April 19 2017*/

#include <iostream>
#include <string>
using namespace std;

//Global variables for the size of the carts array, the number remaining for each item, and the amount purchased

int NUMLEFT[17] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10}; 
int ARRAY = 20; 
int PURCHASED = 0; 

// The class for the items in the cart and the price of everything in the cart

class Cart {       
    
    public:
    // constructor defining total cost
    
        Cart() {
        int totalCost_ = 0;
        }
        
    // mutator and accessor functions
    
        void setObjectID(int ID){
            objectID_ = ID;
            
        }
    
        void setPrice(int price){
            price_= price;
            
        }
        void setBought(int amountBought){
            Bought_ = amountBought;
            
        }                 
        void setInventory(int itemNum){
        Inventory_ = NUMLEFT[itemNum - 1];
        Inventory_ = Inventory_ - PURCHASED;
    
    // while loop that determines if there is enough left in inventory
    
            while (Inventory_ < 0) {
                Inventory_ = Inventory_ + PURCHASED;
                cout << "There are only " << Inventory_ << " remaining" << endl;
                cout << "Try again: ";
                cin >> PURCHASED;
                Inventory_ = Inventory_ - PURCHASED;
                return;
            }
        }
        int getPrice(){
            return price_;
        }
        int getBought(){
            return Bought_;
        }
        
        private:
        int objectID_;
        int price_; 
        int Bought_;
        int Inventory_;
        
};




int main() {
    
    //Initializing the class and the variables
    Cart cart[ARRAY];
    string order = "";
    int itemNum = 0;
    int price[17] = {4,6,3,4,10,8,4,7,7,4,5,5,5,7,7,2,4};
    int cost = 0;
    int total = 0;
    int num = 0;
    
    //Menu that the user see's upon launching program
    cout << "Welcome to Kyle's amazing restaurant" << endl;
    cout << "Here are the options that we serve" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Appetizers: Nachos, OnionRings, Chili, Salad" << endl;
    cout << "Entres: Steak, Chicken, Soup, Spaghetti, Fish" << endl;
    cout << "Kids: Nuggets, Corndogs, Hotdog, Fries" << endl;
    cout << "Dessert: Cake, Pie, Cookie, Milkshake" << endl;
    
    
    int i = 0;
    
    //loop that lets users continue ordering until cart is typed
    
    for (i = 0; true; i++) {        
        cout << "input 'Cart' if you would like to proceed to checkout" << endl;
        PURCHASED = 0;
        
        // if statement where user types the string of the item they want
        if (i == 0) {
            cout << "What can out chefs get started for you (Please type name exactly as shown): ";
        }
        getline(cin, order);
        
        //loop that continues repeating until a proper name is inputted
        while (order != "Cart" && order != "Nachos" && order != "OnionRings" && order != "Chili" && order != "Salad" && order != "Steak" && order != "Chicken" && order != "Soup" && order != "Spaghetti" && order != "Fish" && order != "Nuggets" && order != "Corndogs" && order != "Hotdog" && order != "Fries" && order != "Cake" && order != "Pie" && order != "Cookie" && order != "Milkshake" ) {
            cout << "What can out chefs get started for you (Please type name exactly as shown): ";
            getline(cin, order);
        }
        
        //if user types cart, breaks out of loop
        if (order == "Cart") {
            break; 
            
        }
        
        //user enters how many they want (must be below 10)
        cout << "How Many Would You Like: ";
        cin >> PURCHASED;     
        
        //if statements that convert the strings into a number
        if (order == "Nachos") {                   
            itemNum = 1;
        }
        else if (order == "OnionRings") {
            itemNum = 2;
        }
        else if (order == "Chili") {
            itemNum = 3;
        }
        else if (order == "Salad") {
            itemNum = 4;
        }
        else if (order == "Steak") {
            itemNum = 5;
        }
        else if (order == "Chicken") {
            itemNum = 6;
        }
        else if (order == "Soup") {
            itemNum = 7;
        }
        else if (order == "Spaghetti") {
            itemNum = 8;
        }
        else if (order == "Fish") {
            itemNum = 9;
        }
        else if (order == "Nuggets") {
            itemNum = 10;
        }
        else if (order == "Corndogs") {
            itemNum = 11;
        }
        else if (order == "Hotdog") {
            itemNum = 12;
        }
        else if (order == "Fries") {
            itemNum = 13;
        }
        else if (order == "Cake") {
            itemNum = 14;
        }
        else if (order == "Pie") {
            itemNum = 15;
        }
        else if (order == "Cookie") {
            itemNum = 16;
        }
        else if (order == "Milkshake") {
            itemNum = 17;
        }
        
        //sets the number purchased of each item to the array in the class
        
        cart[i].setObjectID(itemNum);                
        cart[i].setBought(PURCHASED);
        
        //if statements that set the price and the amount left to the class
        
        if (itemNum == 1) {                              
            cart[i].setPrice(price[0]);
            cart[i].setInventory(NUMLEFT[0]);
        }
        else if (itemNum == 2) {
            cart[i].setPrice(price[1]);
            cart[i].setInventory(NUMLEFT[1]);
        }
        else if (itemNum == 3) {
            cart[i].setPrice(price[2]);
            cart[i].setInventory(NUMLEFT[2]);
        }
        else if (itemNum == 4) {
            cart[i].setPrice(price[3]);
            cart[i].setInventory(NUMLEFT[3]);
        }
        else if (itemNum == 5) {
            cart[i].setPrice(price[4]);
            cart[i].setInventory(NUMLEFT[4]);
        }
        else if (itemNum == 6) {
            cart[i].setPrice(price[5]);
            cart[i].setInventory(NUMLEFT[5]);
        }
        else if (itemNum == 7) {
            cart[i].setPrice(price[6]);
            cart[i].setInventory(NUMLEFT[6]);
        }
        else if (itemNum == 8) {
            cart[i].setPrice(price[7]);
            cart[i].setInventory(NUMLEFT[7]);
        }
        else if (itemNum == 9) {
            cart[i].setPrice(price[8]);
            cart[i].setInventory(NUMLEFT[8]);
        }
        else if (itemNum == 10) {
            cart[i].setPrice(price[9]);
            cart[i].setInventory(NUMLEFT[9]);
        }
        else if (itemNum == 11) {
            cart[i].setPrice(price[10]);
            cart[i].setInventory(NUMLEFT[10]);
        }
        else if (itemNum == 12) {
            cart[i].setPrice(price[11]);
            cart[i].setInventory(NUMLEFT[11]);
        }
        else if (itemNum== 13) {
            cart[i].setPrice(price[12]);
            cart[i].setInventory(NUMLEFT[12]);
        }
        else if (itemNum == 14) {
            cart[i].setPrice(price[13]);
            cart[i].setInventory(NUMLEFT[13]);
        }
        else if (itemNum == 15) {
            cart[i].setPrice(price[14]);
            cart[i].setInventory(NUMLEFT[14]);
        }
        else if (itemNum == 16) {
            cart[i].setPrice(price[15]);
            cart[i].setInventory(NUMLEFT[15]);
        }
        else if (itemNum == 17) {
            cart[i].setPrice(price[16]);
            cart[i].setInventory(NUMLEFT[16]);
        }
        
    }   
    
    //computes the cost using values stored in the class
    
    for (int j = 0; j < i; j++) {
        cost = cart[j].getPrice();
        num = cart[j].getBought();                 
        total = total + (cost * num);
        
    }
cout << "--------------------------------" << endl << "Your Total is: $" << total << endl;
}
