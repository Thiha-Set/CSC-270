/*
 * life.c
 *
 *  Created on: Sep 13, 2016
 *      Author: leune
 */
#include <stdio.h>
#include <unistd.h>
#define ALIVE	1
#define	DEAD	0

//declare specs for the game in a global scope
int XSIZE;
int YSIZE;
int DEFAULTROUNDS;


//helper method to help assign the variables with the values from the config file
void declareVars(){
    //open the configuration file
    FILE *cfg = fopen("config.txt","r");

    //pointer to a string containing the values extracted from the file
    char length[60];

    //while the EOF has not been reached yet by fgets...
    while (fgets(length,60,cfg)!= NULL)
    {
        //scan to find the exercept where the values are defined, and set each spec's pointer
        //point to their respective attributes.
        fscanf(cfg,"#define XSIZE %d\n"
            "#define YSIZE %d\n"
            "#define DEFAULTROUNDS %d\n"
            "#define ALIVE %d\n"
            "#define DEAD %d\n",&XSIZE,&YSIZE,&DEFAULTROUNDS,ALIVE,DEAD);
    }
}
// initialize the board to all dead cells
void initBoard(int vBoard[][YSIZE]);
// play a round; updates the cells on the board
void playRound(int vBoard[][YSIZE]);
// print the board
void printBoard(int vBoard[][YSIZE]);
// determine the number of neighbors
int neighbors(int vBoard[][YSIZE], int x, int y);
/* determine if the given coordinates are within bounds
 * returns 0 if the cell is out of bounds; returns 1 if
 * the cell is in bounds
 */
int onBoard(int x, int y);

int main(int argc, char *argv[]) {
    //call the declareVars() method to initialize the specs...
    declareVars();
	int board[XSIZE][YSIZE];
	int rounds = DEFAULTROUNDS;

	initBoard(board);
	board[5][5] = ALIVE;
	board[5][6] = ALIVE;
	board[5][7] = ALIVE;
	board[6][6] = ALIVE;
    
	printf("Playing %d rounds.\n\n", rounds);
	for (int i=0; i<rounds; i++) {
		printf("Round: %d\n", i+1);
		printBoard(board);
		playRound(board);

		sleep(1);
	}

	return 0;
}


void initBoard(int vBoard[][YSIZE]) {
    
    //for every row index in vBoard...
    for (size_t r = 0; r < XSIZE; r++)
    {
        //for every column index in vBoard...
        for (size_t c = 0; c < YSIZE; c++)
        {
            //set each cell to dead (value of 0)
            vBoard[r][c]=DEAD;
        }
        
    }
    
}

void playRound(int vBoard[][YSIZE]) {
	int tmpBoard[XSIZE][YSIZE];
	initBoard(tmpBoard);

	// perform the algorithm on vBoard, but update tmpBoard
	// with the new state
	//for each row in vBoard
    for (size_t r = 0; r < XSIZE; r++)
    {
        //for each column in each row in vBoard
        for (size_t c = 0; c < YSIZE; c++)
        {
            //the cell is alive
            if (vBoard[r][c]==ALIVE)
            {
                //get number of neighbors
                int neigh=neighbors(vBoard,r,c);
                //if the amount of neighbors is less than two or number of neighbors is greater than three
                if(neigh<2||neigh>3)
                {
                    //the cell ultimately dies, so update tmpBoard
                    tmpBoard[r][c]=DEAD;
                }
                //otherwise just update tmpBoard with the value
                else
                {
                    //update tmpBoard with the val ALIVE
                    tmpBoard[r][c]=ALIVE;
                }
                
            }
            //else if the cell is dead
            else if (vBoard[r][c]==DEAD)
            {
                //get number of neighbors
                int neigh=neighbors(vBoard,r,c);
                //if the amount of neighbors is less than two or number of neighbors is greater than three
                if(neigh==3)
                {
                    //the cell ultimately is revived
                    tmpBoard[r][c]=ALIVE;
                }
                //otherwise just update tmpBoard with the value DEAD
                else
                {
                    //update tmpBoard with the val DEAD
                    tmpBoard[r][c]=DEAD;
                }
                
            }
        }
    }
    // copy tmpBoard over vBoard
	for (int y=0; y < YSIZE; y++) {
		for (int x=0; x < XSIZE; x++) {
			vBoard[x][y] = tmpBoard[x][y];
		}
	}
}

int onBoard(int x, int y) {
	if (x < 0 || x >= XSIZE)
		return 0;
	else
		if (y < 0 || y >= YSIZE) return 0;
	else
		return 1;
}

int neighbors(int vBoard[][YSIZE], int x, int y) {
	int n=0;

	int xp1 = x + 1;
	int xm1 = x - 1;
	int yp1 = y + 1;
	int ym1 = y - 1;

	if (onBoard(xm1, y) && vBoard[xm1][y] == ALIVE) n++;
	if (onBoard(xm1, yp1) && vBoard[xm1][yp1] == ALIVE) n++;
	if (onBoard(x, yp1) && vBoard[x][yp1] == ALIVE) n++;
	if (onBoard(xp1, yp1) && vBoard[xp1][yp1] == ALIVE) n++;
	if (onBoard(xp1, y) && vBoard[xp1][y] == ALIVE) n++;
	if (onBoard(xp1, ym1) && vBoard[xp1][ym1] == ALIVE) n++;
	if (onBoard(x, ym1) && vBoard[x][ym1] == ALIVE) n++;
	if (onBoard(xm1, ym1) && vBoard[xm1][ym1] == ALIVE) n++;

	return n;
}

void printBoard(int vBoard[XSIZE][YSIZE]) {
    //for each element in each row of the board
    for(size_t r=0;r<XSIZE;r++){
        //for each element in each col of each row of the board
        for(size_t c=0;c<YSIZE;c++){
            //print the element
            printf("%d,",vBoard[r][c]);
        }
        //new-line
        printf("\n");
    }
}