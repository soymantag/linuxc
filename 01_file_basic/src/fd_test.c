//
//  fd_test.c
//  signalCatch
//
//  Created by drore on 17/2/16.
//  Copyright © 2017年 drore. All rights reserved.
//

#include "fd_test.h"
#include <stdio.h>
#include <fcntl.h>

int main (int agrc,char *argv[])
{
    int fd = open("./src/fd_test.h", O_RDONLY);//以只读方式打开
    printf("fd:%d\n",fd);
    return 0;
}

