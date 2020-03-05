#include<iostream>
#include<cmath>

using namespace std;

class triang {
	private:
	int a =0, b =0, c =0;
       public:
	   triang(int si1,int si2,int si3){
		a = si1;
		b = si2;
		c = si3;
       };
~triang()
    {
      a = 0; b = 0; c = 0;
     };
void P()
 {
  int p = 0;
  p = a+b+c;
  cout << "P= "<<p<<"\n";
}
void S()
 {
   int p = (a+b+c)/2;
   int s = sqrt(p*(p-a)*(p-b)*(p-c));cout << "S= "<<s<<"\n";
}

};

int main()
{
int x0_in,x1_in,x2_in = 0;
cin>> x0_in >> x1_in >> x2_in;
triang obj(x0_in,x1_in,x2_in);
obj.P();
obj.S();

return 0;
}
