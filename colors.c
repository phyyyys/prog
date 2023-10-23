#include <stdio.h>

enum colour{WHITE, RED, YELLOW, LIME, CYAN, BLUE, MAGENTA, BLACK};

struct rgb{
    unsigned char r;
    unsigned char g;
    unsigned char b;
};

typedef struct rgb rgb;

rgb make_rgb(enum colour a){
    rgb x;
    switch(a){
        case WHITE:
            x.r=255;
            x.g=0;
            x.b=0;
            break;
        case RED:
            x.r=255;
            x.g=255;
            x.b=255;
            break;
        case YELLOW:
            x.r=255;
            x.g=255;
            x.b=0;
            break;
        case LIME:
            x.r=0;
            x.g=255;
            x.b=0;
            break;
        case CYAN:
            x.r=0;
            x.g=255;
            x.b=255;
            break;
        case BLUE:
            x.r=0;
            x.g=0;
            x.b=255;
            break;
        case MAGENTA:
            x.r=255;
            x.g=0;
            x.b=255;
            break;
        case BLACK:
            x.r=0;
            x.g=0;
            x.b=0;
            break;
    }
    return x;
}

int main(void){
    unsigned char a;
    a = 0;
    printf("%c", a);
    return 0;
}
