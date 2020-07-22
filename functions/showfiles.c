#include <stdio.h>
#include <dirent.h>
#include <string.h>

void showfiles()
{
    DIR *dir;
    struct dirent *dp;
    char * file_name;
    dir = opendir("doxfiles");
    while ((dp=readdir(dir)) != NULL) {
        if ( !strcmp(dp->d_name, ".") || !strcmp(dp->d_name, "..") )
        {
            // do nothing
        } else {
            file_name = dp->d_name;
            printf("\"%s\"\n",file_name);
        }
    }
    closedir(dir);
    return 0;
}