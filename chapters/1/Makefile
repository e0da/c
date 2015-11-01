BIN = bin
CC = cc

all: hello temp

hello: bin hello.c
	${CC} -o ${BIN}/hello hello.c

temp: bin temp.c
	${CC} -o ${BIN}/temp temp.c

bin:
	mkdir -p ${BIN}

clean:
	rm -rf bin
