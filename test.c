#include <stdio.h>

int main(){

	int x1, y1, z1, x2, y2, z2;
	char inst;
	FILE *outfp, *infp;

	infp = fopen("Beja.txt", "r");
	outfp = fopen("Beja.txt.res", "w");
	while(fscanf(infp, "%c %d %d %d %d %d %d\n", &inst, &x1, &y1, &z1, &x2, &y2, &z2) != EOF){
		fprintf(outfp, "%c %d %d %d %d %d %d\n", inst, x1, y1, z1, x2, y2, z2);
		printf("%c %d %d %d %d %d %d\n", inst, x1, y1, z1, x2, y2, z2);
	}

	fclose(infp);
	fclose(outfp);

return 0;
}