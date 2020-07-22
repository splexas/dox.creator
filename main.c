#include<stdio.h>
#include<string.h>
#include"functions/template.c"
#include"functions/showfiles.c"
#include<stdlib.h>
#include<dirent.h>
int main(){
    // Create a folder (doxfiles)
    #ifdef __linux__
       mkdir("doxfiles", 777); 
    #else
       _mkdir("doxfiles");
    #endif

    char first[200];
    char second[200];
    char third[200];
    char fourth[200];
    char input[200];
    // Converting ints to strs
    sprintf(first, "%d", 1);
    sprintf(second, "%d", 2);
    sprintf(third, "%d", 3);
    sprintf(fourth, "%d", 4);

    printf("___ TEMPLATE GENERATOR & DOX READER ___\n");
    printf("1) Template Generator\n2) Show all templates created\n3) Read .txt files\n4) Quit\n>>> ");
    scanf("%s", input);
    if (strcmp(input, first) == 0) {
        system("@cls||clear");
        template();
        system("@cls||clear");
        main();
    }
    if (strcmp(input, second) == 0){
        system("@cls||clear");
        showfiles();
        system("pause");
        system("@cls||clear");
        main();
    }
    if (strcmp(input, third) == 0){
        system("@cls||clear");
        readtxt();
        system("@cls||clear");
        main();
    }
    if (strcmp(input, fourth) == 0){
        return 0;
    }
}

#define MAXCHAR 1000
void readtxt() {
    char txt[200];
    printf("Please choose what .txt do you want to read.. (Enter without .txt)\n");
    printf("Here are all shown created templates:\n\n");
    showfiles();
    printf("\n>>> ");
    scanf("%s", txt);

    char extension[] = ".txt";
    char *filenamee = stringMerge(txt, extension);

    FILE *fp;
    char str[MAXCHAR];
    char folder[] = "doxfiles/";

    char* *filename = stringMerge(folder, filenamee);
 
    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Could not open file %s\n",filename);
        system("pause");
        return 1;
    }
    while (fgets(str, MAXCHAR, fp) != NULL)
        printf("%s", str);
    fclose(fp);
    system("pause");
    return 0;
}