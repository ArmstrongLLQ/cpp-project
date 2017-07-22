#! /bin/bash
WHOAMI=`whoami`

PID=`ps -u $WHOAMI | grep ./mydaemon | awk '{print $2}'`

echo $PID

if (test "$1" = "start") then
	if (test "$PID" = "") then
		./mydaemon
	fi
fi

if (test "$1" = "stop") then
	if (test "$PID" != "") then
		echo $PID
		kill $PID
	fi
fi
