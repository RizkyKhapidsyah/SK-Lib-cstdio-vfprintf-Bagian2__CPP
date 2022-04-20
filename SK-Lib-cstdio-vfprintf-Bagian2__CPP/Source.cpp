#pragma warning(disable:4996)

#include <cstdio>
#include <cstdarg>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

void write(FILE* fp, const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    vfprintf(fp, fmt, args);
    va_end(args);
}

int main() {
    FILE* fp = fopen("data.csv", "w");
    char name[5][50] = { "John","Harry","Kim","Yuan","Laxmi" };
    int age[5] = { 13,41,26,21,32 };

    write(fp, "%s,%s\n", "name", "age");

    for (int i = 0; i < 5; i++) {
        write(fp, "%s,%d\n", name[i], age[i]);
    }
        
    _getch();
    return 0;
}