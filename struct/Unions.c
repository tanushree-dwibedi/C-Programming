#include <stdio.h>
#include <string.h>
//union me only one member can be accessed at a time;
typedef union pokemon{
    int hp;
    int speed ;
    int attack;
    char tier;
    char name[22];
}pokemon;
//same thing
/*
typedef struct pokemon{
    int hp;
    int speed ;
    int attack;
    char tier;
    char name[22];
}pokemon;
*/
int main(){
pokemon pikachu;
pikachu.hp =60 ;
pikachu.attack =70 ;
pikachu.speed = 100 ;
pikachu.tier = 'A';
//strcpy(pikachu.name,"Pikachu");



printf("%d\n",pikachu.hp);
printf("%d\n",pikachu.attack);
printf("%d\n",pikachu.speed);
printf("%c\n",pikachu.tier);
printf("%s\n",pikachu.name);

//union me only one member can be accessed at a time
//memory me jo sabse largest value hogi uske jitna space alote hoga
//and if we initialize all the values 
// then only the last initialized value will be accessed

    return 0 ;
}