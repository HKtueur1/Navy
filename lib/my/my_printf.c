/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** printf
*/

#include "my.h"
#include <stdarg.h>

void my_printf(char *st, ...)
{
    char c;
    va_list(ap);

    va_start(ap, st);
    for (int i = 0; st[i] != '\0'; i++) {
        if (st[i] == '%') {
            switch(st[i + 1]) {
            case 'i': case 'd': my_put_nbr(va_arg(ap, int)); i++; break;
            case 'c': c = (char) va_arg(ap, int); my_putchar(c); i++; break;
            case 's': my_putstr(va_arg(ap, char *)); i++; break;
            case 'o': my_unoctal(va_arg(ap, unsigned int)); i++; break;
            case 'u': my_unsignednbr(va_arg(ap, unsigned int)); i++; break;
            case 'b': my_unbinary(va_arg(ap, unsigned int)); i++; break;
            }
        } else {
            my_putchar(st[i]);
        }
    va_end(ap);
    }
}
