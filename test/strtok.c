#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

extern char** environ;
int main(void)
{
    int i = 0;
char* aux = NULL;
    while (*(environ + i))
    {
        if (!strncmp (environ[i],"PATH=", 5))
        {
            aux = environ[i] + 5;
        }
        i++;
    }
    printf("%s\n", strtok(aux, ":"));
    printf("%s\n", strtok(NULL, ":"));
    printf("%s\n", strtok(NULL, ":"));
    printf("%s\n", strtok(NULL, ":"));
    printf("%s\n", strtok(NULL, ":"));
    printf("%s\n", strtok(NULL, ":"));
}