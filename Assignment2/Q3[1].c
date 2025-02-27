#include<stdio.h>
int main(){
    int pnum , odoreading;
    float numgram , avg ; 
   printf("(1) Carbon monoxide \n");
   printf("(2) Hydrocarbons \n");
   printf("(3) Nitrogen oxides \n");
   printf("(4) Nonmethane hydrocarbons \n");
   printf("Enter pollutant number: ");
   scanf("%d",&pnum);
   printf("Enter number of grams emitted per mile:");
   scanf("%f",&numgram);
   printf("Enter odometer reading:");
   scanf("%d",&odoreading);
   switch (pnum)
   {
   case 1 :
    if(odoreading<=50000){
        if(numgram > 3.4){
            printf("Emissions exceed permitted level of 3.4 grams/mile");
        }
        else{
           printf("Emissions under the permitted level of 3.4 grams/mile"); 
        }
    }
    else{

        if(((odoreading*numgram) - ((50000*3.4) + ((odoreading - 50000)*4.2)))>0 ){
            printf("Emissions exceed permitted level of 4.2 grams/mile");
        }
        else{
           printf("Emissions under the permitted level of 4.2 grams/mile"); 
        }
    }
    break;
    case 2 :
    if(odoreading<=50000){
        if(numgram > 0.31){
            printf("Emissions exceed permitted level of 0.31 grams/mile");
        }
        else{
           printf("Emissions under the permitted level of 0.31 grams/mile"); 
        }
    }
    else{
        if(((odoreading*numgram) - ((50000*0.31) + ((odoreading - 50000)*0.39)))>0 ){
            printf("Emissions exceed permitted level of 0.39 grams/mile");
        }
        else{
           printf("Emissions under the permitted level of 0.39 grams/mile"); 
        }
    }
    break;
    case 3 :
    if(odoreading<=50000){
        if(numgram > 0.4){
            printf("Emissions exceed permitted level of 0.4 grams/mile");
        }
        else{
           printf("Emissions under the permitted level of 0.4 grams/mile"); 
        }
    }
    else{
        if(((odoreading*numgram) - ((50000*0.4) + ((odoreading - 50000)*0.5)))>0 ){
            printf("Emissions exceed permitted level of 0.5 grams/mile");
        }
        else{
           printf("Emissions under the permitted level of 0.5 grams/mile"); 
        }
    }
    break;
    case 4 :
    if(odoreading<=50000){
        if(numgram > 0.25){
            printf("Emissions exceed permitted level of 0.25 grams/mile");
        }
        else{
           printf("Emissions under the permitted level of 0.25 grams/mile"); 
        }
    }
    else{
        if(((odoreading*numgram) - ((50000*0.25) + ((odoreading - 50000)*0.31)))>0 ){
            printf("Emissions exceed permitted level of 0.31 grams/mile");
        }
        else{
           printf("Emissions under the permitted level of 0.31 grams/mile"); 
        }
    }
    break;
   
   }

return 0 ;
}