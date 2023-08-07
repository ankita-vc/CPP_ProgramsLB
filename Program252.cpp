// take number from user in decimal foramt and OFF the nth bit and return modified value

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
    int iMask= 0x00000001; 
    int iResult= 0;

    iMask= iMask << (iPos -1);
    iMask= ~iMask;

    iResult= iNo & iMask;

    return iResult;
}
int main()
{
    UINT iValue = 0;
    int iRet = 0;
    int iBit= 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    cout<<"Enter the bit : "<<"\n";
    cin>>iBit;

    iRet = OffBit(iValue, iBit);
    
    cout<<"Result is:"<<iRet<<"\n";

    return 0;
}

/*


     0 1 1 1 0 1 0 0 



*/
