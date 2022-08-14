#include <stdio.h>

typedef struct
{
  int count;
  int entry[100];
} list;

void insert(list *, int, int);
void create(list *);
void traverse(list *);
