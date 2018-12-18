#include "common.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{ 
    int shmid = getShm();
    destroyShm(shmid);
    int count = 0;
    shmid = createShm(4096);
    sleep(5);
    char *buf = shmat(shmid, NULL, 0);

    while(1){
      fgets(buf,4096,stdin);
      //buf[count] = '\0';
    }
    shmdt(buf);
    sleep(5);
    destroyShm(shmid);
    return 0;
}
