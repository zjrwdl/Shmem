#include "common.h"
int commShm(int size,int flags)
{ 
    int  key=ftok(PATHNAME,PROJ_ID);
    if(key<0)
    { 
        perror("ftok");
        return -1;
    }

    int shmid=shmget(key,size,flags);
    if(shmid<0)
    { 
        perror("shmid");
        return -2;
    }

    return shmid;                   
}


int createShm(int size)
{ 
    return commShm(size, IPC_CREAT|IPC_EXCL|0666);
}

int getShm()
{ 
    return commShm(0, IPC_CREAT);
}


int destroyShm(int shmid)
{ 
    if(shmctl(shmid,IPC_RMID,NULL)<0)
    { 
        perror("shmctl");
        return -1;
    }

    return 0;
}
