// take number from user in decimal foramt and Check 7th bit is on or off(mask designing)

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
    cout<<"7th bit is on"<<"\n";
  }
  else
  {
    cout<<"7th bit is off"<<"\n";

  }

  return 0;
}
