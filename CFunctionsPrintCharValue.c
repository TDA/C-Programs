//
// Created by Sai Prashanth Chandramouli on 10/26/15.
//
#include <stdio.h>
#include <ctype.h>
// forward decl
void print_letter_value(char arg[]);
int can_print_it(char c);

int main(int argc, char *argv[]) {
    char name[] = "sai";
    print_letter_value(name);
    return 0;
}

int can_print_it(char c) {
    return isalpha(c) || isblank(c);
}

void print_letter_value(char arg[]) {
    int i = 0;
    for (; arg[i] != '\0'; ++i) {
        char c = arg[i];
        if (can_print_it(c)) {
            printf("'%c' == %d\n", c, c);
        }
    }
}
