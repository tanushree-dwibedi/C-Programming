// nesting of struct can be used when a superieor pokemon has an extra attribute
// for example legendry pokemon > pokemon , supercar >car
// all attributes of pokemon +something extra


//struct is a user defined data type so it can be in capital
// other nonuser defined datatypes like int ,float are in small only
#include <stdio.h>
#include <string.h>
int main(){

struct pokemon
{
    int hp;
    int attack;
    int speed; 
};
struct legendrypokemon{//class
    int specialattack;
    struct pokemon x;//object
};

struct Person
{
    char name[50];
    int salary;
    int age;
}a,b;

strcpy(a.name,"Hello");
printf("%s",a.name);
b.age=8;
printf("%d",b.age);


typedef struct people
{
    int height ;
    int age;
    char sex; 
    char name[15];
}people ;
typedef struct specialpeople{//class
    people normal ;
    char ability[10];
}specialpeople;
typedef struct godpeople
{
   specialpeople legend;
   int special;
}godpeople;

godpeople arceus;
arceus.special= 90;
strcpy(arceus.legend.ability,"Turn around time");
arceus.legend.normal.age = 500;


specialpeople manto;
strcpy(manto.ability,"Pressure");
manto.normal.height=125;
manto.normal.age = 3;
strcpy(manto.normal.name,"Pressure");
manto.normal.sex=125;


    return 0;
}




















/*
this code is wrong
struct emp{
int code ;
 struct emp e;
 }
// * remember 1 thing ki ek structure ke andar dusra structure aa zaroor sakta he
this is the right code
struct emp{
int code;
};
struct emp e;


OBJECTS AND CLASSES
pokemon - is a class
 pikachu , charizard - are objects of class pokemon
 objects me kuch kuch properties common hoti hen
 aur ek class ke andar dusri class bhi exist kar sakti he 

 
*/