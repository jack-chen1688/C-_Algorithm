objects = prog2_2

CC = g++
all: $(objects)
VPATH = src
	
% : %.c
	$(CC) -c $(CFLAGS) $^ -o $@

clean:
	rm -f $(objects)


