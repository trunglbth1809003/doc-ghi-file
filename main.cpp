#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main() {
    file *fp;
    char myvar[255];
    int age;
    fp = fopen("../demo.txt", "r+");
    while (fgets(myvar, 255, fp) != NULL) {
        printf("%s", myvar);
    }
    fclose(fp);
    return 0;
}