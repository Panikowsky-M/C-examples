#include<stdio.h>

const int MQsize = 100;

class Qu {
	char q[MQsize];
	int size;
	
	int putloc, getloc;
   public:
    Qu(int len) {
    if(len > MQsize) len = MQsize;
    else if(len <= 0)len =1;

    size = len;
    putloc = getloc = 0;
   }

void put(char ch) {
    if(putloc == size) {
      printf("--- Очередь полна.\n");
      return;
    }
putloc++;

q[putloc] = ch;
}

char get() {
  if(putloc == getloc) {
      printf("--- Очередь пуста.\n");
      return 0;
    }
 getloc++;
 return q[getloc];
 }
};

int main()
{
  Qu bigQ(100);
  Qu smallQ(4);
  char t;
  int i;

 printf("Используется bigQ для\
 хранения латинского алфавита.\n");
  for(i =0; i < 26; i++) bigQ.put('A' +i);

  printf("BigQ содержит: \n");
    for(i =0; i < 26; i++){
      t = bigQ.get();
      if(t!= 0) printf("%c",t);
      }

 printf("\n\n");

 printf("Демонстрация ошибок\
 с помощью smallQ.\n");

 for(i = 0; i < 5; i++) {
   smallQ.put('Z' -i);
   char iteritem0 = 'Z' -i;
   printf("Пытаемся записать %c\n", (char)iteritem0);
   }
  printf("\n");
 printf("Содержимое smallQ: \n");
 for(i =0; i < 5; i++){
 t = smallQ.get();

 if(t!= 0)printf("%c\n",t);
 }
printf("\n");
return 0;
}
