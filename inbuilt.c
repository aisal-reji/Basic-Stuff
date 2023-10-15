#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

int main() {
    // Input/Output Functions
    char name[50];
    printf("Enter your name: ");
    gets(name);
    printf("Hello, %s!\n", name);

    // Memory Allocation Functions
    char* dynStr = (char*)malloc(20 * sizeof(char));
    if (dynStr != NULL) {
        strcpy(dynStr, "Dynamic String");
        free(dynStr);
    }

    // String Functions
    char text[] = "This is a sample text.";
    char search[] = "sample";
    if (strstr(text, search) != NULL) {
        printf("'%s' found in the text.\n", search);
    }

    // Character Functions
    char character = 'A';
    if (isalpha(character)) {
        printf("%c is an alphabet character.\n", character);
    }

    // Date and Time Functions
    time_t currentTime;
    struct tm* timeInfo;
    time(&currentTime);
    timeInfo = localtime(&currentTime);
    printf("Current date and time: %s", asctime(timeInfo));

    // Mathematical Functions
    double x = 2.0;
    double result = sqrt(x);//paw()
    printf("Square root of %.2f is %.2f\n", x, result);

    // File I/O Functions
    FILE* file = fopen("example.txt", "w");
    if (file != NULL) {
        fprintf(file, "This is a sample text.\n");
        fclose(file);
    }

    // Random Number Generation
    srand((unsigned int)time(NULL));
    int randomNum = rand() % 100;
    printf("Random number between 0 and 99: %d\n", randomNum);

    return 0;
}
