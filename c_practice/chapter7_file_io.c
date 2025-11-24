#include <stdio.h>
#include <stdlib.h>

/*
 * 练习 7.1: 写入文件
 * 题目: 创建一个文件并写入一行文本。
 */
void write_to_file(const char *filename, const char *text) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("无法打开文件 %s 进行写入\n", filename);
        return;
    }
    fprintf(fp, "%s", text);
    fclose(fp);
    printf("成功写入文件: %s\n", filename);
}

/*
 * 练习 7.2: 读取文件
 * 题目: 读取文件内容并显示在屏幕上。
 */
void read_from_file(const char *filename) {
    FILE *fp = fopen(filename, "r");
    char ch;
    
    if (fp == NULL) {
        printf("无法打开文件 %s 进行读取\n", filename);
        return;
    }
    
    printf("文件内容 (%s):\n", filename);
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }
    printf("\n");
    fclose(fp);
}

/*
 * 练习 7.3: 复制文件
 * 题目: 将一个文件的内容复制到另一个文件。
 */
void copy_file(const char *source, const char *dest) {
    FILE *fp1 = fopen(source, "r");
    FILE *fp2 = fopen(dest, "w");
    char ch;
    
    if (fp1 == NULL || fp2 == NULL) {
        printf("文件操作失败\n");
        if (fp1) fclose(fp1);
        if (fp2) fclose(fp2);
        return;
    }
    
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }
    
    printf("文件复制完成: %s -> %s\n", source, dest);
    
    fclose(fp1);
    fclose(fp2);
}

int main() {
    printf("=== 第七章: 文件操作 ===\n");
    
    const char *file1 = "test.txt";
    const char *file2 = "copy.txt";
    
    write_to_file(file1, "Hello, File I/O in C!\nThis is a test.");
    read_from_file(file1);
    
    copy_file(file1, file2);
    read_from_file(file2);
    
    return 0;
}
