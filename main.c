#include <stdio.h>
#include "directories_list.c"

int main(int argc, char **argv){

if(strcmp(argv[1],"")==0||argv[1]==NULL){
	printf("Verzeichnis nicht gefunden");
}else{
readDirectory("/home/pi");


}

return 0;
}
