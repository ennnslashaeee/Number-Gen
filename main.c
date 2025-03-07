#include <stdio.h>
#include <stdlib.h>

#define FILENAME "counter.txt"

int main() {
    FILE *file;
    int number = 0;

    file = fopen(FILENAME, "r");
    if (file) {
        fscanf(file, "%d", &number);
        fclose(file);
    }

    number++;

    file = fopen(FILENAME, "w");
    if (file) {
        fprintf(file, "%04d", number); 
        fclose(file);
    } else {
        perror("Error opening file for writing");
        return 1;
    }

    printf("%04d\n", number);

    return 0;
}
