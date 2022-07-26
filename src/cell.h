#ifndef ASTAR_CELL_H
#define ASTAR_CELL_H

typedef struct ASTAR_Cell
{
    int x, y;
    // 0 for nothing, 1 for open, 2 for closed, 3 for non-traversable
    int value;
    double G, F;
    struct ASTAR_Cell *parent;
} ASTAR_Cell;

#endif