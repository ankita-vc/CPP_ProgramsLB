// take number from user in decimal foramt and accept two nth bit from user and check whether the bits are ON or OFF

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;
    UINT iResult = 0;

    if((iPos1 < 1) || (iPos1 > 32)  || (iPos2 < 1) || (iPos2 > 32))
    {
        cout<<"Invalid position"<<"\n";
        return false;
    }
    
    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iResult = iNo & (iMask1 | iMask2);
    if(iResult == (iMask1 | iMask2))
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
    UINT iValue = 0;
    UINT iBit1 = 0;
    UINT iBit2 = 0;

    bool bRet = false;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    cout<<"Enter the first bit position (Range should be 1 to 32)"<<"\n";
    cin>>iBit1;

    cout<<"Enter the second bit position (Range should be 1 to 32)"<<"\n";
    cin>>iBit2;

    bRet = CheckBit(iValue, iBit1, iBit2);
    if(bRet == true)
    {
        cout<<"Bits are ON"<<"\n";
    }
    else
    {
        cout<<"Bits are OFF"<<"\n";
    }

    return 0;
}

/*



0000    0000    0000    0000    0000    0000    0000    0000

iPos = 7

iMask = 0X00000001

iPos= 3

iMask= 0x00000001  (initially)
iMask= 0x00000100   

iMask = 0000    0000    0000    0000    0000    0000    0000    0001

iMask = iMask << (iPos - 1);
iMask = iMask << (7 - 1);
iMask = iMask << 6;

iMask = 0000    0000    0000    0000    0000    0000    0   1   0   0    0   0    0    0

*/