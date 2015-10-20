//
// Created by Sai Prashanth Chandramouli on 10/20/15.
//

#include <stdio.h>

int main(int argc, char *argv[]) {
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Zed";
    char full_name[] = {
            'Z', 'e', 'd',
            ' ', 'A', '.', ' ',
            'S', 'h', 'a', 'w', '\0'
    };
    printf("%ld\n", areas[0]);
    printf("%s\n", name);
    printf("%s\n", full_name);
    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n",
           sizeof(areas));

    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]): %ld\n",
           sizeof(name));
    printf("The number of chars: %ld\n",
           sizeof(name) / sizeof(char));
    printf("The size of full_name (char[]): %ld\n",
           sizeof(full_name));
    printf("The number of chars: %ld\n",
           sizeof(full_name) / sizeof(char));

    return 0;
}