	#include<iostream>
using namespace std;

int maxNeiborseats(int x_inp)
{
  if(x_inp <= 36)
     return (x_inp - 1) /4;
     else return 8 - (x_inp -37) / 2;
     
}

int main()
{
    int wagon[9];
   int n, p;
  int ans = 0;
 int curSeat = 0;
 for (int i = 0; i < 9; i++)
   {
      wagon[i] = 0;
    }
   cout<< "Enter N value: \n";
   cin>>n;
     for(int i = 0; i < n; i++)
     {
       cout<<"Enter"<< i+1<< "number: \n";
       cin>> p;
       wagon[maxNeiborseats(p)]+=1;
      }
       for (int i = 0; i < 9; i++)
         {
 	   if(wagon[i] == 6){curSeat++; if(curSeat > ans) ans = curSeat;}
	    else
 	    curSeat = 0;
            }
          cout<< "Ur answers here: "<<ans <<"\n";
return 0;
}
         
