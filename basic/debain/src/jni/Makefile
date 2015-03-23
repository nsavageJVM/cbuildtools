C=gcc
CFLAGS=-Wall

simple: main.c
        gcc -I/usr/lib/jvm/java-7-openjdk-amd64/include -I/src/include -c -fpic main.c
        gcc -shared -o libmain.so main.o
clean:
        rm -f libmain.so  *.o
