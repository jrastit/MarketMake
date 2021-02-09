CC=gcc
ifdef DEBUG
OPTIMISATION=-g 
else
OPTIMISATION=-O3
endif
ifdef FORCE
WFLAGS=-W -Wno-pointer-sign -Wall
else
WFLAGS=-W -Wno-pointer-sign -Wall -Werror
endif
CFLAGS= $(WFLAGS) $(OPTIMISATION) -I../compile_compiler_compiler.lib -I/usr/include/libxml2/ -I../compile_ethereum_gen_web_display.lib -I../compile_zgenerator_crypt_compiler.lib -I/usr/include/glib-2.0/ -I/usr/lib/glib-2.0/include -I/usr/lib/x86_64-linux-gnu/glib-2.0/include/ -I../compile_rest_compiler.lib
LDFLAGS=$(OPTIMISATION) -L../lib -lcompiler -lxml2 -ldl -lm -lcrypto -lethereum -lzgenerator_crypt -lglib-2.0 -lrest -lcurl
EXEC=gen_marketmake
SRC=gen_main.c gen_marketmake_aave.c 
OBJ=$(SRC:.c=.o)
all: $(EXEC)
	echo build all

$(EXEC): $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o $(EXEC)

gen_main.o: gen_main.c gen_marketmake_aave.h
	$(CC) -c $(CFLAGS) $< -o $@
gen_marketmake_aave.o: gen_marketmake_aave.c
	$(CC) -c $(CFLAGS) $< -o $@
