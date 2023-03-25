#include <stdarg.h>
#include <stdio.h>


/**
 * _printf - Write a function that produces output according
 * to a format
 * @format: char input
 * return: int
 */

int _printf(const char *format, ...) {
    va_list args;
    int count;
    va_start(args, format);
    
    count = 0;

    while (*format) {
        if (*format == '%') {
            format++;
            if (*format == 'c') {
                int c = va_arg(args, int);
                putchar(c);
                count++;
            } else if (*format == 's') {
                char *s = va_arg(args, char*);
                while (*s) {
                    putchar(*s);
                    s++;
                    count++;
                }
            } else if (*format == '%') {
                putchar('%');
                count++;
            }else {
		    putchar('%');
		    putchar(*format);
		    count++;
	    }
        } else {
            putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);
    return count;
}


