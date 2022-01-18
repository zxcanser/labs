#include "lib.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int y = 0;

typedef struct Node
{
    int u;
    char name[50];
    int year;
    char dolg[50];
    int staj;
    char sex[50];
    Sotr *next, *prev;
} Sotr;

Sotr *pop = NULL;

void menu()
{
    {
        printf("------------------------------------------------------------------------------------------\n");
        printf("Селектор:\n");
        printf("1. Список сотрудников\n");
        printf("2. Разделить на М \ Ж\n");
        printf("3. Добавить сотрудника\n");
        printf("0. Выход\n");
        printf("------------------------------------------------------------------------------------------\n");
    }
}

Sotr *list(char *name, int year, char *dolg, int staj, char *sex)
{
    Sotr *l = (Sotr *)malloc(sizeof(Sotr));
    y++;
    l->u = y;
    strcpy(l->name, name);
    l->year = year;
    strcpy(l->dolg, dolg);
    l->staj = staj;
    strcpy(l->sex, sex);
    l->next = NULL;
    l->prev = NULL;
    pop = l;
    return l;
}

void add(Sotr *head, char *name, int year, char *dolg, int staj, char *sex)
{
    Sotr *temp = head;
    Sotr *l = (Sotr *)malloc(sizeof(Sotr));
    y++;
    l->u = y;
    strcpy(l->name, name);
    l->year = year;
    strcpy(l->dolg, dolg);
    l->staj = staj;
    strcpy(l->sex, sex);
    l->next = NULL;
    while (temp->next != NULL)
        temp = temp->next;
    l->prev = temp;
    temp->next = l;
}

void list_traverse(Sotr *head)
{
    Sotr *l = pop;
    printf("------------------------------------------------------------------------------------------\n");
    while (l != NULL)
    {
        printf("Номер - %i; Фамилия - %s; Возраст - %i; Должность - %s; Стаж - %i; Пол - %s\n", l->u, l->name, l->year, l->dolg, l->staj, l->sex);
        l = l->next;
    }
}

Sotr *removest(Sotr *head)
{
    char *needed_sex = "Мужчина";
    Sotr *l = pop, *n, *m;
    while (l)
    {
        if (strcmp(needed_sex, l->sex) != 0)
        {
            if (l->prev == NULL)
            {
                pop = l->next;
                m = l;
                while (l->next)
                {
                    l->next->u = (l->next->u) - 1;
                    y = (l->next->u) - 1;
                    l = l->next;
                }
                l = m;
                l->next->prev = NULL;
                l->next = l->prev = l;
                free(l);
                n = pop;
            }
            else
            {
                if (l->next == NULL)
                {
                    l->prev->next = NULL;
                    l->next = l->prev = l;
                    free(l);
                    break;
                }
                else
                {
                    l->next->prev = l->prev;
                    l->prev->next = l->next;
                    m = l;
                    while (l->next)
                    {
                        l->next->u = (l->next->u) - 1;
                        y = (l->next->u) - 1;
                        l = l->next;
                    }
                    l = m;
                    n = l->prev;
                    l->next = l->prev = l;
                    free(l);
                    l = n;
                }
            }
        }
        else
        l = l->next;
    }
    return 0;
}
