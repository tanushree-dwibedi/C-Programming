#include <stdio.h>
#include <string.h>
int main() {
    //kisi bhi string yo character array ka agar address ham print karte hen to wo array ke ya string ke 1st element ko point karta he aur uska hin address print hota he

    char str[] = "Collage Wallah";
    char* ptr = str;//ptr now points to str[0]  //address
    printf("%p\n",&str[0]);
    printf("%p\n",str);
int i =0 ;
    while (*ptr!='\0')
    {
        printf("%c",*ptr);//value
        ptr++;
        // i++;
    }
    
printf("\n");
    // Another way of initialising a strings
    char *ptr2 = "Physics wallah";
    // characters pointer can also be used to store address of a string
    // such direct inintialisation using pointers results in a read-only memory allocation of character arrays and hence, causes undefined behaviour when we try to change the individual characters.
    // ptr2[0]='m';//this is not allowed

    // printf("%c\n",ptr2);
    // ptr2++;
    // printf("%c\n",ptr2);
    printf("%s\n",ptr2);
   

    // *** v.v.important
    //in notrmal initialization, we can modify individual characters but not the entire string
    // Opposite (vs)
    //pointer initialization , we cna modify entire string but not the individual characters

char str2[]="physics wlale";
printf("%s\n",str2);
// str = "collage wale";//not allowed this will generate an error

ptr2 = "collage walla ";
printf("%s\n",ptr2);//in case of pointers entire modification of strings is allowed
//is case me actually original string modify nahi hoti he 
//balki pointer uthke pehele string se dusre string pe aa jata he
// aur peheli string viloopt (vanish) ho jati he
 return 0;

}
