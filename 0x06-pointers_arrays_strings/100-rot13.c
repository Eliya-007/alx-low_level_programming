GNU nano 6.3  8-rot13.c
#include "main.h"
#include <stdio.h>

/**
  * rot13 - ...
  * @s: ...
  *
  * Return: ...
  */
char *rot13(char *s)
{
        int a = 0;

        while (s[a])
        {
                while ((s[a] >= 'a' >
                {
                        if ((s[a] > >
                        {
                                s[a]>
                                brea>
                        }

                        s[a] += 13;
                        break;
}

                a++;
        }

        return (s);
}
