BINS = hello temp chars count squish escape print-escapables
CC = cc

all: ${BINS}

%: %.c
	${CC} -o $@ $<

.PHONY: clean
clean:
	rm ${BINS}
