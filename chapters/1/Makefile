BIN = bin
CC = cc

all: hello

hello: bin hello.c
	${CC} -o ${BIN}/hello hello.c

bin:
	mkdir -p ${BIN}

clean:
	rm -rf bin
