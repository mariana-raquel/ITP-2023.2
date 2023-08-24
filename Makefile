SRC = $(wildcard src/*.c)
HDR = $(wildcard src/*.h)
comp = gcc
flags = -Wall -o main.jang.o */*.c
ALL_JANG_FILES = $(wildcard */*.jang)

.PHONY: Jang
.PHONY: clean
.PHONY: Memory_Check

Jang: ${SRC} ${HDR}
	${comp} ${flags}  ${SRC} ${HDR}

clean: ${SRC} ${HDR}
	rm *.o