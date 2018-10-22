#include<iostream>

using namespace std;

double testArray[] = {1.2 , 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0};
double &link_to_el(int Ai)
{
  return testArray[Ai];
}

int main()
{
 int n;
cout<<"Orig testArray: ";
    for ( n = 0 ; n < 9 ; ++n)
      {
         cout<<testArray[n]<<' '<<'\n';
      }
    link_to_el(1) = 1.35;
    link_to_el(3) = 1.5657538;
    cout<<"Modified testArray: ";
      for ( n = 0 ; n < 9 ; ++n )
        {
          cout<<testArray[n]<<' '<<'\n';
        }
return 0;
}
