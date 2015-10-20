//
// Created by Sai Prashanth Chandramouli on 10/20/15.
//
#include <stdio.h>
int main(int argc, char *argv[]) {
    int numbers[4] = {1};
    char name[4] = {'a'};

    // first, print them out raw
    printf("numbers: %d %d %d %d\n",
           numbers[0], numbers[1],
           numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n",
           name[0], name[1],
           name[2], name[3]);
    printf("name: %s\n", name);

    // setup the numbers
    int i;
    for (i = 0; i < 4; ++i) {
        numbers[i] = i + 1 + 32;
    }

    // setup the name
    name[0] = 'Z';
    name[1] = 'e';
    name[2] = 'd';
    name[3] = 'A';
    name[4] = 'a';

    printf("numbers: %c %c %c %c\n",
           numbers[0], numbers[1],
           numbers[2], numbers[3]);

    printf("name each: %d %d %d %d %d\n",
           name[0], name[1],
           name[2], name[3], name[4]);

    // more idiomatic and better way to declare string literals
    char *another = "Zed";

    printf("another: %s\n", another);

    printf("another each: %d %d %c %c %c\n",
           another[0], another[1],
           another[2], another[3], another[4]);

    return 0;
}
