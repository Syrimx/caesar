#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//globale variablen
char chiffrat[256];

/////////////////////////////////////////////////
//encryption function 
char *encryption(char text[], int key){

	for (int i = 0; i <= strlen(text); i++) {
		chiffrat[i] = text[i] + key;
	}

	printf("Verschluesselt: %s\n", chiffrat);
	return chiffrat;
}

/////////////////////////////////////////////////
//decryption function 
void decryption(char text[], int key){

	for (int i = 0; i <= strlen(text); i++) {
		text[i] = chiffrat[i] - key;
	}

	printf("Entschluesselt: %s\n", text);
}

/////////////////////////////////////////////////

int main() {


	char text[256];
	int key;

	//Getting Text to convert
	printf("Caesar-Cipher\n\n");
	printf("Text\n");
	fgets(text, 256, stdin);

	//Get the Key
	printf("Key:\n");
	scanf("%d", &key);

	//functions
	encryption(text, key);
	decryption(encryption(text, key), key);

	return 0;
}

///////////////////////////////////////////