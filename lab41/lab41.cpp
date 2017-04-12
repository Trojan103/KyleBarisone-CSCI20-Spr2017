#include <iostream>
using namespace std;

class ArrayTools{
    
    public:
    
    ArrayTools(){
        
    }
    void setFind_min(int min){
        min = 0;
        return;
    }
    
    void setFind_max(int max){
        max = 10;
        return;
        
    }
    
    void setFind_sum(int sum){
        sum = 0;
        return;
    }
    
    void setSearch(int search){
        search = 0;
        return;
    }
    
    void setIs_sorted(int sorted){
        sorted = 0;
        return;
    }
    
    int getFind_min(){
        
    }
    
    int getFind_max(){
        
    }
    
    int getFind_sum(){
        
    }
    
    int getSearch(){
        
    }
    
    int getIs_sorted(){
        
    }
};

int main()
{
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
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