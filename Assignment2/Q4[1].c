#include <stdio.h>

int leap(int year) {
    if (year % 4 != 0)
        return 0;
    else if (year % 100 != 0)
        return 1;
    else if (year % 400 != 0)
        return 0;
    else
        return 1;
}


int main() {
    int month, day, year , leapans;
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    leapans = leap(year);
    switch (month)
    {
        case 1: printf("Enter day (1-31): ");
           scanf("%d", &day);  
           printf("The day number is %d ",day);
        break ; 
       
        case 2:
        if (leapans){
            printf("Enter day (1-29): ");
            scanf("%d", &day);
            printf("The day number is %d ", 31+day);
        }
        else{
            printf("Enter day (1-28): ");
            scanf("%d", &day);
            printf("The day number is %d ", 31+day);
        }  
        break ;
        case 3:
         printf("Enter day (1-31): ");
         scanf("%d", &day);
        if (leapans){
            printf("The day number is %d ", 31+29+day);
        }
        else{
            printf("The day number is %d ", 31+28+day);
        } 
        break;
        case 4:
         printf("Enter day (1-30): ");
         scanf("%d", &day);
        if (leapans){
            printf("The day number is %d ", 31+29+31+day);
        }
        else{
            printf("The day number is %d ", 31+28+31+day);
        } 
        break;
        case 5:
         printf("Enter day (1-31): ");
         scanf("%d", &day);
        if (leapans){
            printf("The day number is %d ", 31+29+31+30+day);
        }
        else{
            printf("The day number is %d ", 31+28+31+30+day);
        } 
        break;
        case 6:
         printf("Enter day (1-30): ");
         scanf("%d", &day);
        if (leapans){
            printf("The day number is %d ", 31+29+31+30+31+day);
        }
        else{
            printf("The day number is %d ", 31+28+31+30+31+day);
        } 
        break;
        case 7:
         printf("Enter day (1-31): ");
         scanf("%d", &day);
        if (leapans){
            printf("The day number is %d ", 31+29+31+30+31+30+day);
        }
        else{
            printf("The day number is %d ", 31+28+31+30+31+30+day);
        } 
        break;
        case 8:
         printf("Enter day (1-31): ");
         scanf("%d", &day);
        if (leapans){
            printf("The day number is %d ", 31+29+31+30+31+30+31+day);
        }
        else{
            printf("The day number is %d ", 31+28+31+30+31+30+31+day);
        } 
        break;
        case 9:
         printf("Enter day (1-30): ");
         scanf("%d", &day);
        if (leapans){
            printf("The day number is %d ", 31+29+31+30+31+30+31+31+day);
        }
        else{
            printf("The day number is %d ", 31+28+31+30+31+30+31+31+day);
        } 
        break;
        case 10:
         printf("Enter day (1-31): ");
         scanf("%d", &day);
        if (leapans){
            printf("The day number is %d ", 31+29+31+30+31+30+31+31+30+day);
        }
        else{
            printf("The day number is %d ", 31+28+31+30+31+30+31+31+30+day);
        } 
        break;
        case 11:
         printf("Enter day (1-30): ");
         scanf("%d", &day);
        if (leapans){
            printf("The day number is %d ", 31+29+31+30+31+30+31+31+30+31+day);
        }
        else{
            printf("The day number is %d ", 31+28+31+30+31+30+31+31+30+31+day);
        } 
        break;
        case 12:
          printf("Enter day (1-31): ");
           scanf("%d", &day);
            if (leapans){
            printf("The day number is %d ", 31+29+31+30+31+30+31+31+30+31+30+day);
        }
        else{
            printf("The day number is %d ", 31+28+31+30+31+30+31+31+30+31+30+day);
        } 
          break; 
    }
      
   

    return 0;
}