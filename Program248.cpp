// take number from user in decimal foramt from user and Toggle the nth bit and return modified value

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos)
{
    int iMask= 0x00000001; 
    int iResult= 0;
    
    iMask= iMask << (iPos -1);

    iResult= iNo ^ iMask;

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

    iRet = ToggleBit(iValue, iBit);
    
    cout<<"Result is:"<<iRet<<"\n";

    return 0;
}

/*


     0 1 1 1 0 1 0 0 



*/
