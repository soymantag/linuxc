//
//  mycp.c
//  signalCatch
//
//  Created by drore on 17/2/16.
//  Copyright © 2017年 drore. All rights reserved.
//

#include <stdio.h>
#include "io.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    if(argc <3){
        fprintf(stderr, "usage : %s \n",argv[0]);
    }
    
    int fd_in = open(argv[1], O_RDONLY);
    if(fd_in<0)
    {
        fprintf(stderr, "open file 1 error : %s \n",strerror(errno));
        exit(1);
    }else
    {
        printf("open file 1 :%d \n",fd_in);
    }
    
    int fd_out = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,0644);//需要有写权限，如果不存在则创建，并把文件大小截短为0，权限为0644
    if(fd_out<0){
        fprintf(stderr, "open file 2 error : %s \n",strerror(errno));
        exit(1);
    }else
    {
         printf("open file 2 :%d \n",fd_out);
    }
    copy(fd_in, fd_out);
    close(fd_in);//关闭文件描述符
    close(fd_out);
    return 0;
}

