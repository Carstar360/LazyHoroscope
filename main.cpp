//Authors: Carson Lee
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
   string first = " ";
   string last = " ";
   int lucky;
   
   cout<<first.at(0)<<endl;
   cout<<last.at(0)<<endl;

  //get user inpu
  cout<<"What is your first name? "<<endl;
  cin>>first;
  cout<<"What is your last name? "<<endl;
  cin>>last;
  cout<<"\n\n";

  cout<<"Welcome, "<<first.at(0)<<"."<<last.at(0)<<"., here is your fortune..."<<endl;

  //tell fortune
  cout<<"your lucky number is "<<first.length()<<endl;

  return 0;
}
