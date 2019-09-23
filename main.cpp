//Authors: Carson Lee
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
   string first = " ";
   string last = " ";
   
   cout<<first.at(0)<<endl;
   cout<<last.at(0)<<endl;

  //get user inpu
  cout<<"What is your first name?: "<<endl;
  cin>>first;
  cout<<"What is your last name?: "<<endl;
  cin>>last;

  cout<<"Welcome "<<first.at(0)<<"."<<last.at(0)<<"., here is your fortune..."<<endl;

  //tell fortune

  return 0;
}
