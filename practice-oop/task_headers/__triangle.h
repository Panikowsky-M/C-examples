#ifndef __triangle
#define __triangle

#include<stdio.h>
#include<cmath>

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
  printf("P=%d\n",p);
}
void S()
 {
   int p = (a+b+c)/2;
   int s = sqrt(p*(p-a)*(p-b)*(p-c));
   printf("S=%d\n",s);

}

};
#endif
