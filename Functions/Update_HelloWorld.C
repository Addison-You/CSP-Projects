#include <stdio.h>
#include <cstring>

float name1, name2, name3, name4, name5, sentence;

int main(void){
    char name1[20], name2[20], name3[20], name4[20], name5[20], sentence[500];
    printf("What is the first name?");
    scanf("%s", &name1);
    printf("And the second?");
    scanf("%s", &name2); 
    printf("Third?");
    scanf("%s", &name3);
    printf("Fourth?");
    scanf("%s", &name4);
    printf("And the last one?");
    scanf("%s", &name5);
    strcat(sentence, "%s Wow! Alot, but man, all those pretty names!!");  
    printf("%s", sentence);
    return 0;
}