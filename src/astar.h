#ifndef ASTAR_H
#define ASTAR_H

#include "cell.h"
#include "grid.h"

#define ASTAR_MAX_PATH_LENGTH 1000

/** Get a generated path from input variables
 * @param g The grid to do the pathfinding in
 * @param startX The start position x
 * @param startY The start position y
 * @param goalX The goal position x
 * @param goalY The goal position y
 * @param path_out A predefined path variable of length ASTAR_MAX_PATH_LENGTH, pass NULL if you don't want an output path
 * @returns Integer for program success: 1 for error, 0 for no errors
 * @note You can define a path with AstarCell *path[ASTAR_MAX_PATH_LENGTH] (name doesn't have to be path) and just pass it to the function like (getPath(... , path)
 * */
int ASTAR_Pathfind(ASTAR_Grid *g, int startX, int startY, int goalX, int goalY, ASTAR_Cell **path_out);

#endif