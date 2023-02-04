CC=gcc
CFLAGS=-g -W
SRCDIR=src
OBJDIR=obj
BINDIR=bin
BIN=$(BINDIR)/main
RM=rm
SOURCEFILES=$(wildcard $(SRCDIR)/*.c)
OBJECTFILES=$(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SOURCEFILES))
SUBMITNAME=project.zip


all: $(BIN)

$(BIN): $(OBJECTFILES)
	$(CC) $(CFLAGS) $(OBJECTFILES)  -o $@


$(OBJDIR)/%.o : $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r $(BINDIR)/* $(OBJDIR)/*

submit:
	$(RM) $(SUBMITNAME)
	zip $(SUBMITNAME) $(BIN)