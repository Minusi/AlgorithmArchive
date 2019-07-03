#pragma once
#include "ExecuteInterface.h"



/*
 * N-Queen 문제는 N*N 크기의 체스판에서 N개의 퀸이 서로를 공격할 수 없는 상태로
 * 배열하는 것을 목표로 삼는 문제이다.
 */
class NQueens : public IExecuteInterface
{
public:

	// IExecuteInterface을(를) 통해 상속됨
	virtual void Execute() override;
};

