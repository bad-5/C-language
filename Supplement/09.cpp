# include <stdio.h>

int main(void)
{
    int a = 1, b = 2, c = 3, d = 4;
    
    printf("%d\n", (a < b ? a : c < d ? a : d));

    return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
1
Press any key to continue
-----------------------
 */