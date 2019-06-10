#include "MazeRecursive.h"
#include "MiscAlgorithm.h"



/*
 *	0 = 벽
 *	1 = 길
 *	2 = 출구
 *	- = 탐색
 */
#define MAZE_HR_MAX 8
#define MAZE_VT_MAX 8
char Maze[MAZE_VT_MAX][MAZE_HR_MAX]
{
	1,1,1,1,1,1,1,0,
	1,0,0,1,0,0,1,0,
	1,1,1,0,1,1,1,0,
	1,0,1,1,0,0,1,1,
	1,0,0,0,1,1,0,0,
	1,0,1,1,1,0,1,0,
	1,1,1,0,1,1,1,0,
	1,0,0,0,1,0,1,2
};

bool bFindExit = false;

/*	NOTE : 2차 배열은 첫 괄호가 y, 둘재 괄호가 x이다. */
bool FindRecursive(int x, int y)
{
	if (bFindExit == true)
	{
		ALG_LOG("(%2d,%2d) : exit detected", x, y);
		return true;
	}


	if (x >= MAZE_HR_MAX || x < 0 ||
		y >= MAZE_VT_MAX || y < 0)
	{
		ALG_LOG("(%2d,%2d) : false << out of index", x, y);
		return false;
	}

	ALG_LOG("(%2d,%2d) : Enter(%d)", x, y, Maze[y][x]);
	if (Maze[y][x] == 2)
	{
		ALG_LOG("(%2d,%2d) : true", x, y);
		bFindExit = true;
		return true;
	}
	else if (Maze[y][x] == 1)
	{
		Maze[y][x] = -1;

		FindRecursive(x + 1, y);
		FindRecursive(x - 1, y);
		FindRecursive(x, y + 1);
		FindRecursive(x, y - 1);
		return false;
	}
	else
	{
		ALG_LOG("(%2d,%2d) : false << no maze road", x, y);
		return false;
	}
}


void MazeRecursive::Execute()
{
	FindRecursive(0, 0);
	ALG_LOG("미로탐색 결과 :%s", bFindExit? "출구 존재" : "출구 없음");
}



/** 여분의 주석 :
	현재 알고리즘에서는 bool bFindExit를 검사하여 알고리즘을 빠져나오는 방식을 쓰고 있지만,
	if(FindRecursive(x + 1, y) || FindRecursive(x - 1, y) ||
		FindRecursive(x, y + 1), FindRecursive(x, y - 1) 
	{
		return true;
	}
	를 통해서 true를 전파하여 코드를 좀 더 깔끔하게 작성할 수도 있다.
*/