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
//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <deque>
//#include <algorithm>
//#include <time.h>
//#pragma warning(disable:4996)
//
//using namespace std;
//
////#define TEST
//
////clock_t start;
////clock_t end2;
//
//int get_number_length(int num)
//{
//	int num_length = 0;
//
//	if (num == 0)
//	{
//		return 1;
//	}
//
//	for (int i = 1; num >= i; i *= 10)
//	{
//		num_length++;
//	}
//
//	return num_length;
//}
//
//bool check_prime(int num)
//{
//	if (num == 0 || num == 1)
//	{
//		return false;
//	}
//
//	for (int i = 2; i <= sqrt(num); ++i)
//	{
//		if (num % i == 0)
//		{
//			return false;
//		}
//	}
//
//	return true;
//}
//
//#define INPUT_MAX 30000 + 1
//int Answer;
//deque<int> unique_queue;
//int dp_array[INPUT_MAX];
//
//
//// 소수 개수를 반환합니다. 비재귀 함수입니다.
//int dp(const int num_length)
//{
//	if (num_length <= 0)
//	{
//		return 0;
//	}
//
//	// 반환값
//	int ret_prime = 0;
//
//	// 숫자
//	int num = unique_queue.front();
//	int num_cache;
//
//	// 잘린 숫자, 조합 숫자
//	int num_split[5];
//	int num_comb = 0;
//
//	// BFS 관리
//	int max_in_same_level = 0;
//
//	while (unique_queue.empty() == false)
//	{
//		// 원소 pop
//		num_cache = unique_queue.front();
//		unique_queue.pop_front();
//
//
//		// 이미 등록된 배열
//		if (dp_array[num_cache] != -1)
//		{
//			if (dp_array[num_cache] == 0)
//			{
//				continue;
//			}
//			else
//			{
//				//printf("누가 더 클까요 : max_in_same_level(%d) vs dp_array[num_cache](%d)\n", max_in_same_level, dp_array[num_cache]);
//				if (max_in_same_level < dp_array[num_cache])
//				{
//					max_in_same_level = dp_array[num_cache];
//				}
//				continue;
//			}
//		}
//		else
//		{
//			if (check_prime(num_cache) == false)
//			{
//				dp_array[num_cache] = 0;
//				continue;
//			}
//			else
//			{
//				ret_prime++;
//			}
//		}
//
//		if (num_length > 1)
//		{
//			//printf("크기(num_length) : %d\n", num_length);
//			// 숫자를 한 자리 숫자씩 쪼개어 배열에 저장합니다.
//			for (int i = num_length; i > 0; --i)
//			{
//				num_split[num_length - i] = (num_cache % (int)(pow(10, i)) / (pow(10, (i - 1))));
//#ifdef TEST
//				printf("numsplit[%d] : %d\n", num_length - i, num_split[num_length - i]);
//#endif
//			}
//
//			// 숫자를 다시 재조합하고
//			// num_length -  1자리만큼 split하여 vector에 푸쉬합니다.
//			for (int i = 0; i < num_length; ++i)
//			{
//				int j_length = 1;
//
//				for (int j = num_length - 1; j >= 0; --j)
//				{
//
//					if (j != i)
//					{
//						num_comb += num_split[j] * j_length;
//						j_length = j_length * 10;
//					}
//				}
//#ifdef TEST
//				printf("%d일 때 num_comb : %d\n", num_cache, num_comb);
//#endif
//				unique_queue.push_back(num_comb);
//				num_comb = 0;
//			}
//		}
//	}
//
//	ret_prime += max_in_same_level;
//	dp_array[num] = ret_prime;
//	return ret_prime;
//}
//
//int main(int argc, char** argv)
//{
//	int T, test_case;
//	/*
//	The freopen function below opens input.txt file in read only mode, and afterward,
//	the program will read from input.txt file instead of standard(keyboard) input.
//	To test your program, you may save input data in input.txt file,
//	and use freopen function to read from the file when using cin function.
//	You may remove the comment symbols(//) in the below statement and use it.
//	Use #include<cstdio> or #include <stdio.h> to use the function in your program.
//	But before submission, you must remove the freopen function or rewrite comment symbols(//).
//	*/
//
//	freopen("sample_input.txt", "r", stdin);
//	scanf("%d", &T);
//
//	//start = clock();
//
//	int A, B;
//	int score_A, score_B;
//	bool is_prime_A, is_prime_B;
//
//	fill_n(dp_array, INPUT_MAX, -1);
//	dp_array[0] = 0;
//	dp_array[1] = 0;
//
//	for (int i = 2; i < INPUT_MAX; ++i)
//	{
//		unique_queue.push_back(i);
//		dp(get_number_length(i));
//	}
//
//	for (test_case = 0; test_case < T; test_case++)
//	{
//
//		Answer = 0;
//		/////////////////////////////////////////////////////////////////////////////////////////////
//
//		scanf("%d", &A);
//		scanf("%d", &B);
//
//		is_prime_A = check_prime(A);
//		is_prime_B = check_prime(B);
//		score_A = dp_array[A];
//		score_B = dp_array[B];
//
//		//printf(" A : 소수:%d\t, 점수:%d\n", is_prime_A, score_A);
//		//printf(" B : 소수:%d\t, 점수:%d\n", is_prime_B, score_B);
//		if (is_prime_A == true && is_prime_B == true)
//		{
//			if (score_A > score_B)
//			{
//				Answer = 1;
//			}
//			else if (score_B > score_A)
//			{
//				Answer = 2;
//			}
//			else
//			{
//				Answer = 3;
//			}
//		}
//		else if (is_prime_A == false && is_prime_B == true)
//		{
//			Answer = 2;
//		}
//		else if (is_prime_A == true && is_prime_B == false)
//		{
//			Answer = 1;
//		}
//		else
//		{
//			Answer = 3;
//		}
//		/////////////////////////////////////////////////////////////////////////////////////////////
//
//		// Print the answer to standard output(screen).
//		cout << "Case #" << test_case + 1 << endl;
//		cout << Answer << endl;
//	}
//
//	//for (int i = 1; i < 500; ++i)
//	//{
//	//	printf("dp_array[%d] : %d\n", i, dp_array[i]);
//	//}
//
//	//end2 = clock();
//
//	//printf("%0.4lf초", (double)(end2 - start) / 1000);
//
//	return 0;//Your program should return 0 on normal termination.
//}