#include <stdio.h>
#include <stdio.h>

int main(void){
    char name[20], place[20], verb[20], noun[20], sentence[500];
    printf("Type a name: ");
    fgets(name, sizeof(name), stdin);
    printf("Type a place: ");
    fgets(place, sizeof(place), stdin);
    printf("Type a verb: ");
    fgets(verb, sizeof(verb), stdin);
    printf("Type a noun: ");
    fgets(noun, sizeof(noun), stdin);
    strcat(sentence, name);
    stract(sentence, " went to the ");
    strcat(sentence, place);
    stract(sentence, " where they ");
    strcat(sentence, verb);
    stract(sentence, " and bought a "); 
    printf("%s went to the %s where they %s and bought a %s", name, place, verb, noun); 
    return 0;
}