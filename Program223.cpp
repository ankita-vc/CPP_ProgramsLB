/*
Take two numbers from user and return largest number:
*/

#include<iostream>
using namespace std;

class Number
{
  private:
    int iNo1;
    int iNo2;
  
  public:
    Number(int X, int Y)
    {
      iNo1= X;
      iNo2= Y;
    }

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
  int iRet= 0;
  int iValue1= 0;
  int iValue2= 0;
  
  cout<<"enter first number:"<<"\n";
  cin>>iValue1;

  cout<<"enter second number:"<<"\n";
  cin>>iValue2;

  Number nobj(iValue1, iValue2);

  iRet= nobj.Maximum();

  cout<<"largest number is:"<<iRet<<"\n";
  
  return 0;
}