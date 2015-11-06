BINS = hello temp chars count squish escape print-escapables one-word-per-line \
			 freqhist freqchar 1-16-longest-line-mod 1-17-lines-longer-than-80-chars \
			 1-18-remove-trailing-white-space-and-blank-lines
CC = cc
CC_OPTS = -g

all: ${BINS}

%: %.c
	${CC} ${CC_OPTS} -o $@ $<

.PHONY: clean
clean:
	rm -rf ${BINS} *.dSYM
