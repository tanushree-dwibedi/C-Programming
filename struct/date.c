#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    typedef struct date
    {
        int date ;
        int month ;
        int year ;
    }date;
    date a,b;
    a.date=5;
    a.month =12 ;
    a.year =1999;

    b.date=5;
    b.month =12 ;
    b.year =1909;

bool flag = true;
if(a.date!=b.date) flag = false;
if(a.month!=b.month) flag = false;
if(a.year!=b.year) flag= false;

//if(a==b) printf( "The dates are same");//this will generate an error
//if(a.date==b.date) printf( "The dates are same");//this is correct

if(flag==true){
    printf( "The dates are same");
}
else{
    printf("The dates are different ");
}

date c ;
 c = a; 
 if(a.year==c.year)  printf( "The dates are same");

    return 0 ;
}
