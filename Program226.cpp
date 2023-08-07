// take two number from user in decimal format and Convert them into binary by using & | ^ bitwise operators

#include<iostream>
using namespace std;

void DisplayBinaryResult(int iNo1, int iNo2)
{
  int iResult= 0;
  int iCnt= 0;

  iResult= iNo1 & iNo2;
  cout<<"Result of & is: "<<iResult<<"\n";

  iResult= iNo1 | iNo2;
  cout<<"Result of | is: "<<iResult<<"\n";

  iResult= iNo1 ^ iNo2;
  cout<<"Result of ^ is: "<<iResult<<"\n";

}

int main()
{
  int iValue1= 0;
  int iValue2= 0;

  cout<<"enter first number:";
  cin>>iValue1;

   cout<<"enter second number:";
  cin>>iValue2;

  DisplayBinaryResult(iValue1, iValue2);

  return 0;
}