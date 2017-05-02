#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
ifstream fin;
ifstream fout;

string name;
string name1;
string name2;
int i;
int semester;
int semester1;
int semester2;
int units[i];
int units1[i];
int units2[i];
char letterGrade[i];
char letterGrade1[i];
char letterGrade2[i];
int totalUnits;
int totalUnits1;
int totalUnits2;
double GPA;
double GPA1;
double GPA2;


fin.open("info.txt");
fout.open("info.txt");
getline(fin,name);
fin >> semester;

for(int i = 0; i < 4; i++){
fin >> units[i];
fin >> letterGrade[i];
}

fin >> totalUnits;
fin >> GPA;

getline(fin,name1);
fin >> semester1;

for(int i = 0; i < 4; i++){
fin >> units1[i];
fin >> letterGrade1[i];
}

fin >> totalUnits1;
fin >> GPA1;

getline(fin,name2);
fin >> semester2;

for(int i = 0; i < 4; i++){
fin >> units2[i];
fin >> letterGrade2[i];
}

fin >> totalUnits2;
fin >> GPA2;


fin.close();
fout.close();

cout <<"Name:             " << name << endl;
cout <<"Current Semester: " << semester << endl;

for (int i=0; i<4; i++){
    cout << "Units: " << units[i] << " Grade:   " << letterGrade[i] << endl;
}  

cout <<"Total Units:      " << totalUnits << endl;
cout <<"GPA:              " << GPA << endl;

cout <<"Name:             " << name1 << endl;
cout <<"Current Semester: " << semester1 << endl;

for (int i=0; i<4; i++){
    cout << "Units: " << units1[i] << " Grade:   " << letterGrade1[i] << endl;
}  

cout <<"Total Units:      " << totalUnits1 << endl;
cout <<"GPA:              " << GPA1 << endl;

cout <<"Name:             " << name2 << endl;
cout <<"Current Semester: " << semester2 << endl;

for (int i=0; i<4; i++){
    cout << "Units: " << units2[i] << " Grade:   " << letterGrade2[i] << endl;
}  

cout <<"Total Units:      " << totalUnits2 << endl;
cout <<"GPA:              " << GPA2 << endl;
    
  
    
    
}