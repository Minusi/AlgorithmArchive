#include "NQueens.h"
#include "MiscAlgorithm.h"

#include <iostream>



#define DOMAIN_SIZE 8

enum BoardState
{
	EMPTY = 0,
	QUEEN = 1,
};

static char QueenBoard[DOMAIN_SIZE][DOMAIN_SIZE] = { 0 };
static unsigned int NumPlacedQueen = 0;

//bool CalculateQueenPosition(int x, int y)
//{
//	if (x > DOMAIN_SIZE || x < 0
//		|| y > DOMAIN_SIZE || y < 0)
//	{
//		return;
//	}
//
//	for (int i = 0; i < DOMAIN_SIZE; ++i)
//	{
//		if (QueenBoard[y][i] == QUEEN)
//		{
//			return false;
//		}
//	}
//
//	for (int i = 0; i < DOMAIN_SIZE; ++i)
//	{
//		if (QueenBoard[i][x] == QUEEN)
//		{
//			return false;
//		}
//	}
//
//	//for (int i = 0; i < DOMAIN_SIZE; ++i)
//	//{
//	//	if(QueenBoard[y][x])
//	//}
//}



void NQueens::Execute()
{
	
	
}
