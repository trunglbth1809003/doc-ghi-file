#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main() {
    file *fp;
    fp = fopen("../demo.txt","w+");
    fprintf(fp, "Hi, i am luyen\n");
    fseek(fp,9, seek_set);
    fprintf(fp,"xuan hung");
    fclose(fp);
    return 0;
}