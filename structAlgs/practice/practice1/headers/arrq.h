#ifndef arrq
#define arrq

#include<iostream>

class queue{
     int *array;     // Указатель на массив
     int size;       // Размер очереди
     int end = 0;    // Число элементов

public:
     queue(int n){ 
      size = n;
      array = (int*)malloc(sizeof(int)*n);
     }

     bool isEmpty(){
       if(end > 0){
           return false;
       }
       else{
           return true;
       }
     }

     void display(){                                  // Печатает очередь
         unsigned int i = 0;
         for(i = 0; i < size; i++){
             printf(" %d",*(array + i));
         }

         printf("\n");
     }

     void enqueue(int n){                           
         if(end == size){                                     // Проверка на заполненность
             std::cout<<"Очередь полна!"<<std::endl;
         }
         else{
         *(array + end) = n;                                  // Добавляет в хвост
         end++;                                               // Увеличивает число элементов
        }
     }

     int dequeue(){                                 // Удаляет с головы и двигает очередь
        if(!isEmpty()){                                          // Проверяем на лево
            int value = *(array);
            for(int i = 0; i < (end - 1); i++)
                *(array + i) = *(array + (i + 1));
            *(array + end - 1) = 0;                           // Зануляем свободные
            end--;                                            // Уменьшаем число элементов
            return value;
            }
        else{
            std::cout<<"Очередь пуста!"<<std::endl;
            return 0;
        }
     }
};

void QueueMenu(){
    
    std::cout<<"\nРеализация очереди на динамическом массиве";
    std::cout<<"\nВводите размер очереди";
    int s = 0;
    std::cin>>s;
    

    class queue Q(s);
    int i = 8;
    int el = 0;

while(i != 4){
    std::cout<<"\nВводите функцию для работы с очередью: \n";

    std::cout<<"\n1. Добавить\n";
    std::cout<<"2. Удалить\n";
    std::cout<<"3. Показать\n";
    std::cout<<"4. Выход\n";
    std::cin>>i;

    switch(i){
    case 1:
	std::cout<<"Вводите элемент:\n";
        std::cin>>el;
        Q.enqueue(el);
        break;

    case 2:
        el = Q.dequeue();
        printf("очередь - %d\n",el);
        break;
    case 3:    
        Q.display();
        break;
    case 4:
        break;    
    default:
	std::cout<<"Такой функции не предусмотренно, повторите ввод!\n";
    }

    
}
}
#endif
