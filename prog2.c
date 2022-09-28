//
// Created by 정주영 on 2022-09-26.
//
#import <stdio.h>

int main() {
    const char *fname = "../asdf.txt";
    FILE *fpw = fopen(fname, "w+");
    FILE *fpr = fopen(fname, "r+");
    fprintf(fpw, "%s %s %s %s", "I want to talk about my name,", "I", "am", "Juyoung");
//    fflush(fpw);
//    printf("%s", fpr);
//    fclose(fpw);
//    fclose(fpr);


    char buffer[50] = {0x00};
    int a = 123;
    sprintf(buffer, "Testing prog2.c %d", a);
    printf("%s", buffer);

    return(0);
}