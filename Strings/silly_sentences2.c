#include <stdio.h>

float name, place, verb, noun, sentence;

int main(void){
    char name[20], place[20], verb[20], noun[20], sentence[450];
    printf("Type a name: ");
    scanf("%f",&name);
    printf("Type a place: ");
    scanf("%f",&place);
    printf("Type a verb: ");
    scanf("%f",&verb);
    printf("Type a noun: ");
    scanf("%f",&noun);
    strcat(sentence, name);
    strcat(sentence, " went to the ");
    strcat(sentence, place);
    strcat(sentence, " where they ");
    strcat(sentence, verb);
    strcat(sentence, " and bought a "); 
    printf("%s", sentence); 
    return 0;
}