// take number from user in decimal foramt from user and toggle the 7th bit

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int ToggleBit(UINT iNo)
{
    int iMask= 0x00000040;  

    return iNo ^ iMask; 
}
int main()
{
    UINT iValue = 0;
    int iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    iRet = ToggleBit(iValue);
    
    cout<<"Result is:"<<iRet<<"\n";

    return 0;
}

/*


     0 1 1 1 0 1 0 0 



*/
