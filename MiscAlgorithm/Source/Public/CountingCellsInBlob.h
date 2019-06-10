#pragma once
#include "ExecuteInterface.h"



/*
 * Binary 이미지가 주어진다. 이 때, 각 픽셀은 background pixel이거나 혹은
 * image pixel이다. 이 때, 서로 연결된 image pixel들의 집합을 blob이라고 부른다.
 * 상하좌우 및 대각선 방향에 인접한 image pixel이 있을 때 연결되었다고 한다.
 * 이 때, 총 각 blob의 cell 수를 구해야 한다.
 */
class CountingCellsInBlob : public IExecuteInterface
{
public:

	// IExecuteInterface을(를) 통해 상속됨
	virtual void Execute() override;
};

