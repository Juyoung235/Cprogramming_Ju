//
// Created by 정주영 on 2022-09-20.
//
#include <stdio.h>

int main() {
    const char* fname = "../prog1.txt";
    FILE* fp;
    fp = fopen( fname, "rw");

    int count = 0;

    if (fp == NULL){
        printf("Could not open files %s", fname);
    }

    int c = 0;
    char* comma = ",";
    while ( (c = fgetc(fp)) != EOF){
        if (c == *comma) count += 1;
    }
    printf("%d",count);
    fclose(fp);

}
