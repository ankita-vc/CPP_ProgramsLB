/*
Accept N number from user and perform addition:
*/

#include<iostream>

using namespace std;

class Array
{
  public:
    int iSize;
    int *Arr;

    Array(int iNo)
    {
      cout<<"inside Array"<<"\n";
      iSize= iNo;
      Arr= new int[iSize];
    }

    ~Array()
    {
      cout<<"inside destructor.."<<"\n";
      delete []Arr;
    }

    void Accept()
    {
      cout<<"inside Accept method"<<"\n";
      cout<<"enter the elements:"<<"\n";

      int iCnt= 0;
      for(iCnt= 0; iCnt < iSize; iCnt++)
      {
        cin>>Arr[iCnt];
      }
    }

    void Display()
    {
      cout<<"inside Display method"<<"\n";
      cout<<"the elements of array are:"<<"\n";

      int iCnt= 0;
      for(iCnt= 0; iCnt < iSize; iCnt++)
      {
        cout<<Arr[iCnt]<<"\n";
      }
    }

    int Summation()
    {
      cout<<"inside Summation method"<<"\n";
      int iSum= 0;
      int iCnt= 0;
      for(iCnt= 0; iCnt< iSize; iCnt++)
      {
        iSum= iSum + Arr[iCnt];
      }
      return iSum;
    }
};

int main()
{
  cout<<"inside main"<<"\n";
  int iNo= 0;
  int iRet= 0;

  cout<<"enter number of elements:"<<"\n";
  cin>>iNo;

  Array aobj(iNo);
  aobj.Accept();
  aobj.Display();

  iRet= aobj.Summation();

  cout<<"Summation is:"<<iRet<<"\n";

  return 0;
}