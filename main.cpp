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
  cout<<"Your lucky number is " <<name1.length()<<endl;

  if (name1[0] =='a' ||name1[0] == 'A' ||name1[0] == 'e'
  ||name1[0] == 'E' ||name1[0] == 'i' ||name1[0] == 'I'
  ||name1[0] == 'o' ||name1[0] == 'O' ||name1[0] == 'u'
  ||name1[0] == 'U')
  {
  cout<<"you are destined to be famous!\n";
  }
  else 
  {
  cout<<"you should keep a low profile.\n";
  }

  int len=name2.length();
  char let = name2[len-1];
  if (let == 'a' ||let == 'A' ||let == 'e' ||let == 'E' 
  ||let == 'i' ||let == 'I' ||let == 'o' ||let == 'O'
  ||let == 'u' ||let == 'U')
  {
  cout<<"you have already met your true love.\n";
  }
  cout<<"have a good day!"<<endl;

  return 0;
}
