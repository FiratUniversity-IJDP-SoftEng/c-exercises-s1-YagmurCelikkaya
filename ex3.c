#include <stdio.h>
#include <string.h>

int main() {
    char pet[10];
    while(1){

    printf("Do you have a cat or a dog?\n");
    scanf("%s", pet);

    if (strcmp(pet, "cat") == 0) {
        printf("Meow!\n");
        break;

    } else if (strcmp(pet, "dog") == 0) {
        printf("Woof!\n");
        break;

    } else {
        printf("Please write 'cat' or 'dog'.\n");

    }
    }

 
}

