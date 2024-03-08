#include<stdio.h>




int main(){
    int age;
char phone_no[20];
char first_name[20];
char second_name[20];
printf("Enter first name\n");
scanf("%s",&first_name);
printf("Enter second name\n");
scanf("%s",&second_name);
printf("Enter age\n");
scanf("%d",& age);
printf("Enter phone_no\n");
scanf("%s",&phone_no);

printf("Good morning %s\n", first_name);
printf("first_name: %s\n", first_name);
printf("second_name: %s\n", second_name);
printf("phone number: %s\n", phone_no);
printf ("Age: %d\n", age);
return 0;


}
