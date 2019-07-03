#pragma once
#include "ExecuteInterface.h"



class RodCutting : public IExecuteInterface
{
public:
	// IExecuteInterface을(를) 통해 상속됨
	virtual void Execute() override;
};

