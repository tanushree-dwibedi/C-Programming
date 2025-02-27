#include <stdio.h>
int ask(int heading){
printf("Enter the compass heading which is between 0 to 360 \n");
scanf("%d",&heading);
return heading ;
}
int main(){
int heading ;
heading = ask(heading);
if(heading < 0 && heading > 360){
    printf("Invalid input. Please enter heading on compass between o to 360");
    heading = ask(heading);
}
else{
    if (heading > 90 && heading <=270){
        //face south
        if (heading < 180 ){
            int turn = 180 - heading ;
            printf("You should face south and turn %d degree towards east and go.",turn);
        }
        else{
            int turn = 270 - heading ;
            if(heading == 270){
                printf("You should face south and turn 90 degree towards west and go.");
            }
           else if(heading = 180){
               printf("You should face south and turn 0 degree towards west and go.");
           }
           else{
            printf("You should face south and turn %d degree towards west and go.",turn);
           }
           
        }
    }
    else{
        if(heading > 270){
            int turn = 360 - heading ;
            printf("You should face north and turn %d degree towards west and go.",turn);
        }
        else{
            int turn = heading ;
            printf("You should face north and turn %d degree towards east and go.",turn);
        }

    }
}
    return 0 ; 
}