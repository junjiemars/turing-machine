CC=cc
CFLAGS=-Wall -g -O3
ODIR=build
SRCDIR=src
DEPS=$(SRCDIR)/tm.h
OBJ=tm.o
APP=$(ODIR)/tm

$(ODIR)/%.o: $(SRCDIR)/%.c $(DEPS)
	$(CC) -o $@ -c $< $(CFLAGS)

build: $(ODIR)/$(OBJ)
	$(CC) -o $(APP) $< $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ $(APP)
