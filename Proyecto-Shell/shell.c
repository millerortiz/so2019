#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <dirent.h>
#include <curses.h>


char *mygets(char *buf, size_t size) {
    if (buf != NULL && size > 0) {
        if (fgets(buf, size, stdin)) {
            buf[strcspn(buf, "\n")] = '\0';
            return buf;
        }
        *buf = '\0';
    }
    return NULL;
}

int main(int argc, char** argv) {
	char comando[256];
	char nombreDir[256];
	char echo[256];
	int i;
	char s[256];
	char b;
 	DIR *dir = NULL;
  	struct dirent *ent;
  	pid_t pid;

  while (1) {

	getcwd(s,256);
	printf("\n %s > ", s);
    	mygets(comando, sizeof comando);

    	pid = fork();
	if (pid != 0) {
 		wait(NULL);
	}
	else {
		if (strstr(comando,"dir") != NULL) {
			getcwd(s, 256);
	   		dir = opendir(s);
           		while ((ent = readdir(dir)) != NULL ){
				printf("  %s\n", ent -> d_name);
	   		}
	   		closedir(dir);

	    	}
		else if (strstr(comando, "cd ") != NULL) {
	 		memset(&nombreDir, 0, 256);
       	 		for (i=3; i<strlen(comando); i++){
	 			if (comando[i] != '\0'){
					nombreDir[i-3] = comando[i];
				}
				else {
	    				break;
				}
			}
			chdir(nombreDir);
		}
		else if(strstr(comando, "echo ") != NULL){
			memset(&echo, 0,256);
			for (i=5; i<strlen(comando); i++){
				if(comando[i] != '\0'){
					echo[i-5] = comando[i];
				}
				else{
					break;
				}
			}
			printf("%s\n", echo);
		}
		else if(strstr(comando, "pause") != NULL){
			printf("Pulse Enter para continuar...");
			getchar();
			return 0;
		}
		else if(strstr(comando,"quit") != NULL){
			
			 exit(0);
		}
		else if(strstr(comando, "help") != NULL){
			printf("Lista de comandos:\n\n    --cd      Cambia de directorio.\n    --dir     Lista los directorios existentes\n    --echo    Reacciona al sistema.\n    --clr     Limpia la pantalla.\n    --pause   Pausa la tarminal hasta que Enter sea presionado.\n");
		}
		else if(strstr(comando, "clr") != NULL){
			system("clear");
		}
    	}
  }
  exit(0);
}
