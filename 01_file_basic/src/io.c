//
//  io.c
//  signalCatch
//
//  Created by drore on 17/2/16.
//  Copyright © 2017年 drore. All rights reserved.
//

#include "io.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#define BUFF_LEN 1024

void copy(int fd_in,int fd_out)
{
    char buffer[BUFF_LEN] = {"\0"};
    ssize_t n;
    
    while ((n = read(fd_in,buffer,BUFF_LEN))!=0) {
        if(n<0)
        {
            fprintf(stderr, "read failed %s\n",strerror(errno));
        }else if(n>0){
            if (write(fd_out, buffer, n)!=n) {
                  fprintf(stderr, "write failed %s\n",strerror(errno));
            }
        }
    }
    
}
