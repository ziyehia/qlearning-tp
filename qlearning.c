
#include <stdlib.h>
#include <stdio.h>

#define NB_OF_ROWS 6
#define NB_OF_COLUMNS 6

enum CellType {
    SUBJECT,
    EMPTY,
    WALL,
    GOAL_1,
    GOAL_2
};

enum MovementType {
    UP,
    RIGHT,
    DOWN,
    LEFT
};

/* En Q1, T1 (4, 3) et T2 (1, 4) sont des cases libres. */
static int arena[NB_OF_ROWS][NB_OF_COLUMNS] = {
    {EMPTY,  EMPTY, EMPTY, EMPTY, EMPTY, GOAL_1},
    {GOAL_2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    {EMPTY,  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    {EMPTY,  EMPTY, WALL,  WALL,  WALL,  WALL  },
    {EMPTY,  EMPTY, WALL,  EMPTY, EMPTY, EMPTY },
    {EMPTY,  EMPTY, EMPTY, EMPTY, EMPTY, SUBJECT }
};

int draw_arena(void){
        for (int row = 0; row < NB_OF_ROWS; row++) {
        for (int column = 0; column < NB_OF_COLUMNS; column++) {
            char symbol;

            switch (arena[row][column]) {
                case SUBJECT:
                    symbol = '*';
                    break;
                case EMPTY:
                    symbol = '.';
                    break;
                case WALL:
                    symbol = '#';
                    break;
                case GOAL_1:
                    symbol = '1';
                    break;
                case GOAL_2:
                    symbol = '2';
                    break;
                default:
                    symbol = '?';
                    break;
            }

            if (column > 0) {
                putchar(' ');
            }
            putchar(symbol);
        }
        putchar('\n');
    }

    return EXIT_SUCCESS;


}

int apply_movement(void){
    
}

int main(void)
{
    draw_arena();

    return EXIT_SUCCESS;
}



