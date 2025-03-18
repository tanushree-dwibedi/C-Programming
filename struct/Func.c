#include <stdio.h>
#include <string.h>
//you must globally declare a function in order to access it globally
//Global Declaration - to declare a structure outside main funcition
//in structures function me pass by value hota he pass by reference nahi


typedef struct pokemon{//creation
    int hp;
    int speed ;
    int attack;
    char tier;
    char name[22];
}pokemon;

void fun(pokemon p){
    printf("%d",p.hp);
}
void change(pokemon p){//this is a copy of pikachu
p.hp =70 ;
p.attack =60;
p.speed =110;
return;
}

typedef struct student
{
    int rno;
    char name[20];
    char dept[20];
    char course[30];
    int yearofJoining;
}student;

void check(student s1 , student s2){
   strcpy(s1.dept, "scince") ;
    strcpy(s2.dept, "scince") ;
    if(strcmp(s1.dept, s2.dept)==0){
        printf("True");
    }
    else{
        printf("Falsi");
    }
}

int main(){
    /* you can not call a user defined datatype outside the main function
typedef struct pokemon{//creation
    int hp;
    int speed ;
    int attack;
    char tier;
    char name[22];
}pokemon;
*/
pokemon pikachu;
pikachu.hp=60;
pikachu.attack =50;
pikachu.speed =100;
printf("%d\n",pikachu.hp);
printf("%d\n",pikachu.attack);
printf("%d\n",pikachu.speed);
change(pikachu);
printf("%d\n",pikachu.hp);
printf("%d\n",pikachu.attack);
printf("%d\n",pikachu.speed);
student s1 ,s2;
check(s1,s2);
return 0 ;
}