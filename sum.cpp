#include <iostream>
using namespace std;

int main()
{
   int num, sum=0;

   cout<<"Please enter 5 numbers:"<<endl;

  for(int i=0; i<5; i++)
  {
   
    cin>>num;

   
    sum=sum+num;
  }
     cout << "\n The sum of 5 numbers is: "<<sum << endl;
     return 0;
}
