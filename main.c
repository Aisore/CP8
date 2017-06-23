#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "list.h"
#include "list.c"

int main(void)
{
    int k = 0, x = 0;
    List *list = createList();

    char s[8];

    printf("\nДля получения помощи в использовании программы напишите 'help' или 'h'.\n\n");
    while (1) {
        scanf("%7s", s);
        if (!strcmp(s, "pf")) {
            if(!list) {
                List *list = createList();
            }
            while (scanf("%d", &x)) {
                pushFront(list, &x);
            }
        } else if (!strcmp(s, "pb")) {
            if(!list) {
                List *list = createList();
            }
            while (scanf("%d", &x)) {
                pushBack(list, &x);
            }
        } else if (!strcmp(s, "delete") || !strcmp(s, "del")) {
            if(list == NULL) printf("Списка не существует, воспользуйтесь командами 'help' или 'h'.\n");
            else if (list->size == 0) {
                printf("Список пуст.\n");
            } else {
                while (scanf("%d", &x)) {
                    deleteN(list, x);
                }            
            }
        } else if (!strcmp(s, "quit") || !strcmp(s, "exit") || !strcmp(s, "q")) {
            //if (list) destroyList(&list);
            break;
        } else if (!strcmp(s, "popb")) {
            if(!list) printf("Списка не существует, воспользуйтесь командами 'help' или 'h'.\n");
            else if (list->size == 0) {
                printf("Список пуст.\n");
            } else {
                popBack(list);            
            }
        } else if (!strcmp(s, "popf")) {
            if(!list) printf("Списка не существует, воспользуйтесь командами 'help' или 'h'.\n");
            else if (list->size == 0) {
                printf("Список пуст.\n");
            } else {
                popFront(list);            
            }
        //} else if (!strcmp(s, "run") || !strcmp(s, "r")) {
            //if(list == NULL) printf("Списка не существует, воспользуйтесь командами 'help' или 'h'.\n");
           // else if (list->size == 0) {
            //    printf("Список пуст.\n");
            //else if (list->size == 1) {
            //    printf("Список состоит из одного элемента.\n");
            //else {
              //  cyclicalSh(list);
            //}
        } else if (!strcmp(s, "print") || !strcmp(s, "p")) {
            if (!list) printf("Списка не существует, воспользуйтесь командами 'help' или 'h'.\n");
            else {
                printf("\n");
                printf("JJA");
                //printList(list);
                printf("\n");
            }
        } else if (!strcmp(s, "length") || !strcmp(s, "len")) {
            if (!list) printf("Списка не существует, воспользуйтесь командами 'help' или 'h'.\n");
            else {
                printf("%ld\n", list->size);
            }
        } else if (!strcmp(s, "destroy") || !strcmp(s, "des")) {
            if (!list) printf("Спиcка не существует, воспользуйтесь командами 'help' или 'h'.\n");
            else {
                destroyList(&list);
            }
        } else if (!strcmp(s, "help") || !strcmp(s, "h")) {
            printf("Команды 'pf' вставляет элемент в начало списка.\n");
            printf("Команды 'pb' вставляет элемент в конец списка.\n");
            printf("Команды 'popf' удаляет элемент в начале списка.\n");
            printf("Команды 'popb' удаляет элемент в конце списка.\n");
            printf("Команды 'print' и 'p' печатают список.\n");
            printf("Команды 'run' и 'r' выполняют циклический сдвиг элементов списка на один элемент вперед.\n");
            printf("Команды 'length' и 'len' возвращают длину списка.\n");
            printf("Команды 'delete' и 'del' удаляют вершину из списка.\n");
            printf("Команды 'destroy' и 'des' удаляют список.\n");
            printf("Команды 'quit' и 'q' выходят из программы.\n");
        } else {
            printf("\nКоманды не существует. Воспользуйтесь командами 'help' или 'h'.\n");
        }
    }
    return 0;
}