//Authors: Carson Lee
#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main()
{
  //declare variables
   string first = " ";
   string last = " ";
   int lucky;
   int lastNumber = ' ';
   
      
   
  //get user input
  cout<<"What is your first name?"<<endl;
  cin>>first;
  cout<<"What is your last name?"<<endl;
  cin>>last;
  
  cout<<"Welcome, "<<first.at(0)<<"."<<last.at(0)<<"., here is your fortune..."<<endl;

  lastNumber = (last.length() - 1);

  first[0] = tolower(first.at(0));
  last[lastNumber] = tolower(last.at(lastNumber));



  //tell fortune
  cout<<"your lucky number is "<<first.length()<<endl;

  if (first.at(0) == 'a' || first.at(0) == 'e' || first.at(0) == 'o' || first.at(0) == 'i' ||
      first.at(0) == 'u')
  {
     cout<<"you are destined to be famous!"<<endl;
  }
   else

  {
     cout<<"you should keep a low profile."<<endl;
  }


  if (last.at(lastNumber) == 'a' || last.at(lastNumber) == 'e' || last.at(lastNumber) == 'o' ||
      last.at(lastNumber) == 'u' || last.at(lastNumber) == 'i')
  {
     cout<<"you have already met your true love."<<endl;
  }
  
  
  
  cout<<"have a good day!"<<endl;
  
  return 0;
}
