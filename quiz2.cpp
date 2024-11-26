#include <iostream>
#include <string>
#include <math.h>
using namespace std;
struct QUIZ{
string Question;
string Option[4];
int CorrectAnswer; };
int main(){

QUIZ questions[]= {{"What is the past tense of GO?",{ "Come", "Went", "Gone", "Came"}, 2},{"What is the comparator for GOOD?", { "Better","Gooder", "Best", "Good"}, 1}, {"What is the opposite of COLD?", {"hot","Warm","Cool"}, 1},{"what is the superator for GREAT?", {"Best", "Super", "Good", "Greatest"}, 4}, {"As SILENT as_____?",{"Graveyard","Club", "Party", "Market"}, 1}};

 int i,j; int score=0; int percentage=0;
 for(i=0; i<5; i++){
    cout<<"QUESTION"<<i+1<<endl<<questions[i].Question<<endl;
    for (j=0; j<4; j++){
        cout << j+1 << questions[i].Option[j]<<endl;

}
cout<<"CHOOSE THE CORRECT OPTION (1-4):"<<"";
    int answer;

    cin>>answer;
    if(answer==questions[i].CorrectAnswer){
        cout<< "CORRECT!!!!"<< endl;
        cout<< " "<<endl;
        score++;
    }
    else {
        cout << "wrong"<<endl;
        cout<<" "<<endl;
    }


 }
cout<<"YOU SCORED"<<"  "<<score<<endl;
percentage= score*20;
cout<<"PERCENTAGE"<<percentage<<"%"<<endl;
if (percentage>=50){
    cout<<"Hurray!!!! You passed";
}
else {
    cout<< "You failed. you can do better next time";
}

}
