 #include <iostream>
 #include <string>
 using namespace std;
 
 int main(){
     string noun;
     string number;
     string pluralNoun;
     string pluralNoun1;
     string pluralNoun2;
     string pastTenseVerb;
     string adjective;
     string adjective1;
     string fruitVege;
     string verb;
     string adverb;
     string food;
     string adjEst;
     string show;
     
     cout << "Welcome to Mad libs! Enter the appropriate type of word upon being asked to see the mad lib at the end." << endl;
     
     cout << "Enter a noun!" << endl;
     getline (cin, noun);
     
     cout << "Enter a number!" <<endl;
     getline (cin, number);
     
     cout << "Enter a plural noun!" <<endl;
     getline (cin, pluralNoun);
     
     cout << "Enter another plural noun!" <<endl;
     getline (cin, pluralNoun1);
     
     cout << "Enter one last plural noun!" <<endl;
     getline (cin, pluralNoun2);
     
     cout << "Enter a past tense verb!" <<endl;
     getline (cin, pastTenseVerb);
     
     cout << "Enter an adjective!" <<endl;
     getline (cin, adjective);
     
     cout<< "Enter one more adjective!" <<endl;
     getline (cin, adjective1);
     
     cout << "Enter a single word fruit or vegetable" <<endl;
     getline (cin, fruitVege);
     
     cout << "Enter a verb!" << endl;
     getline (cin, verb);
     
     cout << "Enter an adverb!" << endl;
     getline (cin, adverb);
     
     cout << "Enter a one word food!";
     getline(cin, food);
     
     cout << "Enter an adjective ending in -est" << endl;
     getline(cin,adjEst);
     
     cout << "Enter your favorite show and your madlib will be done!" << endl;
     getline(cin, show);
     
     cout << "The kids of the classroom (" << number << ") were busy getting ready for their Valentine's Day Party. " <<endl;
     cout << "They had spent hours decorating (" << noun << ") boxes with brightly colored (" << pluralNoun << ") and hearts made out of (" << pluralNoun1 << ")." <<endl;
     cout << "Their teacher (" << pastTenseVerb << ") (" << adjective << ") streamers throughout the classroom." << endl;
     cout << "Trays of (" << adjective1 << ") cookies and pitchers of (" << fruitVege <<") juice were ready to be served after recess. " << endl;
     cout << "Everyone was eager to pass out their valentines." << endl;
     cout << "They had worked hard to (" << verb << ") their name (" << adverb << ") on each envelope." << endl;
     cout << "There were cards with chocolate (" << pluralNoun2 << ") attached, cards sealed with scratch n' sniff stickers smelled like (" << food << ")," <<endl;
     cout << "and cards with characters from (" << show << ") This was going to be the (" << adjEst << ") Valentine's Day ever!" << endl;
 }