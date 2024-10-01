#include <stdio.h>
#include <stdbool.h>

int age = 4;
bool vote = false;
int main(void){
   if (age >= 18 && vote != false){
        printf("You are old enough to vote!\n");
   }else if (age >= 16){
        printf("You are old enough to drive!\n");
   }else if (age == 15){
        printf("You are old enough to get your learners permit!\n");
   }else if (age == 5){
        printf("You are old enough to go to school!\n");

   }else{
    printf("Sorry, your not old enough\n");
   };
    return 0;
}