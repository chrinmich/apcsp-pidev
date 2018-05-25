# include <stdio.h>

int main()
{
        int a = 0;
        //if statement to test if a is equal to 0
        if (a == 0)
        {
                printf("a is equal to 0\n");
        }
        else
        {
                printf("a is not equal to 0\n");
        }

        a = 0;
        int b = 1;
        //if statement to test if a is equal to b
        if (a == 0)
        {
                printf("a is equal to b\n");
        }
        else
        {
                printf("a is not equal to b\n");
        }

        a = 0;
        b = 1;
        // statement to test if a is not equal to b
        if (a != b)
        {
                printf("a is not equal to b\n");
        }
        else
        {
                printf("a is equal to b\n");
        }

        a = 0;
        b = 1;
        // statement to test if a is greater than b
        if (a > b)
        {
                printf("a is greater than b\n");
        }
        else
        {
                printf("a is not greater than b\n");
        }

        a = 0;
        b = 1;
        // statement to test if a is greater than or equal to b
        if (a >= b)
        {
                printf("a is greater than or equal to b\n");
        }
        else
        {
                printf("a is not greater than or equal to b\n");
        }

        a = 0;
        b = 1;
        // statement to test if a is equal to 0 AND  b is equal to 0
        if (a == 0 && b == 0)
        {
                printf("a is equal to 0 AND  b is equal to 0\n");
        }
        else
        {
                printf("a is not s equal to 0 AND  b is not equal to 0\n");
        }

        a = 0;
        b = 1;
        // statement to test if a is equal to 0 OR  b is equal to 0
        if (a == 0 || b == 0)
        {
                printf("a is equal to 0 OR b is equal to 0\n");
        }
        else
        {
                printf("a is not s equal to 0 OR b is not equal to 0\n");
        }

        a = 0;
        //if statement to test if a is not equal to 0
        if (!(a == 0))
        {
                printf("a is not equal to 0\n");
        }
        else
        {
                printf("a is equal to 0\n");
        }
}
