public static void printMatrix(int[][] m, int i, int j)
{
    System.out.print("[" + m[i][j] + "]");
    if (i == m.length && j == m.length)
    {
        return;
    }

    if (j == m.length)
    {
        j = 0;
        ++i;
        printMatrix(m, i, j);
    }
    else 
    {
        j++;
        printMatrix(m, i, j);
    }
}
