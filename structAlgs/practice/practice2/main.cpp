#include "tree.h"
#include <iostream>
#include <string.h>
#include <stdio.h>

int main()
{
    container<int> *t = new tree<int>();

    int a, d;
    char com[4];

    printf("Start\n");
    printf("\n");
    printf("\n");

    while (strcmp("x", com) != 0)
    {
        d = 0;

        printf("Вводите команду для работы с деревом\n");

        scanf("%s", com);

        if (strcmp("h", com) == 0)
        {
            printf("Список команд\n");
            printf("i - Вставить элемент\n");
            printf("d- Удалить элемент\n");
            printf("c - Распечатать дерево и его высоту\n");
            printf("x - выход\n");
            printf("\n");

            d = 1;
        }

        if (strcmp("i", com) == 0)
        {
            printf("Вводите элемент:\n");

            scanf("%d", &a);

            t->insert(a);

            d = 1;
        }

        if (strcmp("c", com) == 0)
        {
            t->dump();

            d = 1;
        }

        if (strcmp("d", com) == 0)
        {
            std::cout << "Удаляйте элемент:" << std::endl;

            std::cin >> a;

            t->remove(a);

            d = 1;
        }

        if (strcmp("e?", com)==0)
        {
            std::cout << "Вводите элемент, который хотите проверить" << std::endl;

            std::cin >> a;

            if(t->exists(a))
                std::cout << "Элемент " << a << ": найден" << std::endl;
            else
                std::cout << "Элемент " << a << ": не найден" << std::endl;

            d = 1;
        }

        if ((d == 0) && (strcmp("x", com) != 0))

        {
            printf("Неверная команда\n");
            printf("Введите h для справки\n");
        }
    }

    return 0;

}
