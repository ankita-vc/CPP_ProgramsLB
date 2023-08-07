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

  int SumDigits()
  {
    int iDigit= 0;
    int iSum= 0;

    while(iNo != 0)
    {
      iDigit= iNo % 10;
      iSum= iSum + iDigit;
      iNo= iNo / 10;
    }
    return iSum;
  }

};

int main()
{
  int iValue= 0;
  int iRet= 0;

  cout<<"enter number:"<<"\n";
  cin>>iValue;

  Digit dobj(iValue);

  iRet= dobj.SumDigits();
  
  cout<<"Summation is:"<<iRet<<"\n";
  
  return 0;
}