// ternary is the same as if else
// whereas switch is a variation of if else
#include <stdio.h>

int main(){
    
int n  = 3;

switch ( n)
{// u dont have to write the case numbers in order
case 1:
printf("Monday");
    break;
case 3:
printf("Wednesday");
    break;
case 2:
printf("Tuesday");
    break;
case 4:
printf("Thursday");
    break;
case 5:
printf("Friday");
    break;
case 6:
printf("Saturday");
    break;
case 7:
printf("Sunday");
    break;

default:
printf("Invalid Number");
    break;//no need to write break here
}
printf("\n");

char x;
scanf(" %c",&x);
int a = 4 ,  b =2;
switch (x)
{
   case '+':
   printf("%d", a+b );
    break;
    case '-':
    printf("%d", a-b );
     break;
     case '*':
   printf("%d", a*b );
    break;
    case '/':
   printf("%f", (float)a/b );
    break;
    case '%':
   printf("%d", a%b );
    break;
//default is not necessary
    default:
    printf("Invalid operator");
        break;//no need to write break here
}



}