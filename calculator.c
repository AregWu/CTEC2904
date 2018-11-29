#include <stdio.h>

//This is the line causing issue in the conflict branch


int main(void) {
  int hEntities;
    printf("how many entities do you want ");
    scanf("%d",&hEntities); 
    int b = hEntities;
    int d;
    int entities;
    printf("write your entities");
    for (int a = 0; a<b; a++)
    {
    scanf("%d", &entities);
    d = d + entities;
    }
    printf("%d", d/hEntities);
	printf("hello")
  return 0;

}
