#include <stdio.h>
int main (int argc,char *argv[]){
    int i = 0;
    for (i = 0; i<argc; i++){
        printf("Numero : %d  Palavra: %s\n",i,argv[i]);
    }
}