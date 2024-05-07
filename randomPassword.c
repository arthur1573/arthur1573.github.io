

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>







// Function to randomly generates password
// of length N
void randomPasswordGeneration(int N)
{
    // Initialize counter
    int i = 0;

    int randomizer = 0;

    // Seed the random-number generator
    // with current time so that the
    // numbers will be different every time
    srand((unsigned int)(time(NULL)));

    // Array of numbers
    char numbers[] = "23456789";
    // romove some number i do not like: 1,0



    // Array of small alphabets
    char letter[] = "abcdefghjkmnqprstuvwyzx";
    // remove some letter i do not like: i,l,o





    // Array of capital alphabets
    char LETTER[] = "ABCDEFGHJKLMNQPRSTUYWVZX";
    // remove some LETTER i do not like: O,I




    // Array of all the special symbols
    char symbols[] = "!@#$&*";

    // Stores the random password
    char password[N];

    // To select the randomizer
    // inside the loop
    randomizer = rand() % 4;

    // Iterate over the range [0, N]
    for (i = 0; i < N; i++) {

        if (randomizer == 1) {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 2) {
            password[i] = symbols[rand() % 8];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 3) {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else {
            password[i] = letter[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
    }
}








// Driver Code
int main()
{
    // Length of the password to
    // be generated
    int N = 16;

    // Function Call
    randomPasswordGeneration(N);
    printf("\n");


    return 0;
}






// how to run it:
// gcc -o rp randompPassword.c
// sudo cp rp /usr/bin
// rp
// done













