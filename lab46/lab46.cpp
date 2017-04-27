#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
ifstream fin;
ifstream fout;

string name;
int i;
int semester;
int units[i];
char letterGrade[i];
int totalUnits;
double GPA;


fin.open("info.txt");
getline(fin,name);
fin >> semester;

for(int i = 0; i < 4; i++){
fin >> units[i];
fin >> letterGrade[i];
}

fin >> totalUnits;
fin >> GPA;


fin.close();

cout <<"Name:             " << name << endl;
cout <<"Current Semester: " << semester << endl;

for (int i=0; i<4; i++){
    cout << "Units: " << units[i] << " Grade:   " << letterGrade[i] << endl;
}  

cout <<"Total Units:      " << totalUnits << endl;
cout <<"GPA:              " << GPA << endl;
    
  
    
    
}