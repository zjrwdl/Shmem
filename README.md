# Ashmem
A Ashmem Demo

用gcc编译：(compile with gcc)

gcc -o writeShm writeShm.c common.c

gcc -o readShm readShm.c common.c


开启两个终端1和2（open two terminal）

1：运行writeShm(run writeShm)

./writeShm


2: 运行readShm(run readShm) 

./readShm


在终端1输入任意字符:(type any string in terminal,as:)

hello

how are you

观察终端2的显示:(watch output in terminal 2:)

hello

how are you
