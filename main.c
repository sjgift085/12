//main.c
//shark game
//2025.11.18.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "board.h"

int main(int argc, char *argv[])
{
 		srand((unsigned) (time(NULL)));
 		//game opening
 		printf("==============================================\n");
 		printf("**********************************************\n");
 		printf("*            !! Shark Island !!              *\n");
 		printf("**********************************************\n");
 		printf("==============================================\n\n\n");
 		
 		//step 0 Initialization
 		
 		//step 1 setting player name
 		
 		//step 2 Game play (rutine)
 		//2-1 Board Status
 		//2-2 3 player status
 		//2-3 roll a die
 		//2-4 move
 		//2-5 change turn & move shark
 		
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
