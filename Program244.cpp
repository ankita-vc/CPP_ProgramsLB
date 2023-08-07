// take number from user in decimal foramt from user and OFF the 7th bit

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0X00000040;  // if bit number is provided then mention its hexadecimal value.
    UINT iResult = 0;

    iResult = iNo & iMask;  // check whether the bit is on or off
    if(iResult == iMask)    //  if Bit is ON 
    {
        return (iNo ^ iMask);  // turn it off and return the modified value
    }
    else    // Bit is OFF
    {
        return iNo;   // return the same value
    }
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    iRet = OffBit(iValue);
    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}

/*

    iPos = 7

    iNo        0   0   1   1   0   1   0   0 
               0   1   0   0   0   0   0   0        ^
-----------------------------------------------------
               0   0   1   1   0   1   0   0
*/


