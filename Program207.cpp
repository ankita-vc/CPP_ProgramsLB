/*
Take two numbers from user and return largest number:
*/

#include<iostream>

using namespace std;

class Number
{
  public:
    int iNo1;
    int iNo2;

    void Accept()
    {
      cout<<"enter first number:"<<"\n";
      cin>>iNo1;

      cout<<"enter second number:"<<"\n";
      cin>>iNo2;
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
  Number nobj;

  nobj.Accept();

  int iRet= 0;
  iRet= nobj.Maximum();
  cout<<"largest number is:"<<iRet<<"\n";
  
  return 0;
}