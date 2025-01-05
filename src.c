#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void copyMemory(char* destination, char* source, int numBytes) {
    int i;
    for (i = 0; i < numBytes; i++) {
        destination[i] = source[i];
    }
}
int main() {
    char *buffer;
    char  *message = "Hello";
    
    int numBytes = strlen(message);
    buffer=(char*)malloc(numBytes+1);
    memset(buffer,'\0',numBytes+1);
    if(numBytes<sizeof(buffer))
    	copyMemory(buffer, message, numBytes);
    printf("numbytes=%d,Copied message: %s\n",numBytes, buffer);
    return 0;

//edited here
//edited here again
