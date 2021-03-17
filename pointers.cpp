
#include <iostream>
using namespace std;
int main()
{
  int marks[10];
  int *ptr;
  int i;

  cout<<"enter the element of the array: \n";
  for( i=0;i<=10;++i)
  {
    cin>>marks[i];
  }
  ptr = marks;
  cout<<"the value of *ptr: "<<*ptr<<endl;
  cout<<"the value of *marks: "<<*marks<<endl;

}
