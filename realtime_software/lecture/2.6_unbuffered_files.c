/*
oflag:
1.) read -> O_RDONLY
2.) writing -> O_WRONLY
3.) read/write -> O_RDWR
4.) append -> O_APPEND
5.) create -> O_CREAT
6.) truncate -> O_TRUNCATE
7.) blocking -> O_NONBLOCK , when multiple program access file
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>