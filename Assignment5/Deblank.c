#include <stdio.h>
#include <string.h>

void deblank(char str[],char newstr[]){
 int i = 0,j=0 ;
while(str[i]!='\0'){
if(str[i]!=' '){
newstr[j]=str[i];
j++;
}
newstr[j] = '\0'; // Add null terminator at the end
i++;
}
printf("The string without blank is : %s ",newstr);
}

int main(){
   
// int n ;
char str[100];
//  printf("Enter the size of the string :");
// scanf("%d",&n);
char newstr[100];
printf("Enter the string ");
scanf(" %[^\n]s",str);
deblank(str,newstr);
   return 0 ;
}