#include <stdio.h>
#include <string.h>



typedef struct pokemon{//creation
    int hp;
    int speed ;
    int attack;
    char tier;
    char name[22];
}pokemon;

typedef struct person
{
    int age;
    float weight;
}person;

void change(pokemon* p){
    //(*x).something = x->something
    (*p).hp = 70 ; 
    (*p).attack =80 ;
     (*p).speed = 70 ; 
    (*p).tier =80 ;
    strcpy((*p).name,"Raichu");

p->hp = 444;
p->attack =900;
p->speed = 888;
p->tier ='s';
  strcpy(p->name,"Raiu");

    return;
}

int main(){
  // pokemon pikachu= { "Pikachu",60 , 'A', 70 , 100 };//this will generate an error
//order matters
//pokemon pikachu= {60 , 70 , 100 };//this is also correct
pokemon pikachu= {60 , 70 , 100 , 'A', "Pikachu"};
/*this is the same as above;
pikachu.hp =60 ;
pikachu.attack =70 ;
pikachu.speed = 100 ;
pikachu.tier = 'A';
strcpy(pikachu.name,"Pikachu");
*/

//int *x = &pikachu;
pokemon *x = &pikachu;

/*
printf("%p\n",x);
printf("%p\n",x->hp);
printf("%p\n",x->attack);
printf("%p\n",x->speed);
printf("%p\n",x->tier);
printf("%p\n",x->name);
*/ 
//these 2 are not the same thing 
printf("%p\n",x);
printf("%p\n",&pikachu.hp);
printf("%p\n",&pikachu.attack);
printf("%p\n",&pikachu.speed);
printf("%p\n",&pikachu.tier);
printf("%p\n",pikachu.name);// there is no need to use & in case of pointers

printf("%d\n",x);
printf("%d\n",pikachu.hp);
printf("%d\n",pikachu.attack);
printf("%d\n",pikachu.speed);
printf("%c\n",pikachu.tier);
printf("%s\n",pikachu.name);

change(&pikachu);

printf("%d\n",x);
printf("%d\n",pikachu.hp);
printf("%d\n",pikachu.attack);
printf("%d\n",pikachu.speed);
printf("%c\n",pikachu.tier);
printf("%s\n",pikachu.name);

// int x ;
//  int* p = &x ;
//  *p = 7 ;

(*x).hp= 70 ;
(*x).attack =120;
 printf("%d",pikachu.hp);




    return 0 ;
    
}