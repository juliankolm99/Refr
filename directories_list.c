#include "directories_list.h"

#include <dirent.h>

#include <string.h>

void readDirectory(char *path){
/*
Funktion zum Auslesen des Verzeichnis
*/
printf("reading directory: %s\n", path);
printf("----------------------------\n");

DIR *d;

struct dirent *dir;

d=opendir(path);

if(d){

while((dir=readdir(d))!=NULL){

if(strcmp(dir->d_name,".") !=0 && strcmp(dir->d_name,"..")!=0){

printf("%s\n",dir->d_name);

}
}
}
}
