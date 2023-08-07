// take number from user in decimal foramt and Check 11th bit is on or off(mask designing)

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
  UINT iMask= 0x40;  // should be in hexadecial format
  UINT iResult= 0;

  iResult= iNo & iMask;

  if(iResult== iMask)
  {
    return true;
  }
  else
  {
    return false;
  }

}

int main()
{
  UINT iValue= 0;
  bool bRet= false;

  cout<<"enter number:";
  cin>>iValue;

  bRet= CheckBit(iValue);
  if(bRet==true)
  {
    cout<<"11th bit is on"<<"\n";
  }
  else
  {
    cout<<"11th bit is off"<<"\n";

  }

  return 0;
}

/*
iNo= 13

Binary = 0 0 0 0 1 1 0 1  (normal binary code)

Mask   = 0 0 0 0 1 0 0 0  (same binary code but with 3rd bit ON)
--------------------------
&      = 0 0 0 0 1 0 0 0    This is iResult by performing & operation

iResult = iMask

0 0 0 0 1 0 0 0
(0 0 0 0) (1 0 0 0)
 0          4

 hexadecimal is 0x04 / 0x4;

*/
