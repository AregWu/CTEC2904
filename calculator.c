#include <stdio.h>
#include <stdlib.h>

/*
* 
*/
int addd(int one,int two){
return one+two;
}
int divii(int one,int two){
return one/two;
}
int multii(int one,int two){
return one*two;
}
int subss(int one,int two){
return one-two;
}
int main(int argc, char** argv) {
int one=0, two=0, cho=0, result=0;

printf("\nWrite two numbers \n");
scanf("%d %d", &one, &two);

printf("Choose what to do \n");
printf("1 - Add numbers, 2 - Divide numbers, 3 - Multiply numbers, 4 - Subtract numbers \n");
scanf("%d", &cho);


switch(cho){
case 1: 
result = addd(one, two);
break;

case 2:
result = divii(one, two);
break;

case 3:
result = multii(one, two); 
break;

case 4:
result = subss(one, two); 
break;


}



printf("\n Your result is: %d\n", result);

return (EXIT_SUCCESS);
}

