           #include<stdio.h>
           #include<string.h>

void MyqsortIntfce(char *inpstr , int len) ;
void MyQsort(char *inpstr, int left, int right);

int main()
{
    char mystr[] = "jfmckldoer";
   
    printf("Original array mystr[]: %s \n", mystr);
    MyqsortIntfce(mystr, strlen(mystr));
    printf("Sorted mystr[]: %s \n", mystr);
return 0;
}

void MyqsortIntfce(char *inpstr , int len) 
{
     MyQsort(inpstr, 0, len-1); 
}

void MyQsort(char *inpstr, int left, int right)
{
     int lt_idx , rt_idx;
     char compar , tmp;
     lt_idx = left ; rt_idx = right;
     compar = inpstr[(left + right)/2];
     
     do{
         //Идем до компаранда
         while(( inpstr[lt_idx] < compar ) && (lt_idx < right)) lt_idx++;
         while(( inpstr[rt_idx] > compar ) && (rt_idx > left)) rt_idx--;
         
         //Лево направо
         if(lt_idx < rt_idx) {
            tmp = inpstr[lt_idx];
            inpstr[lt_idx] = inpstr[rt_idx];
            tmp = inpstr[rt_idx];
            lt_idx++; rt_idx--;                 
           }   

        }while(lt_idx <= rt_idx);//Пока до середки не дошли
      

     if( left < rt_idx ) MyQsort(inpstr, left, rt_idx--);
     if(lt_idx < right ) MyQsort(inpstr, lt_idx++, right);
}

