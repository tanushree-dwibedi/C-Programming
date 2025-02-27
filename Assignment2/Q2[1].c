#include<stdio.h>
#include<stdlib.h>
float primaryKneading(float time , char type){
    printf("Now it is Primary Kneading phase : ");
    if(type == 'W'){
       time = time + 15 ;
    }
    else{
       time = time + 20 ;
    }

return time;
}
float primaryRising(float time , char type){
    printf("Now it is Primary Rising phase : ");
    if(type == 'W'){
       time = time + 60 ;
    }
    else{
       time = time + 60 ;
    }
    return time;
}
float secondaryKneading(float time , char type){
    printf("Now it is Secondary Kneading phase : ");
    if(type == 'W'){
       time = time + 18 ;
    }
    else{
       time = time + 33 ;
    }
    return time;
}
float secondaryRising(float time , char type){
    printf("Now it is Secondary Rising phase : ");
    if(type == 'W'){
       time = time + 20 ;
    }
    else{
       time = time + 30 ;
    }
    return time;
}
float loafShaping(float time , char type){
    printf("Now it is Loaf shaping phase : ");
    if(type == 'W'){
       time = time + 0.033 ;
    }
    else{
       time = time + 0.033 ;
    }
    return time;
    
}
float finalRising(float time , char type){
    printf("Now it is Final Rising phase : ");
    if(type == 'W'){
       time = time + 75 ;
    }
    else{
       time = time + 75 ;
    }
    return time;
    
}
float Baking(float time , char type){
    printf("Now it is Baking phase : ");
    if(type == 'W'){
       time = time + 45 ;
    }
    else{
       time = time + 35 ;
    }
    return time;
}
float cooling(float time , char type){
    printf("Now it is Cooling phase : ");
    if(type == 'W'){
       time = time + 30 ;
    }
    else{
       time = time + 30 ;
    }
    return time;
    
}
int main(){
char type,loafSize,baking;
float time = 0;
printf("Enter the type of BREAD (W for white and S for sweet): ");
scanf("%c",&type);
fflush(stdin);
printf("You want Loaf size is double or not (Y or N): ");
scanf("%c",&loafSize);
fflush(stdin);
printf("You want baking is manual or not (Y or N): ");
scanf("%c",&baking);
if(loafSize == 'Y'){
   if(baking == 'N'){
    time = primaryKneading(time,type);
    printf("timestamp %f \n",time);
    time = primaryRising(time,type);
    printf("timestamp %f \n",time);
    time = secondaryKneading(time,type);
    printf("timestamp %f \n",time);
    time = secondaryRising(time,type);
    printf("timestamp %f \n",time);
    time = loafShaping(time,type);
    printf("timestamp %f \n",time);
    time = finalRising(time,type);
    printf("timestamp %f \n",time);
    time =  Baking(time,type) ;
    printf("timestamp %f \n",time);
    time = cooling(time,type);
    printf("timestamp %f \n",time);
    printf("Total time the bread in machine is %f",time);
   }
   else{
    time = primaryKneading(time,type);
    printf("timestamp %f \n",time);
    time = primaryRising(time,type);
    printf("timestamp %f \n",time);
    time = secondaryKneading(time,type);
    printf("timestamp %f \n",time);
    time = secondaryRising(time,type);
    printf("timestamp %f \n",time);
    time = loafShaping(time,type);
    printf("timestamp %f \n",time);
    printf("You have to remove the  dough and bake your bread manually");
    printf("Total time the bread in machine is %f",time);
   }
}
else{
    if(baking == 'N'){
     time = primaryKneading(time,type);
     printf("timestamp %f \n",time);
     time = primaryRising(time,type);
     printf("timestamp %f \n",time);
     time = secondaryKneading(time,type);
     printf("timestamp %f \n",time);
     time = secondaryRising(time,type);
     printf("timestamp %f \n",time);
     time = loafShaping(time,type);
     printf("timestamp %f \n",time);
     time = finalRising(time,type);
     printf("timestamp %f \n",time);
     time = Baking(time,type) ;
     printf("timestamp %f \n",time);
     time = cooling(time,type);
     printf("timestamp %f \n",time);
    printf("Total time the bread in machine is %f",time);
   }
   else{
    time = primaryKneading(time,type);
    printf("timestamp %f \n",time);
    time = primaryRising(time,type);
    printf("timestamp %f \n",time);
    time = secondaryKneading(time,type);
    printf("timestamp %f \n",time);
    time = secondaryRising(time,type);
    printf("timestamp %f \n",time);
    time = loafShaping(time,type);
    printf("timestamp %f \n",time);
    printf("You have to remove the  dough and bake your bread manually");
    printf("Total time the bread in machine is %f",time);
   }
}
    return 0 ;
}