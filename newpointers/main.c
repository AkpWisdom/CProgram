#include <stdio.h>
 

 void change (int *x){
   *x =20;
 }  
 int main(){
 
    int num =5;
    change(&num);
    
    printf("The  value of num %d\n", num);



    

    return 0;
 } 