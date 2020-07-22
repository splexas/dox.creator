#include <stdio.h> 
#include"merge.c"
#include <time.h>
void template(){
    char txtname[100];
    // Get .txt name
    printf("Please enter .txt name to create\n>>> ");
    scanf("%s", txtname);
    char extension[] = ".txt"; 
    char *txt = stringMerge(txtname, extension);
    char *path = stringMerge("doxfiles/", txt);
    // Create and open
    FILE * fp;
    fp = fopen (path, "w");

    // Get date & time
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    // Create template
    fprintf(fp, "DOX created at: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
    fprintf(fp, ">>> PERSONAL INFORMATION\n");
    fprintf(fp, "Name: \n");
    fprintf(fp, "Surname: \n");
    fprintf(fp, "Sex: \n");
    fprintf(fp, "Age: \n");
    fprintf(fp, "Phone number: \n");
    fprintf(fp, "Date of birth: \n");
    fprintf(fp, "E-Mail: \n\n");
    fprintf(fp, ">>> LOCATION INFORMATION\n");
    fprintf(fp, "Address: \n");
    fprintf(fp, "Area code: \n");
    fprintf(fp, "Zip: \n");
    fprintf(fp, "City: \n");
    fprintf(fp, "State: \n");
    fprintf(fp, "Country: \n\n");
    fprintf(fp, ">>> IP INFORMATION \n");
    fprintf(fp, "IP Address: \n");
    fprintf(fp, "ISP: \n");
    fprintf(fp, "Hostname: \n\n");
    fprintf(fp, ">>> SOCIAL MEDIA ACCS \n");
    fprintf(fp, "Twitter: \n");
    fprintf(fp, "Facebook: \n");
    fprintf(fp, "Snapchat: \n");
    fprintf(fp, "Instagram: \n");
    fprintf(fp, "Steam: \n\n");
    fprintf(fp, "DOXXED FOR: \n");




    fclose (fp);
    return 0;
}