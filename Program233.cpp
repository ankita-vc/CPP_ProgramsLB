// take number from user in decimal foramt and Check 3rd bit is on or off(mask designing)

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
  UINT iMask= 4;  // we want to check 3rd bit is on or off (2 to the power 2)
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
  unsigned int iValue= 0;
  bool bRet= false;

  cout<<"enter number:";
  cin>>iValue;

  bRet= CheckBit(iValue);
  if(bRet==true)
  {
    cout<<"3rd bit is on"<<"\n";
  }
  else
  {
    cout<<"3rd bit is off"<<"\n";

  }

  return 0;
}
