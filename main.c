#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
    char first[255], last[255];

    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */
    printf("Введите фамилию: ");
    gets(last); /* buffer overflow? what's that? */
    printf("Hello %s %s!\n", first, last);
    return 0;
}
