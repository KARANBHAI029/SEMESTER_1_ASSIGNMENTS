#include <stdio.h>

typedef enum {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE,
    PURPLE,
    BLACK,
    WHITE
} Color;

int main() {
    Color color = RED;
    
    switch(color) {
        case RED:
            printf("The hexadecimal code for RED is #FF0000\n");
            break;
        case GREEN:
            printf("The hexadecimal code for GREEN is #00FF00\n");
            break;
        case BLUE:
            printf("The hexadecimal code for BLUE is #0000FF\n");
            break;
        case YELLOW:
            printf("The hexadecimal code for YELLOW is #FFFF00\n");
            break;
        case ORANGE:
            printf("The hexadecimal code for ORANGE is #FFA500\n");
            break;
        case PURPLE:
            printf("The hexadecimal code for PURPLE is #800080\n");
            break;
        case BLACK:
            printf("The hexadecimal code for BLACK is #000000\n");
            break;
        case WHITE:
            printf("The hexadecimal code for WHITE is #FFFFFF\n");
            break;
        default:
            printf("Unknown color\n");
    }
    
    return 0;
}

