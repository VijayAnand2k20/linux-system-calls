#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <unistd.h> // Linux specific library
#include <sys/wait.h> // For wait()

int main()
{
    int id = fork();
    // printf("Hello from %d!\n", id);
    if(id == 0) {
        printf("Hi from the child process! %d\n", id);
        for (int i = 0; i < 10; i++)
        {
            printf("*");
        }
        printf("\n");   
    }
    else if(id > 0){
        // wait(0); // wait for child to exit.
        printf("Hi from the main process! %d\n", id);
        for (int i = 0; i < 10; i++)
        {
            printf("-");
        }
        printf("\n");
    }
    else {
        perror("Error while forking");
    }
    return 0;
} 