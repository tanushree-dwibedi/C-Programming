// Take input and print reverse
#include <stdio.h>
#include <string.h>

int main(){
char str[50];
scanf("%[^\n]s",str);
puts(str);
printf("%s",str);
int k = 0 ;
char newstr[50];
int size = 0 ;
// size of string
while(str[k]!='\0'){
size++;
k++;
}
printf("%d \n",size);
// swap
for(int i =0 ,j=size-1;i<j;i++,j-- ){
int temp = str[i];
str[i]=str[j];
str[j]=temp;
}

puts(str);
    return 0 ;
}