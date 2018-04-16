#include <stdio.h>
#include <stdbool.h>

#define N 8

bool walk(int maze[N][N], int x, int y);
bool solve(int[N][N]);
void printSolution(int[N][N]);
bool checkMove(int[N][N], int, int);


int main()
{
    int maze[N][N]  =  {
        {1, 0, 0, 0, 0, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 0},
        {0, 1, 0, 1, 0, 0, 1, 0},
        {1, 0, 1, 1, 0, 1, 1, 0},
        {0, 0, 1, 0, 1, 0, 1, 1},
        {1, 0, 1, 1, 1, 1, 1, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {1, 0, 1, 0, 1, 0, 1, 0}
    };

    solve(maze);
    return 0;
}

/* printo zgjidhjen e problemes */
void printSolution(int maze[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++){
            if(maze[i][j] == 1) maze[i][j] = 0; // if 1 -> 0 (better readability)
            printf(" %d ", maze[i][j]);
        }
        printf("\n");
    }
}

/* kontrollo nqs indeksi X,Y ndodhet ne matrice */
bool checkMove(int maze[N][N], int x, int y)
{
    // nqa X,Y ndodhen jashte matrices, kthe false
    if(x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1)
        return true;

    return false;
}

/* Kthe false nqs nuk ka zgjidhje, ose kthe TRUE dhe
    printo rrugen e zgjidhjes duke vendosur 2. */
bool solve(int maze[N][N])
{
    if(!walk(maze, 0, 0))
    {
        printf("Nuk ka zgjidhje\n");
        return false;
    }

    printSolution(maze);
    return true;
}

bool walk(int maze[N][N], int x, int y)
{
    // nqs (x,y eshte zgjidhje) return true
    if(x == N-1 && y == N-1)
    {
        maze[x][y] = 2;
        return true;
    }

    // kontrollo nqs maze[x][y] ekziston
    if(checkMove(maze, x, y))
    {
        // vendos x,y si zgjidhje te problemit
        maze[x][y] = 2;

        if (walk(maze, x+1, y))
            return true;

        if (walk(maze, x, y+1))
            return true;

        /*  nqs te dyja levizjet siper nuk kthejne TRUE,
            athere vendos kordinaten si 0(BACKTRACK) */
        maze[x][y] = 0;
        return false;
    }

    return false;
}