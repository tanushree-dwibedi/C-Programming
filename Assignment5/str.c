// C program to illustrate fgets()
#include <stdio.h>
#define MAX 15

int main()
{
    // defining buffer
    char buf[MAX];
printf("Enter a string : ");
//scanf("%s",buf);//takes only one word as input 
scanf("%[^\n]s",buf);

  //  gets(buf);//takes string input 
    printf("string is: %s\n", buf);
    int size = 0 ;
    int k = 0 ;
  while(buf[k]!='\0')  {
    size++;
    k++;
  }

printf("The size is : %d \n",size);
for(int i = 0 ,j = size-1;i<=j;i++,j--){
    char temp = buf[i];
    buf[i]=buf[j];
    buf[j]=temp;
}

    printf("The reversedd string is %s : ", buf);// prints next line automatically 
// puts(buf);

    return 0;
}