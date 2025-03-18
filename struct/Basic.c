#include <stdio.h>
#include<string.h>

int main(){
    // structure means  creating your own data types
    // structures are like class , structure ek dabba he jisme aur int ke 3 dabbe hen
// structure me address arrays ke jese store hote hen
// which means ki address will only point to only the address of first elemnt of the array 
// which => structures me bhi contiguous memory allocation hota he

// Arrays => multiple attributes of same data type
// Structures => multiple attributes of different data type
struct pokemon{//creation
    int hp;
    int speed ;
    int attack;
    char tier;
    char name[22];
}b;
struct pokemon pikachu;
// taking input
printf("Enter attack of pikachu");
scanf("%d",&pikachu.attack);
// pikachu.attack=60;
pikachu.hp = 50 ; 
pikachu.speed = 100;
pikachu.tier='A';

printf("%d\n",pikachu.attack);
printf("%d\n",pikachu.tier);

struct pokemon charizard;//declaration
//initialisation :
charizard.attack=130;
charizard.hp = 80 ; 
charizard.speed = 80;
charizard.tier='S';
strcpy(charizard.name,"Blastors");

printf("%d\n",charizard.hp);

printf("%c\n",charizard.tier);


struct time {
    int hr;
    int min;
    int sec;
}t;
struct time *pt;
pt = &t ;

// with reference to the above declarations which of the following refers to seconds correctly;
//pt->sec;//wrong
(*pt).sec;//right
t.sec;//right
//time.sec;//wrong
pt->sec ;//correct;


// Features of structures 
// Assigning the value of one structure variable to another of the same type
//struct pokemon b;
/*
b.attack = charizard.attack;
b.hp = charizard.hp;
b.speed = charizard.speed;
b.tier = charizard.tier;
strcpy(b.name,charizard.name);
*/
b=charizard;
b.attack = 200;// here a deep copy has been created
//now if you change the value of b the value of a will not change
// unlike in shallow copy where if you would have changed the value of b the value of a would have changed too
//string me iss tarike se shallow copy hoti he
//par strcpy use karke deepcopy banai ja sakti he

printf("%d\n",b.attack);
printf("%d\n",charizard.attack);
printf("%d\n",b.hp);
printf("%d\n",b.speed);
printf("%c\n",b.tier);
printf("%s\n",b.name);
    return 0 ;
}