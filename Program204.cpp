/*
Take two numbers from user and return largest number:
*/

#include<iostream>

using namespace std;

int Maximum(int iNo1, int iNo2)
{
  if(iNo1 > iNo2)
  {
    return iNo1;
  }
  else
  {
    return iNo2;
  }
}

int main()
{
  int iValue1= 0;
  int iValue2= 0;
  int iRet= 0;

  cout<<"enter first number:"<<"\n";
  cin>>iValue1;

  cout<<"enter second number:"<<"\n";
  cin>>iValue2;

  iRet= Maximum(iValue1, iValue2);

  cout<<"largest number is:"<<iRet<<"\n";
  
  return 0;
}