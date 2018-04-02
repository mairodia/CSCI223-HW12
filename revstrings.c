// =================================================================================
// File: revstrings.c
// =================================================================================
// Programmer: Jennifer King
// Date: 4/2/2018
// Project: Reversed Strings
// Professor: Scott Edwards
// Class: CSCI 223F | TR 4:30PM
// Description:
//      This program allows the user to enter a maximum of 100 strings of text at the
//      user to enter a max of 100 strings of text at the keyboard. If an empty line
//      appears on the standard input stream, the program is to interpret that as the
//      end of input. After the user has completed entering strings of text, the
//      program should display all the strings the user entered in reverse order.
// =================================================================================

#include <stdio.h>

int LEN = 250;

int main(void)
{
    int index = 0;
    char str[LEN];
    char buf[100];

    for(; index < 100 || fgets(str, LEN, stdin) != NULL; index++)
    {
        buf[index] = str[LEN];
    }

    for(; index >= 0; index--)
    {
        printf("%s\n", buf[index]);
    }
    return 0;
}
