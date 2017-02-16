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
    if(argc <2){
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
    
   
    copy(fd_in, STDOUT_FILENO);
    close(fd_in);//关闭文件描述符
    return 0;
}

