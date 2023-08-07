/*
Take two numbers from user and return largest number by using object orientation:
*/

#include<iostream>
using namespace std;

class Number
{
  public:
    int iNo1;
    int iNo2;

    int Maximum()
    {
      if(iNo1 > iNo2)
      {
        return iNo1;
      }
      else
      {
        return iNo2;
      }
    }  
};

int main()
{
  int iValue1= 0;
  int iValue2= 0;
  int iRet= 0;

  Number nobj;

  cout<<"enter first number:"<<"\n";
  cin>>iValue1;
  nobj.iNo1= iValue1;  // stored the values in corresponding characteristics  (initialization)

  cout<<"enter second number:"<<"\n";
  cin>>iValue2;
  nobj.iNo2= iValue2;

  iRet= nobj.Maximum();

  cout<<"largest number is:"<<iRet<<"\n";
  
  return 0;
}