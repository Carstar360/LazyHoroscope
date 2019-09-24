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
   
   
  //get user inpu
  cout<<"What is your first name?"<<endl;
  cin>>first;
  cout<<"What is your last name?"<<endl;
  cin>>last;
  cout<<"-------------------------------------------------------------------------";
  cout<<"------"<<endl;
  cout<<"-------------------------------------------------------------------------";
  cout<<"------"<<endl;

  cout<<"Welcome, "<<first.at(0)<<"."<<last.at(0)<<"., here is your fortune..."<<endl;

  //tell fortune
  cout<<"your lucky number is "<<first.length()<<endl;

  return 0;
}
