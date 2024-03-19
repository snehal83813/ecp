#include <stdio.h>
#include <string.h>

void printing_char (char ch, int length, int lines)
{
    if (length < 1 || lines < 1) return;

    int size = length+1;
    char str[size*lines+1];

    memset(str, ch, length);
    str[length] = '\n';
    str [size*lines] = '\0';

    for (int off = size*(lines-1); off > 0; off -= size) {
        memcpy(str + off, str, size); 
    } 
    printf ("%s %d", str, lines);


int main (void)
{
    char ch;
    int lines;
    int times;

    printf("please enter a character, number of times in a line, and number of lines, separated by a comma:\n");
    while ((scanf("%c,%d,%d", &ch, &times, &lines)) == 3) {
        printing_char (ch, times, lines);
    }
