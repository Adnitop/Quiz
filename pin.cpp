#include <iostream>
#include <string>
using namespace std;

struct ACCOUNT{
string Username;
string Password;
};
int main(){
    string Username;
string Password;
cout<<"Create new username:"<<endl;
cin>>Username;
cout<<"Create password:"<<endl;
cin>> Password;
cout<<endl<<" ";
cout<<endl<<" ";
cout<<endl<<" ";

string inset; string onset;
int i;
for (i=0; i<1; i++){

cout << "Confirm username:"<< endl;
cin>> inset;
cout<< "Confirm password :"<<endl;
cin>>onset;
cout<<endl<< " ";
if (inset== Username && onset== Password ){
    cout << "Account created successfully";
    cout<<endl<<" ";
    cout<<endl<<" ";
    cout<<endl<<" ";
}
else{
    cout << "mismatch in username or password";
    cout<<endl<<" ";
    cout<<endl<<" ";
    cout<<endl<<" ";
}
}
}

