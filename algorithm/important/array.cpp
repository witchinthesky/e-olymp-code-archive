for (int i = 1; i <= n*n; i++)
    {
        switch (p)
        {
        case 0:
            y++;
            if (y == n - 1 || d[x][y + 1]) p++;
            break;
        case 1:
            x++;
            if (x == n - 1 || d[x + 1][y]) p++;
            break;
        case 2:
            y--;
            if (y == 0 || d[x][y - 1]) p++;
            break;
        case 3:
            x--;
            if (x == 0 || d[x - 1][y]) p++;
            break;
        }
        d[x][y] = i;
        p %= 4;
    }
