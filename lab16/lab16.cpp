 #include <iostream>
 #include <string>
 using namespace std;
 
 /* This program allows the user to make monsters by imputting what name the monster has as well as all of the facial features based on lecture 1.6.
 It will take those two monster imputted by the user and pair them with two monster (C and D) created by myself. */
 
 struct monster {
     string name;
     string head;
     string eyes;
     string ears;
     string nose;
     string mouth;
 };
 
 int main(){
     monster monsterA;
     monster monsterB;
     monster monsterC;
     monster monsterD;
     
     //This block of code is for monster A
     cout << "what is the name of your first monster? ";
     cin >> monsterA.name;
     cout << "What kind of head does your monster have? ";
     cin >> monsterA.head;
     cout << "What kind of eyes does your monster have? ";
     cin >> monsterA.eyes;
     cout << "How about the Ears? ";
     cin >> monsterA.ears;
     cout << "And the nose? ";
     cin >> monsterA.nose;
     cout << "And finally the mouth? ";
     cin >> monsterA.mouth;
     
     //This block of code is for monster B
     cout << "what is the name of your Second monster? ";
     cin >> monsterB.name;
     cout << "What kind of head does your monster have? ";
     cin >> monsterB.head;
     cout << "What kind of eyes does your monster have? ";
     cin >> monsterB.eyes;
     cout << "How about the Ears ";
     cin >> monsterB.ears;
     cout << "And the nose? ";
     cin >> monsterB.nose;
     cout << "And finally the mouth? ";
     cin >> monsterB.mouth;
     
     //This block of code is for monster C
     monsterC.name = "Bob";
     monsterC.head = "Zombie";
     monsterC.eyes = "Spritem";
     monsterC.ears = "Vegitas";
     monsterC.nose = "Wackus";
     monsterC.mouth = "Wackus";
     
     //This block of code is for monster D
     monsterD.name = "Wacky";
     monsterD.head = "Zombie";
     monsterD.eyes = "Wackus";
     monsterD.ears = "Wackus";
     monsterD.nose = "Wackus";
     monsterD.mouth = "Wackus";
     
     //This code outputs the monsters as well as all of their traits
     cout << "All monsters are in order of Name, head, eyes, ears, nose, mouth" << endl;
     cout << monsterA.name << ": " << monsterA.head << ", " << monsterA.eyes << ", " << monsterA.ears << ", " << monsterA.nose << ", " <<monsterA.mouth <<"." << endl;
     cout << monsterB.name << ": " << monsterB.head << ", " << monsterB.eyes << ", " << monsterB.ears << ", " << monsterB.nose << ", " <<monsterB.mouth <<"." << endl;
     cout << monsterC.name << ": " << monsterC.head << ", " << monsterC.eyes << ", " << monsterC.ears << ", " << monsterC.nose << ", " <<monsterC.mouth <<"." << endl;
     cout << monsterD.name << ": " << monsterD.head << ", " << monsterD.eyes << ", " << monsterD.ears << ", " << monsterD.nose << ", " <<monsterD.mouth <<"." << endl;
     
 }
 