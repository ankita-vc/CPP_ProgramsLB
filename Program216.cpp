/*
Accept number from user and perform addition of even digits:
*/

#include<iostream>

using namespace std;

class Digit
{
  public:
    int iNo;

  Digit(int X)
  {
    iNo = X;
  }

};

int main()
{
  int iValue= 0;

  cout<<"enter number:"<<"\n";
  cin>>iValue;

  Digit dobj(iValue);

  cout<<"iNo:"<<dobj.iNo<<"\n";

  return 0;
}