	#include<iostream>
using namespace std;
int main()
{
     int k,n,p;
     cin>>n>>k;
      while(k!=1){
      	  n=(n - k %2)/2; //найдем четное место посередине
          k/=2;
    }
    p = n-1;
cout<<"Middle seat on the first side: "<<p/2<<endl;
cout<<"Mid seat in the second side: "<<n/2<<endl;

return 0;
}
