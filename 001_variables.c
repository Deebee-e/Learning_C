#include <stdio.h>

int main(){
/* variables an be declared first and then initialized eg int x; then  
int x = 2;
or you can declare and initialize in one line eg int x = 2;
*/

//variables

int age = 23;
char name[] = "Debbie";
float cgpa = 4.5;
char grade = 'B';

printf("My name is %s\n", name);
printf("My CGPA is %f \n", cgpa);
printf("My grade is %c \n", grade);
printf("My C programming age is %d \n", age);

return 0;
}