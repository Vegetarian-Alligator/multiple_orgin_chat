#include <stdio.h>
#include <unistd.h>

#define readlen 125
int main(int argc, char *argv[]) {
    int i;
    char *buffer=0;
//    scanf("%ms", &buffer);
    // Disable output buffering.
    setbuf(stdout, NULL);
//    setbuf(stdin, NULL);
   
	FILE * myfile;	
	    int j=0;
	char buffer2[readlen];
    while (1) {
  	for (j=0;j<=readlen;j++)buffer2[j]='\0';
	myfile=fopen("/var/www/output.txt", "a");
	read(STDIN_FILENO, buffer2, readlen);
	fprintf(myfile,"The value of what you send me is: %s\n",buffer2);
	printf("The value of what you send me is: %s\n",buffer2);
	fclose(myfile);
	}
    return 0;
}
