#include <stdio.h>
int main(void) {
    int guess;
    int rightAnswer = 3;

    printf("Guess a number between 1 and 5 : ");
    scanf("%d", &guess);
    if(guess == rightAnswer) {
        printf("It is correct.\n");
    } else {
        printf("Your guess is wrong.");

    }
}
