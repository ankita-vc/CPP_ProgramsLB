// take number from user in decimal foramt and Check 4th bit and 9th bit is on or off(mask designing)

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
  UINT iMask= 0x108;  // should be in hexadecial format
  UINT iResult= 0;

  iResult= iNo | iMask;

  if(iResult== iNo)
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
    cout<<"4th and 9th bits are on"<<"\n";
  }
  else
  {
    cout<<"either bits are off"<<"\n";

  }

  return 0;
}
