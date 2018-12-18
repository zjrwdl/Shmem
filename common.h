#ifndef __COMM_H__
#define __COMM_H__

#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#define PATHNAME "."
#define PROJ_ID 0x1234

int createShm(int size);
int getShm();
int destroyShm(int shmid);

#endif
