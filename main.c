#include <stdio.h>
#include <string.h>
#include "list.h"
#include "list.c"

int main(void)
{
    char what_do[STR_SIZE];
    int value, a;
    List *l = list_create();
    do {
        if (!strcmp(what_do, "help")) {
            printf("\thelp - список команд\n");
            printf("\tprint - распечатать список\n");
            printf("\tremove - удалить элемент\n");
            printf("\tdelete - удалить по индексу\n");
            printf("\tget - получить значение по индексу\n");
            printf("\tinsert [индекс]- вставить по индексу последний введенный элемент\n");
            printf("\tinsert [индекс][значение] - вставить по индексу\n");
            printf("\tappend [значение] - добавить в конец\n");
            printf("\tassign [индекс][значение] - присвоить значение по индексу\n");
            printf("\tsize - размер списка\n");
            printf("\tresult - циклический сдвиг элементов вперед на один\n");
            printf("\texit - выйти\n");
        } else if (!strcmp(what_do, "insert")) {
            scanf("%d%d", &a, &value);
            list_insert(a, value, l);
        } else if (!strcmp(what_do, "remove")) {
            scanf("%d", &value);
            list_remove(value, l);
        } else if (!strcmp(what_do, "delete")) {
            scanf("%d", &a);
            scanf("%d", &a);
            list_delete(a, l);
        } else if (!strcmp(what_do, "get")) {
            scanf("%d", &a);
            printf("%d\n", list_get(a, l));
        } else if (!strcmp(what_do, "print")) {
            list_print(l);
        } else if (!strcmp(what_do, "exit")) {
            break;
        } else if (!strcmp(what_do, "append")) {
            while (scanf("%d", &value)) {
                list_append(value, l);
            }
        } else if (!strcmp(what_do, "assign")) {
            scanf("%d%d", &a, &value);
            list_assign(a, value, l);
        } else if(!strcmp(what_do, "size")) {
            printf("%ld\n", list_size(l));
        } else if(!strcmp(what_do, "result")) {
            cycle(l);
            list_print(l);
        }
        scanf("%s", what_do);
    } while (!feof(stdin));
    list_destroy(l);
    return 0;
}