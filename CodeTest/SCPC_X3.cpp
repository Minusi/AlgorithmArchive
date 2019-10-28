///*
//You should use the standard input/output
//
//in order to receive a score properly.
//
//Do not use file input and output
//
//Please be very careful.
//*/
//
//#include <stdio.h>
//#include <vector>
//#include <cmath>
//#include <time.h>
//#pragma warning(disable:4996)
//
//
//#define TEST
//
//#ifdef TEST
//clock_t start2, end2;
//#endif
//
//using namespace std;
//
//int Answer = 0;
//int Size;
//
//vector<int> A, B;
//short dp[5000][5000];
//
//int check_similar(const std::vector<int>& rhs, const int size)
//{
//	int similarity = 0;
//
//	for (int i = 0; i < size; ++i)
//	{
//		if (A[i] == rhs[i])
//		{
//			similarity++;
//		}
//	}
//
//	return similarity;
//}
//
//void flip_vector_with_index(std::vector<int>& v, const int start, const int end)
//{
//	if (start >= end)
//	{
//		return;
//	}
//
//	int range = end - start;
//	int total_flip = range / 2 + 1;
//
//	int tmp;
//	for (int i = 0; i < 0 + total_flip; ++i)
//	{
//		tmp = v[start + i];
//		v[start + i] = v[end - i];
//		v[end - i] = tmp;
//	}
//}
//
//int main(void)
//{
//	int T, test_case;
//	/*
//	The freopen function below opens input.txt file in read only mode, and afterward,
//	the program will read from input.txt file instead of standard(keyboard) input.
//	To test your program, you may save input data in input.txt file,
//	and use freopen function to read from the file when using scanf function.
//	You may remove the comment symbols(//) in the below statement and use it.
//	But before submission, you must remove the freopen function or rewrite comment symbols(//).
//	*/
//	freopen("sample_input.txt", "r", stdin);
//
//	/*
//	If you remove the statement below, your program's output may not be recorded
//	when your program is terminated after the time limit.
//	For safety, please use setbuf(stdout, NULL); statement.
//	*/
//	setbuf(stdout, NULL);
//
//	scanf("%d", &T);
//	for (test_case = 0; test_case < T; test_case++)
//	{
//		Answer = 0;
//		/////////////////////////////////////////////////////////////////////////////////////////////
//		scanf("%d", &Size);
//		int num;
//		for (int a = 0; a < Size; ++a)
//		{
//			scanf("%d", &num);
//			A.push_back(num);
//			//printf("%d  ",A.back());
//		}
//		for (int a = 0; a < Size; ++a)
//		{
//			scanf("%d", &num);
//			B.push_back(num);
//			//printf("%d  ",B.back());
//		}
//		/////////////////////////////////////////////////////////////////////////////////////////////
//
//		vector<int> b_cache;
//		int local_answer = 0;
//		int li;
//		int lj;
//		for (int i = 0; i < Size; ++i)
//		{
//			for (int j = i; j < Size; ++j)
//			{
//				b_cache = B;
//				flip_vector_with_index(b_cache, i, j);
//
//				local_answer = check_similar(b_cache, Size);
//				if (local_answer > Answer)
//				{
//					Answer = local_answer;
//					li = i + 1;
//					lj = j + 1;
//				}
//			}
//		}
//
//
//		/////////////////////////////////////////////////////////////////////////////////////////////
//
//		// Print the answer to standard output(screen).
//
//		printf("Case #%d\n", test_case + 1);
//		printf("%d\n", Answer);
//
//		A.clear();
//		B.clear();
//	}
//
//	return 0;//Your program should return 0 on normal termination.
//}