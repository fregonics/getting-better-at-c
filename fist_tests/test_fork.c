#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    pid_t id;

    id = fork();
    switch (id) {
    case -1:
        printf("an error ocurred\n");
        break;
    
    case 0:
        printf("I am the CHILD process\n");
        break;
    
    default:
        printf("I am the FATHER process\n");
        break;
    
    }

    return 0;
}