#include <stdio.h>
#include <string.h>

int main(){


typedef struct pokemon{//creation
    int hp;
    int speed ;
    int attack;
    char tier;
    char name[20];
}pokemon;

pokemon arr[10];// arr[0],arr[1],...arr[9];
arr[0].attack = 50 ;
arr[0].hp=100;
arr[0].speed = 30 ; 
arr[0].tier = 'A';
strcpy(arr[0].name , "Mewtwo");
arr[1].attack = 150 ;
arr[1].hp=1020;
arr[1].speed = 330 ; 
arr[1].tier = 'B';
strcpy(arr[1].name , "Pikachu");
arr[2].attack = 350 ;
arr[2].hp=1002;
arr[2].speed = 302 ; 
arr[2].tier = 'D';
strcpy(arr[2].name , "charizard");
for(int i =0 ;i<3;i++){
    printf("%s\n",arr[i].name);
    printf("%d\n",arr[i].attack);
     printf("%d\n",arr[i].hp);
      printf("%d\n",arr[i].speed);
       printf("%c\n",arr[i].tier);
}


typedef struct cricketer{//creation
    char fname[20];
     char lname[20];
    int age;
    int noofmatch;
    float avgruns;
}cricketer;
cricketer crr[20];
for(int i = 0 ; i<3 ; i++){
   printf("Enter the name : ");
   scanf(" %[^\n]s",crr[i].fname);
     scanf(" %[^\n]s",crr[i].lname);
      printf("Enter the age : ");
   scanf("%d",&crr[i].age);
      printf("Enter the no of matches : ");
   scanf("%d",&crr[i].noofmatch);
      printf("Enter the average runs : ");
   scanf("%f",&crr[i].avgruns);
   
}
for(int i =0 ;i<3;i++){
    printf("%s\n",crr[i].fname);
     printf("%s\n",crr[i].lname);
    printf("%d\n",crr[i].age);
     printf("%d\n",crr[i].noofmatch);
      printf("%f\n",crr[i].avgruns);
     
}



return 0 ;
}

