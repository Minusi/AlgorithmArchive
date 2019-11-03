#include "Utility.h"



void GenerateTestString(unsigned int NumData, unsigned int MinLength, unsigned int MaxLength, vector<string>& Output)
{
#ifdef TEST
	if (bInitRand == false)
	{
		srand((unsigned int)time(NULL));
		bInitRand = true;
	}

	if (MinLength > MaxLength)	return;

	string SingleData;
	SingleData.reserve(MaxLength);
	unsigned int SingleLength;

	for (unsigned int i = 0; i < NumData; ++i)
	{
		SingleLength = rand() % (MaxLength - MinLength + 1) + MinLength;
		for (unsigned int j = 0; j < SingleLength; ++j)
		{
			SingleData += GenerateSingleTestData<char>('a', 'z');
		}
		Output.push_back(SingleData);
		SingleData.clear();
	}
#endif // TEST
}

std::string GenerateSingleTestString(unsigned int MinLength, unsigned int MaxLength)
{
	if (MinLength > MaxLength)
		return string();

	int Length = rand() % (MaxLength - MinLength + 1) + MinLength;
	string Result;
	for (unsigned int i = 0; i < Length; ++i)
		Result += GenerateSingleTestData<char>('a', 'z');

	return Result;
}
