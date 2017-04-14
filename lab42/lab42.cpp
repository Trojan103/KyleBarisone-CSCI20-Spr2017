#include <iostream>

using namespace std;

int main(){
    
    int numLeft[10][10];
    int userChoice;
    int i = 0;
    int j;
    
    
    numLeft[0][10] = 10;
    numLeft[1][10] = 10; 
    numLeft[2][10] = 10;
    numLeft[3][10] = 10;
    numLeft[4][10] = 10;
    numLeft[5][10] = 10;
    numLeft[6][10] = 10;
    numLeft[7][10] = 10;
    numLeft[8][10] = 10;
    numLeft[9][10] = 10;
    
    cout << "pick an item to put in your cart" << endl;
    cin >> numLeft[i][j];
    
    if (i==0 && j ==10){
        numLeft[0][10]--;
    }
    
    
    for(int i = 0; i < 10; i++){
        cout << "#" << i + 1 << " " << numLeft[i][j] << endl;
        
    }
    
    
    return 0;
    
}