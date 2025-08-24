    CC=gcc
    CFLAGS=-Wall -Wextra -O2

    all: goianinha

    goianinha: parser.tab.o lex.yy.o ast.o symtable.o main.o
	$(CC) $(CFLAGS) -o $@ $^ -lfl

    parser.tab.c parser.tab.h: parser.y
	bison -d parser.y

    lex.yy.c: lexer.l parser.tab.h
	flex lexer.l

    ast.o: ast.c ast.h
	$(CC) $(CFLAGS) -c ast.c

    symtable.o: symtable.c symtable.h
	$(CC) $(CFLAGS) -c symtable.c

    main.o: main.c ast.h symtable.h
	$(CC) $(CFLAGS) -c main.c

    clean:
	rm -f *.o lex.yy.c parser.tab.c parser.tab.h goianinha
