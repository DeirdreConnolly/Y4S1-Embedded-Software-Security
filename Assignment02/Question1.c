#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>

struct result {
  int grade;
  char *name;
};

void winner()
{
  printf("How can this be?!\n" );
}

int main(int argc, char **argv)
{
  struct result *r1, *r2;

  r1 = malloc(sizeof(struct result));
  r1->grade = 45;
  r1->name = malloc(24);

  r2 = malloc(sizeof(struct result));
  r2->grade = 25;
  r2->name = malloc(24);

  strcpy(r1->name, argv[1]);
  strcpy(r2->name, argv[2]);

  printf("Grades processed!\n");
}