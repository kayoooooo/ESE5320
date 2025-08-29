#include <stdio.h>
#include <stdlib.h>

void prefix(int *in, int *out, int len) {
    int sum=0;
    for (int i=0;i<len;i++) {
        sum+=in[i];
        out[i]=sum;
    }
}

void read_ins(int *in, int len, FILE *fp) {
    char * line = NULL;
    ssize_t read;
    size_t line_len =0;
    int i=0;

    if (fp == NULL)   return;

    while (((read = getline(&line, &line_len, fp)) != -1) && (i<len)) {
        in[i]=atoi(line);
        i++;
    }

    fclose(fp);
    if (line) free(line);
}

void write_outs(int *out, int len) {
    for (int i=0;i<len;i++)
        printf("%d\n",out[i]);
}

int main(int argc, char **argv) {
    if (argc<3) {
        fprintf(stderr,"Usage: arraysum len filename\n");
        exit(1);
    }
    const int len = atoi(argv[1]);
    int* in = malloc(len * sizeof(int));
    int* out = malloc(len * sizeof(int));
    FILE* f = fopen(argv[2], "r");
    read_ins(in, len, f);
    prefix(in, out, len);
    write_outs(out, len);

    return(0);
}