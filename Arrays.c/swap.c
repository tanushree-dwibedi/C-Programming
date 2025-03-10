#include<stdio.h>

int main(){
    int num[26],temp ;
    num[0]=100;
    num[25]=200;
    temp = num[25];
    num[25]=num[0];
    num[0]=temp;
    printf("\n %d %d ", num[0], num[25]);//200 100


    int sub[50],i;
    for( i = 0; i<=48 ; i++);
    {
        sub[i]=i;
        printf("\n%d",sub[i]);
    }

    //garbage value 
    int arr[4];
    printf("%d",arr[2]);

    int x ;
    printf("%d",x);


    // int j , a = 2 , b = 3 ;
    // int ar[2+3];
    // printf("Enter values : ");
    // for(j=0 ;j<a+b;j++ ){
        
    //     scanf("%d",&ar[i]);
    //     printf("%d \n ",ar[i]);
    // }

    int size ; 
    printf("Enter the size");
scanf("%d",&size);
int array[size];
for(int i = 1 ; i<=size ; i++){
    scanf("%d",&array[i]);
    printf("%d",array[i]);
}
    return 0 ;
}