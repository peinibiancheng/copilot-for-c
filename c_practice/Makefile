# 编译器设置
CC = gcc
# 添加字符集设置以解决Windows下中文乱码问题
CFLAGS = -Wall -g -finput-charset=UTF-8 -fexec-charset=GBK

# 伪目标声明
.PHONY: all clean help ch1 ch2 ch3 ch4 ch5 ch6 ch7

# 默认目标：显示帮助信息
all: help

help:
	@echo "使用方法: make [目标]"
	@echo "例如: make ch1"
	@echo ""
	@echo "可用目标:"
	@echo "  ch1   - 编译并运行 第一章: 基础语法"
	@echo "  ch2   - 编译并运行 第二章: 控制流"
	@echo "  ch3   - 编译并运行 第三章: 函数"
	@echo "  ch4   - 编译并运行 第四章: 数组与字符串"
	@echo "  ch5   - 编译并运行 第五章: 指针"
	@echo "  ch6   - 编译并运行 第六章: 结构体"
	@echo "  ch7   - 编译并运行 第七章: 文件操作"
	@echo "  clean - 清理生成的可执行文件"

# 各章节的编译和运行规则
# 注意：在 Windows PowerShell 或 Git Bash 中使用 ./ 运行

ch1: chapter1_basics.c
	$(CC) $(CFLAGS) -o chapter1_basics chapter1_basics.c
	./chapter1_basics

ch2: chapter2_control_flow.c
	$(CC) $(CFLAGS) -o chapter2_control_flow chapter2_control_flow.c
	./chapter2_control_flow

ch3: chapter3_functions.c
	$(CC) $(CFLAGS) -o chapter3_functions chapter3_functions.c
	./chapter3_functions

ch4: chapter4_arrays_strings.c
	$(CC) $(CFLAGS) -o chapter4_arrays_strings chapter4_arrays_strings.c
	./chapter4_arrays_strings

ch5: chapter5_pointers.c
	$(CC) $(CFLAGS) -o chapter5_pointers chapter5_pointers.c
	./chapter5_pointers

ch6: chapter6_structures.c
	$(CC) $(CFLAGS) -o chapter6_structures chapter6_structures.c
	./chapter6_structures

ch7: chapter7_file_io.c
	$(CC) $(CFLAGS) -o chapter7_file_io chapter7_file_io.c
	./chapter7_file_io

# 清理规则 (兼容 Windows CMD 和 Unix Shell)
clean:
	-del *.exe 2>NUL
	-rm -f *.exe
