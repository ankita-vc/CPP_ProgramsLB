// take number from user in decimal foramt and Covert into binary

#include<iostream>
using namespace std;

void Display(int iNo)
{
  int iDigit= 0;
  int iCnt= 0;

  cout<<"binary conversion of "<<iNo<<"is: \t";
  while(iNo != 0)
  {
    iDigit= iNo % 2;
    cout<<iDigit;
    iNo= iNo/2;
  }
  cout<<"\n";
}

int main()
{
  int iValue= 0;

  cout<<"enter number:";
  cin>>iValue;

  Display(iValue);

  return 0;
}