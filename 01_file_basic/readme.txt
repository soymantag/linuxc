Linux 下C编译--文件基础
编译
gcc src/fd_test.c -o bin/fd_test
执行
./bin/fd_test
显示
fd:3

编译
gcc -Iinclude src/io.c src/mycp.c -o bin/mycp
执行
./bin/mycp ./testfile.txt ./testfilecp.txt
显示
open file 1 :3 
open file 2 :4 

编译
gcc -Iinclude src/io.c src/mycat.c -o bin/mycat
执行
./bin/mycat testfile.txt 
显示
open file 1 :3 
test
