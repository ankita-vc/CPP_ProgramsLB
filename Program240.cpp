// take number from user in decimal foramt and Check 7th bit and 14th bit and 21th bit are on or off(mask designing)

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
  UINT iMask= 0x00102040;  // sould be in hexadecial formate 
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
    cout<<"7th and 14th bit and 21th bit are on"<<"\n";
  }
  else
  {
    cout<<"either bits are off"<<"\n";

  }

  return 0;
}
