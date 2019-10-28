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
//#include <deque>
//#include <ctime>
//#pragma warning(disable:4996)
//using namespace std;
//
//struct Point
//{
//	Point() = default;
//	Point(short in_r, short in_c) : r(in_r), c(in_c)
//	{
//	}
//
//	bool operator==(Point& rhs)
//	{
//		if (r == rhs.r && c == rhs.c)
//			return true;
//
//		return false;
//	}
//
//	short r;
//	short c;
//};
//
//enum PointType
//{
//	NONE,
//	LEFTTOP,
//	RIGHTTOP,
//	RIGHTBOT,
//	LEFTBOT,
//
//	TOPALONE,
//	RIGHTALONE,
//	BOTALONE,
//	LEFTALONE,
//
//	TOPWITH,
//	RIGHTWITH,
//	BOTWITH,
//	LEFTWITH
//};
//
//struct Tile
//{
//	short num_fac_around = 0;
//	bool locate_fac = false;
//	vector<Point> p_fac;
//};
//
//vector<Point> Answer;
//
//#define ROW 50
//#define COL 500
//Tile fac[ROW][COL];
//int total_bomb_num = 0;
//int total_fac_num = 0;
//
//
//
//void register_fac_mark(Point p, const int max_row, const int max_col)
//{
//	int update_left = (p.c - 1) >= 0 ? p.c - 1 : 0;
//	int update_top = (p.r - 1) >= 0 ? p.r - 1 : 0;
//
//	int update_right = (p.c + 1) < max_col ? p.c + 1 : max_col - 1;
//	int update_bottom = (p.r + 1) < max_row ? p.r + 1 : max_row - 1;
//
//	for (int i = update_top; i <= update_bottom; ++i)
//	{
//		for (int j = update_left; j <= update_right; ++j)
//		{
//			fac[i][j].num_fac_around++;
//			fac[i][j].p_fac.push_back(p);
//		}
//	}
//
//	total_fac_num++;
//	fac[p.r][p.c].locate_fac = true;
//}
//
//void clear_fac_mark(Point p, const int max_row, const int max_col)
//{
//	void print_fac_point(int row_idx, int col_idx);
//
//	int update_left = (p.c - 1) >= 0 ? p.c - 1 : 0;
//	int update_top = (p.r - 1) >= 0 ? p.r - 1 : 0;
//
//	int update_right = (p.c + 1) < max_col ? p.c + 1 : max_col - 1;
//	int update_bottom = (p.r + 1) < max_row ? p.r + 1 : max_row - 1;
//
//	for (int i = update_top; i <= update_bottom; ++i)
//	{
//		for (int j = update_left; j <= update_right; ++j)
//		{
//			fac[i][j].num_fac_around--;
//
//			for (auto it = fac[i][j].p_fac.begin(); it != fac[i][j].p_fac.end(); ++it)
//			{
//				if (it->r == p.r && it->c == p.c)
//				{
//					it = fac[i][j].p_fac.erase(it);
//					break;
//				}
//			}
//		}
//	}
//
//	total_fac_num--;
//	fac[p.r][p.c].locate_fac = false;
//}
//
//// 지점에 3x3 초토화 폭탄을 떨굽니다.
//void launch_bomb(Point p, const int max_row, const int max_col)
//{
//	int update_left = (p.c - 1) >= 0 ? p.c - 1 : 0;
//	int update_top = (p.r - 1) >= 0 ? p.r - 1 : 0;
//
//	int update_right = (p.c + 1) < max_col ? p.c + 1 : max_col - 1;
//	int update_bottom = (p.r + 1) < max_row ? p.r + 1 : max_row - 1;
//
//	for (int i = update_top; i <= update_bottom; ++i)
//	{
//		for (int j = update_left; j <= update_right; ++j)
//		{
//			if (fac[i][j].locate_fac == true)
//			{
//				clear_fac_mark(Point(i, j), max_row, max_col);
//			}
//		}
//	}
//
//	total_bomb_num++;
//}
//
//// 팩토리가 있는 부지들 중에 가장 우선적으로 폭격 알고리즘을 적용할 팩토리 위치를 반환합니다.
//const Point set_priority_bomb(const int max_row, const int max_col, PointType& inout_type)
//{
//	int upmost_index = -1, upmost_cache = -1;
//	int rightmost_index = -1, rightmost_cache = -1;
//	int downmost_index = -1, downmost_cache = -1;
//	int leftmost_index = -1, leftmost_cache = -1;
//	vector<Point> upmost;
//	vector<Point> rightmost;
//	vector<Point> downmost;
//	vector<Point> leftmost;
//
//	for (int i = 0; i < max_row; ++i)
//	{
//		if (upmost_index != -1 && rightmost_index != -1)
//			break;
//
//		for (int j = 0; j < max_col; ++j)
//		{
//			//upmost
//			if (fac[i][j].locate_fac == true)
//			{
//				if (upmost_index == -1)
//				{
//					upmost_cache = i;
//					upmost.push_back(Point(i, j));
//				}
//			}
//
//			//downmost
//			if (fac[max_row - i - 1][max_col - j - 1].locate_fac == true)
//			{
//				if (downmost_index == -1)
//				{
//					downmost_cache = i;
//					downmost.push_back(Point(max_row - i - 1, max_col - j - 1));
//				}
//			}
//
//		}
//
//		if (upmost_cache != -1)
//			upmost_index = upmost_cache;
//
//		if (downmost_cache != -1)
//			downmost_index = downmost_cache;
//
//	}
//
//	for (int j = 0; j < max_col; ++j)
//	{
//		if (leftmost_index != -1 && rightmost_index != -1)
//			break;
//
//		for (int i = 0; i < max_row; ++i)
//		{
//			if (fac[i][j].locate_fac == true)
//			{
//				if (leftmost_index == -1)
//				{
//					leftmost_cache = j;
//					leftmost.push_back(Point(i, j));
//				}
//			}
//
//			if (fac[max_row - i - 1][max_col - j - 1].locate_fac == true)
//			{
//				if (rightmost_index == -1)
//				{
//					rightmost_cache = j;
//					rightmost.push_back(Point(max_row - i - 1, max_col - j - 1));
//				}
//			}
//		}
//
//		if (leftmost_cache != -1)
//			leftmost_index = leftmost_cache;
//
//		if (rightmost_cache != -1)
//			rightmost_index = rightmost_cache;
//	}
//
//	// 출력
//	//printf("upmost : ");
//	//for (auto it = upmost.begin(); it != upmost.end(); ++it)
//	//{
//	//	printf("%d, %d\n", it->r, it->c);
//	//}
//	//printf("leftmost : ");
//	//for (auto it = leftmost.begin(); it != leftmost.end(); ++it)
//	//{
//	//	printf("%d, %d\n", it->r, it->c);
//	//}
//	//printf("downmost : ");
//	//for (auto it = downmost.begin(); it != downmost.end(); ++it)
//	//{
//	//	printf("%d, %d\n", it->r, it->c);
//	//}
//	//printf("rightmost : ");
//	//for (auto it = rightmost.begin(); it != rightmost.end(); ++it)
//	//{
//	//	printf("%d, %d\n", it->r, it->c);
//	//}
//
//	if (upmost[0] == leftmost[0])
//	{
//		inout_type = LEFTTOP;
//		return upmost[0];
//	}
//
//	if (upmost.back() == rightmost.back())
//	{
//		inout_type = RIGHTTOP;
//		return upmost.back();
//	}
//
//	if (downmost[0] == rightmost[0])
//	{
//		inout_type = RIGHTBOT;
//		return downmost[0];
//	}
//
//	if (downmost.back() == leftmost.back())
//	{
//		inout_type = LEFTBOT;
//		return downmost.back();
//	}
//
//
//	Point last_return_point;
//	bool b_init_lrp = false;
//	// 혼자 있는 upmost
//	for (auto it = upmost.begin(); it != upmost.end(); ++it)
//	{
//		if (next(it) == upmost.end())
//		{
//			inout_type = TOPALONE;
//			return *it;
//		}
//
//		if (it->c == (it[1].c) - 1)
//		{
//			if (b_init_lrp == false)
//			{
//				last_return_point = *it;
//				b_init_lrp = true;
//			}
//			++it;
//			continue;
//		}
//		else
//		{
//			return *it;
//		}
//	}
//
//	// 혼자 있는 rightmost
//	for (auto it = rightmost.rbegin(); it != rightmost.rend(); ++it)
//	{
//		if (next(it) == rightmost.rend())
//		{
//			inout_type = RIGHTALONE;
//			return *it;
//		}
//
//		if (it->r == (it[1].r) - 1)
//		{
//			++it;
//			continue;
//		}
//		else
//			return *it;
//	}
//
//	// 혼자 있는 downmost
//	for (auto it = downmost.begin(); it != downmost.end(); ++it)
//	{
//		if (next(it) == downmost.end())
//		{
//			inout_type = BOTALONE;
//			return *it;
//		}
//
//		if (it->c == (it[1].c) + 1)
//		{
//			++it;
//			continue;
//		}
//		else
//			return *it;
//	}
//
//	// 혼자 있는 leftmost
//	for (auto it = leftmost.rbegin(); it != leftmost.rend(); ++it)
//	{
//		if (next(it) == leftmost.rend())
//		{
//			inout_type = LEFTALONE;
//			return *it;
//		}
//
//		if (it->r == (it[1].r) + 1)
//		{
//			++it;
//			continue;
//		}
//		else
//			return *it;
//	}
//
//
//	return last_return_point;
//}
//
//
//const Point get_top_fac_around(const Point& p, const int max_row, const int max_col)
//{
//	int update_left = (p.c - 1) >= 0 ? p.c - 1 : 0;
//	int update_top = (p.r - 1) >= 0 ? p.r - 1 : 0;
//
//	int update_right = (p.c + 1) < max_col ? p.c + 1 : max_col - 1;
//	int update_bottom = (p.r + 1) < max_row ? p.r + 1 : max_row - 1;
//
//	int top_fac_around = -1;
//	Point top_fac_point(-1, -1);
//
//
//	int tmp = 0;
//	for (int i = update_top; i <= update_bottom; ++i)
//	{
//		for (int j = update_left; j <= update_right; ++j)
//		{
//			//printf("%d : %d(%d,%d)\n", tmp++, fac[i][j].num_fac_around, i,j);
//			if (top_fac_around < fac[i][j].num_fac_around)
//			{
//				top_fac_around = fac[i][j].num_fac_around;
//				top_fac_point.r = i;
//				top_fac_point.c = j;
//			}
//		}
//	}
//
//	//printf("result : %d, %d\n", top_fac_point.r, top_fac_point.c);
//	return top_fac_point;
//}
//// 시계 방향으로 계산합니다.
//const Point calculate_bomb_location(const Point& target, const int max_row, const int max_col, const PointType type)
//{
//	if (type == NONE)
//	{
//		return Point(-1, -1);
//	}
//
//	Point result;
//
//	switch (type)
//	{
//	case LEFTTOP:
//		launch_bomb(Point(target.r + 1, target.c + 1), max_row, max_col);
//		return Point(target.r + 1, target.c + 1);
//		break;
//	case RIGHTTOP:
//		launch_bomb(Point(target.r + 1, target.c - 1), max_row, max_col);
//		return Point(target.r + 1, target.c - 1);
//		break;
//	case RIGHTBOT:
//		launch_bomb(Point(target.r - 1, target.c - 1), max_row, max_col);
//		return Point(target.r - 1, target.c - 1);
//		break;
//	case LEFTBOT:
//		launch_bomb(Point(target.r - 1, target.c + 1), max_row, max_col);
//		return Point(target.r - 1, target.c + 1);
//		break;
//	default:
//		result = get_top_fac_around(target, max_row, max_col);
//		launch_bomb(result, max_row, max_col);
//		return result;
//		break;
//	}
//
//}
//
//
//
//void print_map(int row, int col)
//{
//	for (int i = 0; i < row; ++i)
//	{
//		for (int j = 0; j < col; ++j)
//		{
//			printf("%d", fac[i][j].num_fac_around);
//		}
//		printf("\n");
//	}
//}
//
//void print_map_onlyfac(int row, int col)
//{
//	for (int i = 0; i < row; ++i)
//	{
//		for (int j = 0; j < col; ++j)
//		{
//			if (fac[i][j].locate_fac == true)
//			{
//				printf("T");
//			}
//			else
//			{
//				printf("0");
//			}
//		}
//		printf("\n");
//	}
//}
//
//void print_fac_point(int row_idx, int col_idx)
//{
//	printf("fac_point in %d,%d\n", row_idx, col_idx);
//	for (auto it = fac[row_idx][col_idx].p_fac.begin(); it != fac[row_idx][col_idx].p_fac.end(); ++it)
//	{
//		printf("%d %d\n", it->r, it->c);
//	}
//}
//
//
//
//
//
//
//
//int main(void)
//{
//	//clock_t start4, end4;
//	int T, test_case;
//	int M, N;
//	char* buf;
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
//	//start4 = clock();
//	setbuf(stdout, NULL);
//
//	scanf("%d", &T);
//	for (test_case = 0; test_case < T; test_case++)
//	{
//		total_bomb_num = 0;
//		Answer.clear();
//
//		scanf("%d", &M);
//		scanf("%d", &N);
//		buf = new char[N + 1];
//
//		for (int i = 0; i < M; ++i)
//		{
//			scanf("%s", buf);
//			for (int j = 0; j < N; ++j)
//			{
//				if (buf[j] == '1')
//				{
//					Point p(i, j);
//					register_fac_mark(p, M, N);
//				}
//			}
//		}
//
//		//print_map(M, N);
//		//	printf("\n");
//		//print_map_onlyfac(M, N);
//
//		PointType type = NONE;
//		Point target;
//		Point answer;
//
//		while (total_fac_num > 0)
//		{
//			target = set_priority_bomb(M, N, type);
//
//			//printf("\n");
//			//printf("target : %d, %d\n", target.r, target.c);
//			//printf("type : %d\n", type);
//			answer = calculate_bomb_location(target, M, N, type);
//			//printf("answer : %d, %d\n", answer.r, answer.c);
//
//			//print_map(M, N);
//			//print_map_onlyfac(M, N);
//
//			Answer.push_back(answer);
//		}
//
//		/////////////////////////////////////////////////////////////////////////////////////////////
//		/*
//		Implement your algorithm here.
//		The answer to the case will be stored in variable Answer.
//		*/
//		/////////////////////////////////////////////////////////////////////////////////////////////
//
//		// Print the answer to standard output(screen).
//
//		printf("Case #%d\n", test_case + 1);
//		printf("%d\n", total_bomb_num);
//		for (auto it = Answer.begin(); it != Answer.end(); ++it)
//		{
//			printf("%d %d\n", it->r, it->c);
//		}
//
//		fflush(stdout);
//
//	}
//
//	//end4 = clock();
//
//	return 0;//Your program should return 0 on normal termination.
//}