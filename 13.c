#include "lib.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    Sotr *head = NULL, *m;
    head = list("Воробьев", 32, "Менеджер", 4, "Мужчина");
    add(head, "Скворцов", 25, "Копирайтер", 0, "Мужчина");
    add(head, "Иванова", 29, "Сис Админ", 1, "Женщина");
    add(head, "Шутов", 35, "Директор", 8, "Мужчина");
    add(head, "Клоунова", 32, "Бухгалтер", 4, "Женщина");
    add(head, "Донцов", 31, "Джун", 2, "Мужчина");
    add(head, "Бабкина", 29, "Уборщица", 3, "Женщина");
    add(head, "Потапова", 31, "Менеджер", 2, "Женщина");
    add(head, "Соколов", 34, "Маркетолог", 7, "Мужчина");
    add(head, "Нестеров", 34, "Заместитель", 5, "Мужчина");

    int option;
    char name[50];
    int year;
    char dolg[50];
    int staj;
    char sex[50];

    do
    {
        menu();
        scanf("%i", &option);
        if (option > 4)
            printf("Error\n");
        switch (option)
        {
            case 1:
                list_traverse(head);
                break;
            case 2:
                removest(head);
                break;
            case 3:
                printf("Фамилия: ");
                while ((getchar()) != '\n')
                    ;
                fgets(name, sizeof(name), stdin);
                name[strlen(name) - 1] = name[strlen(name)];
                printf("Возраст: ");
                scanf("%i", &year);
                printf("Должность: ");
                while ((getchar()) != '\n')
                    ;
                fgets(dolg, sizeof(dolg), stdin);
                dolg[strlen(dolg) - 1] = dolg[strlen(dolg)];
                printf("Стаж: ");
                scanf("%i", &staj);
                printf("Пол: ");
                while ((getchar()) != '\n')
                    ;
                fgets(sex, sizeof(sex), stdin);
                sex[strlen(sex) - 1] = sex[strlen(sex)];
                if (m != NULL)
                {
                    add(head, name, year, dolg, staj, sex);
                }
                else
                {
                    head = list(name, year, dolg, staj, minus, sex);
                    m = head;
                }
                break;
        }
    } while (option != 0);
    return 0;
}
