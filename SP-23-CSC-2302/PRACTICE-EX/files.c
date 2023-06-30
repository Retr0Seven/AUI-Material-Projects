#include<stdio.h>

int main(){
  FILE *fptr;
fptr= fopen("text.txt", "w");
  fputs("Hello world\n");
  fputs("I'm ReTr07.Seven\n");
  fclose(fptr);
}