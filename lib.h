#ifndef LIB_H
#define LIB_H

typedef struct Node Sotr;
void menu();
Sotr *list(char *name, int year, char *dolg, int staj, char *sex);
void add(Sotr *head, char *name, int year, char *dolg, int staj, char *sex);
void list_traverse(Sotr *head);
Sotr* removest(Sotr *head);

#endif
