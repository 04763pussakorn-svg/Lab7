#include<iostream>
#include<string>
using namespace std;

int main(){

string User;
int code;
string Movie;
string Date;
string Reply;

cout << "Fahsai: Sawadee ka...Can you tell me your name? \n";
cout <<"?????: ";
getline(cin,User);
cout << "Fahsai: Wow!!! "<< User << " is a really cool name.\n";
cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
cout << User <<": ";
cin >> code; 
cin.ignore();
cout << "Fahsai: I think you may be GEAR "<< (code/10000000) - 12 <<". I have a free movie ticket for you.\n";
cout << "Fahsai: Let's go to the cinema together!!!\n";
cout << "Fahsai: What movie do you want to watch?\n";
cout << User <<": ";
getline(cin,Movie);
cout << "Fahsai: So....which day are you free to go with me?\n";
cout << User <<": ";
getline(cin,Date);
cout << "Fahsai: "<< Date << "....that is OK!!! I'm looking forward to watching "<< Movie <<" with you.\n";
cout << User <<": ";
getline(cin,Reply);
cout << "Fahsai: 555+ see you " << Date << ". Bye Bye \\(^ ^)/";
}