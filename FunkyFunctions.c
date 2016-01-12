//
// Created by Sai Prashanth Chandramouli on 1/12/16.
//

#include <stdio.h>

int main(int argc, char *argv[]) {
    int x = 0;
    if ((x = printf("%d\n", 5))) {
        printf("%d\n", x);
    }
    return 0;
}