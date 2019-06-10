#pragma once



/**
IExecuteInteface는 프로그램에서 실행될 수 있는 프로그램 또는 알고리즘에 대한
인터페이스 추상화입니다, 특정 로직을 수행해야 한다면 이 인터페이스를 상속 받아야
합니다.
*/
class IExecuteInterface
{
public:
	// 특정 기능을 실행합니다.
	virtual void Execute() = 0;
};