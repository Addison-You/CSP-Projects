#include <stdio.h> 

int main (void) {
        char name[30];
     fgets(name, sizeof(name), stdin);
    printf ("Hello, %s", name");

    return 0;
}