#include<stdio.h>

int main () 
{
    FILE *testfile;
    char txt;
    testfile = fopen("text.txt", "w");
    fprintf(testfile, "HELLO WORLD.");
    fclose(testfile);
   //--------------------------------------------//
   testfile = fopen("text.txt", "r");
   if (testfile = NULL)
   {
    printf("Unable To Locate File...\nExiting...");
   }else{
     printf("The contents of the file are:\n");
     do
     {
        txt = fgetc(testfile);
        printf("%c", txt);
     } while (txt != EOF);
     fclose(testfile);
     return 0;
   }
   
}