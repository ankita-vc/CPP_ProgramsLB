// take number from user in decimal foramt from user and OFF the 7th bit

#include<iostream>
using namespace std;

typedef unsigned int UINT;

//  1111 1111 1111 1111 1111 1111 1011 1111
//   F    F    F    F    F    F    B    F

int OffBit(UINT iNo)
{
    return iNo & 0xFFFFFFBF;
}
int main()
{
    UINT iValue = 0;
    int iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    iRet = OffBit(iValue);
    
    cout<<"Result is:"<<iRet<<"\n";

    return 0;
}

/*


     0 1 1 1 0 1 0 0 



*/
