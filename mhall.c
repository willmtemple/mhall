#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main( void ) {

	srand( time( NULL ) );

	int iter = 0;
	int sww = 0;
	int stw = 0;
	int i = 0;
	char winstr[4];

	printf("How many times should we run the simulation? ");
	scanf("%d", &iter);

	for (i = 1; i <= iter; i++) {

		int winner = rand() % 3;
		int choice = rand() % 3;

		if( winner == choice ) {
			stw++;
			//printf("%d\n", stay_wins);
			strcpy(winstr, "HOLD");
		} else {
			sww++;
			strcpy(winstr, "SWCH");
		}

		printf("[SIM] %s WON - CUR%%: %f CURSW: %d CURST: %d\r", winstr, ((float)sww)/((float)i), sww, stw);

	}

	printf("\nSwitching won %f percent of the time.\nThere were %d cases in which switching won.\nThere were %d cases in which holding won.\n",((float)sww)/((float)iter), sww, stw);
	//printf("There were %d cases in which holding won.\n",stw);
	return 0;
}
