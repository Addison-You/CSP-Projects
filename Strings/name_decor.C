#include <stdio.h>
#include <stdio.h>

int main(void){
    char name[20], sentence[20];
    printf("Type a name: ");
    strcat(name, sizeof(name), stdin);
    printf("<<< %s >>>", name); 
}