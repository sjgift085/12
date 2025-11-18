//board.c
//shark game
//2025.11.18.

#include "board.h"

#define N_BOARD						20
#define BOARDSTATUS_OK		1
#define BOARDSTATUS_NOK		0

int board_initBoard(void);
void board_printBoardStatus(void);
int board_getBoardCoin(int pos);
int board_getSharkPosition(void);
int board_stepShark(void);
void board_getBoardStatus(void);

static int board_status[N_BOARD];
static int board_coin[N_BOARD];
static int shark_position;

void board_printBoardStatus(void){
		 int i;
		 
		 printf("============ BOARD STATUS ============\n");
		 for(i=0; i<N_BOARD; i++){
		 					printf("|");
		 					if(board_status[i] == BOARDSTATUS_NOK)
		 					  printf("X");
 					    else
				    		printf("O");
			}
			printf("|\n");
			printf("======================================\n");
								



