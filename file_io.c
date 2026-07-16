#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("sample.txt", "w");

    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "Hello, this is a File I/O example.");

    fclose(fp);

    printf("Data written successfully.\n");

    return 0;
}