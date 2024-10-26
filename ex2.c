#include <stdio.h>
int main(void) {
  int a = get_int("Please enter your age: ");
    int counter = a;
    while (counter > 0)
    {
        printf("Happy Birthday!\n");
        counter = counter -1;
    }
}

