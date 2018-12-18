#include "common.h"
#include <unistd.h>
int main()
{ 
    int shmid = getShm();
    sleep(5);
    char* buf = shmat(shmid, NULL, 0);
    while(1)
    { 
        printf("%s\n", buf);
        sleep(2);
    }
    shmdt(buf);

    return 0;
}
