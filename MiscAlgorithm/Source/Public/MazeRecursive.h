#pragma once

#include "ExecuteInterface.h"



/*
 * 미로가 주어졌을 때 미로의 출구를 찾는 알고리즘입니다.
 */
class MazeRecursive : public IExecuteInterface
{
public:

	// IExecuteInterface을(를) 통해 상속됨
	virtual void Execute() override;
};

