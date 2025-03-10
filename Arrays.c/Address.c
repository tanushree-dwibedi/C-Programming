#include<stdio.h>
//array me contiguous / continuous memory allocation hota he ;
int main(){
    //each int takes 4 bytes in memory 
    //1byte = 8 bits;
    //each double takes 8 bytes in memory 
    //each char takes 1 byte of space in memory
    printf("int");
    int ar[]= { 22, 33 ,4, 43, 44};
    for(int i = 0 ; i< sizeof(ar)/sizeof(ar[1]);i++){
        printf("%d \n ",&ar[i]);
    }
    printf("char");
   char ch[]= { 'a', 'A' ,'3', '*'};
    for(int i = 0 ; i< sizeof(ch)/sizeof(ch[1]);i++){
        printf("%d \n ",&ch[i]);
    }
//     printf("Double");
// double ardouble[]= { 22.3, 33.2 ,4.4, 43.4, 44.4};
//     for(int i = 0 ; i< sizeof(ardouble)/sizeof(ardouble[1]);i++){
//         printf("%lf \n ",&ardouble[i]);
//     }
//     printf("float");
// float arfloat[]= { 22.3, 33.2 ,4.4, 43.4, 44.4};
//     for(int i = 0 ; i< sizeof(arfloat)/sizeof(arfloat[1]);i++){
//         printf("%f \n ",&arfloat[i]);
//     }

    return 0 ; 
}