// take number from user in decimal format and Convert into hexadecimel

#include<iostream>
using namespace std;

void DisplayHexadecimal(int iNo)
{
  int iDigit= 0;
  int iCnt= 0;

  cout<<"Hexadecimal conversion of "<<iNo<<" is:\n";

  while(iNo != 0)
  {
    iDigit= iNo % 16;
    cout<<iDigit<<"\n";
    iNo= iNo/16;
  }

}

int main()
{
  int iValue1= 0;
  int iValue2= 0;

  cout<<"enter first number:";
  cin>>iValue1;

  DisplayHexadecimal(iValue1);

  return 0;
}

/*
The output will not be as accepted because the range of hexadecimal is from 0 to 9 and A to Z.
It has both numbers and characters so we have to think about different logic
*/