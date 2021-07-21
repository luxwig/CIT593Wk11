CC = clang
CFLAGS = -Wall -ggdb
INCLUDES =
LFLAGS =
MAINS = str_def example quiz

.PHONY: clean

all:    $(MAINS)

$(MAINS): $(MAIN=$@)

#$(MAIN):  $(MAINS).o
#	$(CC) $(CFLAGS) $(INCLUDES) -o $(MAIN) $(MAINS).o $(LFLAGS) $(LIBS)

.c.o: 
	$(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@
clean:
	rm -f *.o *~ $(MAINS)

