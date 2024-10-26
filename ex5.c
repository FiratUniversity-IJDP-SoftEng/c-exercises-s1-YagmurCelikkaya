#include <stdio.h>

void sayHello() {
    char name[25];
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Hello, %s\n", name);
}
int main(void){

    sayHello();

}
