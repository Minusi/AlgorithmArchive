/*
https://www.acmicpc.net/problem/1018

문제
지민이는 자신의 저택에서 MN개의 단위 정사각형으로 나누어져 있는 M*N크기의 보드를 찾았다. 
어떤 정사각형은 검정색으로 칠해져있고, 나머지는 흰색으로 칠해져 있다. 
지민이는이 보드를 잘라서 8*8크기의 체스판으로 만들려고 한다.

하지만 지민이는 이 보드가 체스판처럼 검정/흰색 패턴이 번갈아가며 
색칠해져있지 않기 때문에 고민에 빠졌다. 
따라서 지민이는 8*8크기의 체스판으로 잘라낸 후에 몇 개의 정사각형을 
다시 칠해야 겠다고 생각했다. 당연히 8*8크기는 아무데서나 골라도 된다.

현재 보드의 색이 어떤지 상태가 주어질 때, 지민이가 8*8크기로 자른 뒤에 
다시 칠해야하는 정사각형 개수의 최솟값을 구하는 프로그램을 작성하시오.

체스판은 각 정사각형이 검정 또는 흰색이며, 변을 공유하는 두 개의 사각형이
같은 색이 아닐 때 이다. 따라서 위 정의에 의하면 체스판의 색은 
항상 두 가지가 가능한데, 하나는 왼쪽 위 코너가 흰색인 것, 검정색인 것 두가지이다.

입력
첫째 줄에 N과 M이 주어진다. M과 N은 8보다 크거나 같고, 50보다 작거나 같은 자연수이다. 
둘째 줄부터 N개 줄에는 체스판의 색 상태가 주어진다. B는 검정색이며, W는 흰색이다.

출력
첫째 줄에 지민이가 8*8크기로 자른 뒤에 다시 칠해야하는 정사각형 개수의 최솟값을 출력한다.

예제 입력 1
8 8
WBWBWBWB
BWBWBWBW
WBWBWBWB
BWBBBWBW
WBWBWBWB
BWBWBWBW
WBWBWBWB
BWBWBWBW

예제 출력 1
1

예제 입력 2
10 13
BBBBBBBBWBWBW
BBBBBBBBBWBWB
BBBBBBBBWBWBW
BBBBBBBBBWBWB
BBBBBBBBWBWBW
BBBBBBBBBWBWB
BBBBBBBBWBWBW
BBBBBBBBBWBWB
WWWWWWWWWWBWB
WWWWWWWWWWBWB

예제 출력 2
12
*/











//#include <iostream>
//
//
//char check_board[50][50];
//
//int min_fix_count = 50 * 50;
//int min_r_offset = -1;
//int min_c_offset = -1;
//
//void count_need_fix_color(int r_start, int c_start, char origin_color)
//{
//	// 8x8 체스판을 검사하기 위한 좌상단 색을 메인색으로 한다.
//	char main_color = origin_color;
//	// 메인색이 아닌 색을 반대색이라고 한다.
//	char count_color;
//	// 메인색을 체크해야 하는지, 반대색을 체크해야하는 지 플래그 
//	bool main_flag = true;
//
//	// 반대색을 설정하기 위한 분기문
//	if (origin_color == 'W')
//	{
//		count_color = 'B';
//	}
//	else
//	{
//		count_color = 'W';
//	}
//
//	int main_color_fix_count = 0;
//	int count_color_fix_count = 0;
//	int local_min_fix_count = 2500;
//
//	// 체크 시작
//	for (int i = 0; i < 8; ++i)
//	{
//		for (int j = 0; j < 8; ++j)
//		{
//			if (main_flag)
//			{
//				if (main_color != check_board[r_start + i][c_start + j])
//				{
//					main_color_fix_count++;
//				}
//			}
//			else
//			{
//				if (count_color != check_board[r_start + i][c_start + j])
//				{
//					main_color_fix_count++;
//				}
//			}
//
//			main_flag = !main_flag;
//		}
//
//		main_flag = !main_flag;
//	}
//
//
//
//	main_flag = true;
//
//	char temp_color = main_color;
//	main_color = count_color;
//	count_color = temp_color;
//
//
//
//	// 체크 시작
//	for (int i = 0; i < 8; ++i)
//	{
//		for (int j = 0; j < 8; ++j)
//		{
//			if (main_flag)
//			{
//				if (main_color != check_board[r_start + i][c_start + j])
//				{
//					count_color_fix_count++;
//				}
//			}
//			else
//			{
//				if (count_color != check_board[r_start + i][c_start + j])
//				{
//					count_color_fix_count++;
//				}
//			}
//
//			main_flag = !main_flag;
//		}
//
//		main_flag = !main_flag;
//	}
//
//
//
//
//
//	//	std::cout << r_start << "," << c_start << " :: " << main_color_fix_count << " vs " << count_color_fix_count << std::endl;
//	main_color_fix_count > count_color_fix_count ?
//		local_min_fix_count = count_color_fix_count :
//		local_min_fix_count = main_color_fix_count;
//
//	if (local_min_fix_count < min_fix_count)
//	{
//		min_fix_count = local_min_fix_count;
//		min_r_offset = r_start;
//		min_c_offset = c_start;
//	}
//
//}
//
//int main()
//{
//	FILE* input;
//	//	freopen_s(&input, "sample.txt", "r", stdin);
//
//	int N, M;
//	std::cin >> N;
//	std::cin >> M;
//
//	char* Mbuffer = new char[M + 1];
//
//	for (int i = 0; i < N; ++i)
//	{
//		std::cin >> Mbuffer;
//		for (int j = 0; j < M; ++j)
//		{
//			check_board[i][j] = Mbuffer[j];
//		}
//	}
//
//	for (int i = 0; i < N - 7; ++i)
//	{
//		for (int j = 0; j < M - 7; ++j)
//		{
//			count_need_fix_color(i, j, check_board[i][j]);
//		}
//	}
//
//	std::cout << min_fix_count;
//}
// 