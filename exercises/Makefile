CC = gcc
CFLAGS = -Wall -Wextra -finput-charset=UTF-8 -fexec-charset=GBK

.PHONY: all clean help 01 02 03 04 05 06 07 08 09 10 11

help:
	@echo "Run a specific exercise by typing 'make <number>'"
	@echo "Examples:"
	@echo "  make 01  - Run 01_intro.c"
	@echo "  make 02  - Run 02_variables_datatypes.c"
	@echo "  make 03  - Run 03_operators.c"
	@echo "  make 04  - Run 04_control_flow.c"
	@echo "  make 05  - Run 05_loops.c"
	@echo "  make 06  - Run 06_functions.c"
	@echo "  make 07  - Run 07_arrays.c"
	@echo "  make 08  - Run 08_pointers.c"
	@echo "  make 09  - Run 09_strings.c"
	@echo "  make 10  - Run 10_structs.c"
	@echo "  make 11  - Run 11_file_io.c"
	@echo "  make clean - Remove executable files"

01:
	$(CC) $(CFLAGS) -o 01_intro 01_intro.c
	./01_intro

02:
	$(CC) $(CFLAGS) -o 02_vars 02_variables_datatypes.c
	./02_vars

03:
	$(CC) $(CFLAGS) -o 03_ops 03_operators.c
	./03_ops

04:
	$(CC) $(CFLAGS) -o 04_flow 04_control_flow.c
	./04_flow

05:
	$(CC) $(CFLAGS) -o 05_loops 05_loops.c
	./05_loops

06:
	$(CC) $(CFLAGS) -o 06_funcs 06_functions.c
	./06_funcs

07:
	$(CC) $(CFLAGS) -o 07_arrays 07_arrays.c
	./07_arrays

08:
	$(CC) $(CFLAGS) -o 08_ptrs 08_pointers.c
	./08_ptrs

09:
	$(CC) $(CFLAGS) -o 09_strings 09_strings.c
	./09_strings

10:
	$(CC) $(CFLAGS) -o 10_structs 10_structs.c
	./10_structs

11:
	$(CC) $(CFLAGS) -o 11_file 11_file_io.c
	./11_file

clean:
	del *.exe
