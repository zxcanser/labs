#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
unsigned int n;

struct avtoshop
{
    char name[30];
    char brand[30];
    char model[30];
    float price;
};

void list()
{
    printf("Селектор:\n");
    printf("1. База данных автозапчастей\n");
    printf("2. Добавить запчасть\n");
    printf("3. Удалить запчасть\n");
    printf("4. Найти запчасти\n");
    printf("0. Выход\n");
}

void baza(struct avtoshop *ind)
{
    printf("№\tЗапчасть\tМарка\t\tМодель\t\tЦена\n");
    for (int i = 1; i <= n; i++)
        printf("%i\t%s\t\t%s\t\t%s\t\t%.2f\n", i, ind[i].name, ind[i].brand, ind[i].model, ind[i].price);
    printf("------------------------------------------------------------------------------------------\n");
}

void add(struct avtoshop *ind)
{
    n++;
    printf("Название запчасти: ");
    scanf("%s", ind[n].name);
    printf("Марка авто: ");
    scanf("%s", ind[n].brand);
    printf("Модель авто: ");
    scanf("%s", ind[n].model);
    printf("Цена: ");
    scanf("%f", &ind[n].price);
    printf("------------------------------------------------------------------------------------------\n");
}

void delete (struct avtoshop *ind, int number)
{
    if (number > n)
    {
        printf("Ошибка!\n");
    }
    else
    {
        for (int i = number; i <= n; i++)
            ind[i] = ind[i + 1];
        n--;
        printf("Удалено\n");
    }
    printf("------------------------------------------------------------------------------------------\n");
}

void search(struct avtoshop *ind)
{
    unsigned int k = 0;
    char find_brand[30];
    char find_model[30];
    printf("Введите марку авто: ");
    scanf("%s", find_brand);
    printf("Введите модель авто: ");
    scanf("%s", find_model);
    printf("Результат поиска: \n");
    printf("№\tЗапчасть\tМарка\t\tМодель\t\tЦена\n");
    for (int i = 1; i <= n; i++)
    {
    if ((strcasecmp(ind[i].brand, find_brand) == 0) && (strcasecmp(ind[i].model, find_model) == 0))
        {
                printf("%i\t%s\t\t%s\t\t%s\t\t%.2f\n", i, ind[i].name, ind[i].brand, ind[i].model, ind[i].price);
                k++;
        }
    }
    if (!k)
        printf("Не найдено!\n");
    printf("------------------------------------------------------------------------------------------\n");
}

int main()
{
    struct avtoshop ind[10];
    int input, id;

    do
    {
        list();
        printf("------------------------------------------------------------------------------------------\n");
        scanf("%i", &input);
        printf("------------------------------------------------------------------------------------------\n");
        if ((input > 4) || (input < 0))
        {
            printf("Введите корректное значение\n");
            printf("------------------------------------------------------------------------------------------\n");
        }
        switch (input)
        {
            case 1:
                baza(ind);
                break;
            case 2:
                add(ind);
                break;
            case 3:
                printf("Введите номер запчасти: ");
                scanf("%i", &id);
                delete (ind, id);
                break;
            case 4:
                search(ind);
                break;
        }
    } while (input);
    return 0;
}