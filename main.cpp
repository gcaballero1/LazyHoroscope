//Authors: Gabriel Caballero
#include<iostream>
#include<string>

using namespace std;

int main()
{
int lucky;
string name1;
string name2;

  cout<<"What's your first Name?\n";
  cin>>name1;
  cout<<"What's your Last Name?\n";
  cin>>name2;

  string nickname;
  nickname.push_back(name1[0]);
  nickname +=".";
  nickname.push_back(name2[0]);
  nickname+= ".";

  cout<<"Welcome, "<<nickname<<", here is your fortune...\n";
  cout<<"Your lucky number is " <<name1.length()+name2.length()<<endl;

  return 0;
}
