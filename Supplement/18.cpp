/*�궨��*/
# include <stdio.h>

# define Max(x, y) (x) >= (y) ? (x) : (y)

int main(void)
{
    int i = 10, j = 15;
    
    printf("%d\n", 10 * Max(i, j));

    return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
10
Press any key to continue
-----------------------
 */

