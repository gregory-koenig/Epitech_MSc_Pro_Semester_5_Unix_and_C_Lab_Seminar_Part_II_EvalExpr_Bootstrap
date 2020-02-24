/*
** EPITECH PROJECT, 2019
** main
** File description:
** C Pool EvalExpr Bootstrap
*/

#include <stdio.h>

int number(char **src)
{
    int u;

    if (nb == -2147483648) {
        is_neg();
    } else {
        if (nb < 0) {
            my_putchar('-');
            nb *= -1;
        }
        if (nb > 9) {
            u = nb % 10;
            nb = (nb - u) / 10;
            my_put_nbr(nb);
            my_putchar(u + 48);
        } else {
            my_putchar(nb + 48);
        }
    }
}

int main(void)
{
    char *src = "1234";

    printf("%d", number(&src));
    return (0);
}
