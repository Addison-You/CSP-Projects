#include <stdio.h>
#include <cstring>

int main(void){
    char name[20], sentence[20];
    printf("Type a name: ");
    scanf("%s", &name);
    strcat(sentence, name);
    printf("<<< %s >>>", name); 
    return 0;
}