#include <stdio.h>

int main(int argc, char *argv[])
{

        //argv is a array of character pointers

        printf(" Hello World\n" );
        printf(" argc = %d\n", argc);

        for(int i=0;i<argc;i++)
        {
                printf("argv[%d] = %s\n",i, argv[i]);
        }

        return (10);
}
~
