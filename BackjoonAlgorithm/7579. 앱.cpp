#include <iostream>
#include <algorithm>
using namespace std;

//#include "Utility.h"
//#define DEBUG

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	int Mem[101], Cost[101];
	int CostSum = 0;
	for (int i = 1; i <= N; ++i)
		cin >> Mem[i];
	for (int i = 1; i <= N; ++i)
	{
		cin >> Cost[i];
		CostSum += Cost[i];
	}

	/* index : �ڽ�Ʈ, value : �ش� �ڽ�Ʈ���� Ȯ���� �� �ִ� �ִ� �޸𸮷� */
	int Dp[10001] = { 0 };
	for (int i = 1; i <= N; ++i)
	{
		for (int j = CostSum; j >= Cost[i]; --j)
		{
			Dp[j] = max(Dp[j], Dp[j - Cost[i]] + Mem[i]);
		}
	}

	//Print(Dp, 0, CostSum + 1);

	int idx;
	for (idx = 0; idx <= CostSum && Dp[idx] < M; ++idx);
	cout << idx << "\n";
	return 0;
}

/* ���� : https://organize-study.tistory.com/63 */