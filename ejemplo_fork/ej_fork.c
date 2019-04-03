//  Created by Elena CM on 03/04/2019.
//

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>


/**
 ** Main function **
 */
int main(int argc, char* argv[]) {
    int i;
    int pid;
    int num_processes;
    char download_mode;
    
    if (argc == 3) {
        num_processes = atoi(argv[1]);
        download_mode=argv[2][0];
        
        for (i=1; i <= num_processes; i++) {
            pid = fork();
            if (pid == 0) {
                /**
                 * This code will be executed by the child process
                 */
                printf("child #%d: Hi!\n",i);
                printf("child #%d: I will wait 2 seconds\n",i);
                sleep(2);
                printf("child #%d: Done! bye bye\n",i);
                /**
                 * Returning here will end the child execution
                 */
                return(0);
            }
            
            /**
             * Only the father will reach this line
             */
            if (download_mode == 'S') {
                printf("father: waiting for child #%dto finish\n",i);
                wait(NULL);
            }
        }
        
        if (download_mode == 'P') {
            for (i=1; i <= num_processes; i++) {
                printf("father: waiting for child #%dto finish\n",i);
                wait(NULL);
            }
        }
        printf ("-- End father --\n");
        exit (0);
    }
    else
        exit (-1);
    }
