#include <stdio.h>

int main(){
	unsigned char bytes[10] = {};

	bytes[0] = 0x68;
	bytes[1] = 0b01100101;
	bytes[2] = 0b01101100;
	bytes[3] = 108;
	bytes[4] = 0157;



	printf(" Idx  Dec   Hex   Oct      Bin  C \n");
	printf("----  ---   ---   ---  -------  -\n");
	
	for (int i = 0; i < 10; i++){
	
		printf("[%2d]  %3d   %3x   %3o  ", i ,bytes[i], bytes[i], bytes[i]); 

		for (int b = 7; b >= 0; b--){
			int bit = (bytes[i] >> b) & 0b00000001;
			printf("%u", bit);
		}

		printf(" %c \n", bytes[i]);

	}
	return 0;

}
