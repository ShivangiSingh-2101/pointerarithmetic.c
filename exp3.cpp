//Shivangi Singh
//24070123148
//B3
#include <iostream>
using namespace std;
int main()
{
  int a=10;
  int* aptr=&a;
  cout<<*aptr<<endl;
  *aptr=20;
  cout<<a<<endl;
  int arr[]={10,20,30};
  cout<<*arr<<endl;
    return 0;
}

#Output:
#10
#20
#10
