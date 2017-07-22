#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
	    int len = 0;
	    char buf[100] = {0};
		int fd = open("fifo1", O_WRONLY);
		        while(1)
				    {
					       scanf("%s", buf);
					       write(fd, buf, sizeof(buf));
						        }
			    close(fd);
			        return 0;
}
