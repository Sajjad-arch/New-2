#include <stdio.h>

int main(void)
{
    printf("We are still coding");
    printf("We are printing the integer number %d here. \n", 4 );
    printf("We are printing the floating point number %f here. \n", 4.7 );
    printf("We are printing the floating point number %.3f up to 3 degits here. \n", 4.7 );
    printf("We are printing the  floating point number %f through integer format specifier and it is %d.\n", 4.7,4.7);
    printf("If you see carefully,you have been using \\n and it is called an escape sequence. These are special commands include: \n");
    printf("Such similar commands includes: \\n, \\t, \\b and so on\n");
    printf("If you want to print a character like \'A\', just write using %c and done.",'A');

    return 0;

}
