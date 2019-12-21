 	#include <iostream>

      using namespace std;
   
 int numberCounter3(int x)
    { int r,c3; r = 0; c3 = 0;    
      while(x/3 > 0) 
       {
        x/=3;
        x%3;
        c3+=1;
      }
    return c3;
}

 int numberCounter4(int x)
     {int r,c4; r = 0; c4 = 0;    
      while(x/4 > 0)
      {
        x/=4;
        x%4;
        c4+=1;
       }


     return c4;
   }

int main()
{

  int a,r1,r2;
  
  cin >> a;
   r1 = numberCounter3(a); r2 = numberCounter4(a);
  
  cout << "Трехлопастных спиннеров: "<<r1<<endl<< "Четырехлопастных: "<<r2<<endl;

return 0;
}
