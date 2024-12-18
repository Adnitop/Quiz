#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int num1, num2;
    cout<<"GUESS THE TWO NUMBERS CORRECTLY:"<<endl;
cin>>num1;  cin>>num2;

    const short minvalue=1;
    const short maxvalue=6;

   srand(time(0));
short die = (rand () % (maxvalue - minvalue +1))+ minvalue;
short dies =(rand ()% (maxvalue - minvalue +1))+ minvalue;
cout<<"HERE ARE THE CORRECT NUMBERS:"<<endl<<die<<endl<<dies<<endl;
if(num1 == die || num2==dies){
    cout<<"CLOSE BUT NOT CLOSE ENOUGH";
}
else if (num1==die && num2==dies){
    cout<<"wooow, YOU GUESSED RIGHT";
}
else{
    cout<< "oops, YOU GUESSED WRONG";
}
}
