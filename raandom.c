#include <stdio.h>
#include <stdbool.h>

int age = 4;
bool vote = false;
int main(void){
   if (age >= 18 && vote != false){
        printf("You are old enough to vote!\n");

   }else{
    printf("Sorry, your not old enough\n");
   };
    return 0;
}