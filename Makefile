CC=cc
CFLAGS=-Wall -g -O3
LIBS=
ODIR=build
SRCDIR=src
APP=$(ODIR)/tm

_DEPS=tm.h
DEPS=$(patsubst %,$(SRCDIR)/%,$(_DEPS))

_OBJ=tm.o dfa.o
OBJ=$(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SRCDIR)/%.c $(DEPS)
	$(CC) -o $@ -c $< $(CFLAGS)

$(APP): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ $(APP)
