BIN="bin"

all: hello

hello: bin hello.c
	cc -o ${BIN}/hello hello.c

bin:
	mkdir -p ${BIN}

clean:
	rm -rf bin
