//main.c
//shark game
//2025.11.18.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "board.h"

#define MAX_DIE			6

int rolldie(void){
		return rand()%MAX_DIE + 1;
}

int main(int argc, char *argv[])
{
 		int cnt;
 		int pos;
 		int coinResult;
 		
 		srand((unsigned) (time(NULL)));
 		//game opening
 		printf("==============================================\n");
 		printf("**********************************************\n");
 		printf("*            !! Shark Island !!              *\n");
 		printf("**********************************************\n");
 		printf("==============================================\n\n\n");
 		
 		//step 0 Initialization
 		board_initBoard();
 		//step 1 setting player name
 		
 		//step 2 Game play (rutine)
 		cnt = 0;
 		pos = 0;
 		coinResult = 0;
 		
 		do{
			 int die_result;
			 
 		//2-1 Board Status
	     board_printBoardStatus();
 		//2-2 3 player status
 		//2-3 roll a die
			 die_result = rolldie();
 		//2-4 move
 		   pos += die_result;
 		   
 		   printf("pos: %i (die: %i)\n", pos, die_result);
 		   
 		   coinResult += board_getBoardCoin(pos);
 		   
 		   printf("coin: %i\n", coinResult);
 		   cnt++;
 		//2-5 change turn & move shark
		} while(cnt < 5);
 		//step 3 Finish game
 		
 		
 		//game ending
 		printf("\n\n\n\n\n\n\n");
 		printf("==============================================\n");
 		printf("**********************************************\n");
 		printf("*           !! CONGRATULATION !!             *\n");
 		//printf("*            %s          *\n",//player_name);
 		printf("*               YOU WIN !!!!!                *\n");
 		printf("**********************************************\n");
 		printf("==============================================\n\n\n");
  
  
  
  system("PAUSE");	
  return 0;
}
