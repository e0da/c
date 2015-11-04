BINS = hello temp chars count squish escape print-escapables one-word-per-line \
			 freqhist freqchar 1-16-longest-line-mod
CC = cc

all: ${BINS}

%: %.c
	${CC} -o $@ $<

.PHONY: clean
clean:
	rm ${BINS}
