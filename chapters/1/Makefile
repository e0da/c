BINS = hello temp chars count squish escape print-escapables one-word-per-line
CC = cc

all: ${BINS}

%: %.c
	${CC} -o $@ $<

.PHONY: clean
clean:
	rm ${BINS}
