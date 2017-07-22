#!/bin/bash

#这个脚本是用来删除共享内存，信号量，消息的
#用法为：shell_ipc.sh [user] [shm|sem|msg|all]
#这个脚本是在mac上写的，在其他平台上可能需要进行修改

#check parameters
if [ "$#" != "2" ];then
	echo "usage: $0 user shm|sem|msg|all"
	exit 1
elif [ "$2" != "shm" -a "$2" != "sem" -a "$2" != "msg" -a "$2" != "all" ];then
	echo "usage: $0 user shm|sem|msg|all"
	exit 1
fi

#delete the shm
if [ "$2" = "shm" -o "$2" = "all" ];then
	START=`ipcs | sed -n '/Shared/='`
	END=`ipcs | sed -n '/Semaphores/='`
	for i in `ipcs | sed -n ${START},${END}p | grep $1 |awk '{print $2}'`
		do
			ipcrm -m $i
			echo -e "delete shm id="$i
		done
fi

#delete the msg
if [ "$2" = "msg" -o "$2" = "all" ];then
	START=`ipcs | sed -n '/Message/='`
	END=`ipcs | sed -n '/Shared/='`
	for i in `ipcs | sed -n ${START},${END}p | grep $1 | awk '{print $2}'`
		do
			ipcrm -q $i
			echo -e "delete msg id="$i
		done
fi

#delete the sem
if [ "$2" = "sem" -o "$2" = "all" ];then
    START=`ipcs | sed -n '/Semaphores/='`
    for i in `ipcs | sed -n ${START},$$p | grep $1 | awk '{print $2}'`
        do
            ipcrm -s $i
            echo -e "delete sem id="$i
        done
fi
