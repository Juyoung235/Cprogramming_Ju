//
// Created by 정주영 on 2022-09-26.
//
#import <stdio.h>

int main(){


//    printf("\n Answers of number 3\n");
//    int s = 42;
//    printf("the octal representation of 42 is: %o\n", s);
//    int s2 = 100;
//    printf("The ASCII representation of 100 is: %c \n", s2);
//    char s3 = 'd';
//    printf("the decimal representation of 'd' is: %d\n", s3);
//    char s4 = 's';
//    printf("The hexadecimal representation of 's' is: %x\n", s4);

//    printf("Size of char: %d\n", (int) sizeof(char));
//    printf("Size of pointer of char: %d\n", (int) sizeof(char *));
//    printf("Size of short: %d\n", (int) sizeof(short));
//    printf("Size of int: %d\n", (int) sizeof(int));
//    printf("Size of long: %d\n", (int) sizeof(long));


//    printf("\n Example of Literals");
//    char x = 0x54;
//    printf("%c\n", x);
//    printf("%d\n", x);
//    printf("%x\n", x);
//
//    char x2 = 'T';
//    printf("%c\n", x2);
//    printf("%d\n", x2);
//    printf("%x\n", x2);
//
//    char x3 = 84;
//    printf("this is printing character: %c\n", x3);
//    printf("this is printing digit number: %d\n", x3);
//    printf("This is hexadecimal data: %x\n", x3);

    char y[5];
    y[0] = 0x54;
    y[1] = 0x41;
    y[2] = 0x43;
    y[3] = 0x4f;
    y[4] = 0x0; //null-terminated string
    printf("String: %s\n", y);
    printf("Null: %x\n", y[4]);

//    printf("first character: %c\n",y[0]);
//    printf("second character: %c\n",y[1]);
//    printf("third character: %c\n",y[2]);
//    printf("fourth character: %c\n",y[3]);
//


//    char * y2 = "TACO";
//    printf("String: %s\n", y2);
//    printf("Null: %x\n", y2[4]);
//
//    printf("hex of y2[0]: %x\n", y2[4]);
//    printf("character y2[0]: %c\n", y2[4]);
//    printf("size of pointer %d\n", (int)sizeof(y2));
//

    int * poof_youre_a_32bit_int = (int *) y;
    printf("As an int: %d\n", *poof_youre_a_32bit_int);
    printf("In hex: %x\n", *poof_youre_a_32bit_int);
    printf("Interpreted as a char pointer, still points to TACO: %s\n", (char *) poof_youre_a_32bit_int);

    printf("the hex value of a pointer y: %x\n",(int *)y);
    printf("The hex value of proo.. is pointing is: %x\n",poof_youre_a_32bit_int);
    printf("print %s\n", poof_youre_a_32bit_int);

    printf("first character: %c\n",poof_youre_a_32bit_int[0]);
    printf("second character: %c\n",poof_youre_a_32bit_int[1]);
    printf("third character: %c\n",poof_youre_a_32bit_int[2]);
    printf("fourth character: %c\n",poof_youre_a_32bit_int[3]);

    return (0);

}