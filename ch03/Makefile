
CFLAGS = -Wall -std=c++0x

SRC_FILES = $(wildcard *.cc)
TAGETS = $(patsubst %.cc,%,$(SRC_FILES))

all:$(TAGETS)

%:%.cc
	$(CXX) $(CFLAGS) -o $@ $<

clean:
	$(RM) $(TAGETS)
