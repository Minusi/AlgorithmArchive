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
//#include <cstdio>
//
//using namespace std;
//
//int Answer;
//
//#pragma warning(disable : 4996)
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
//	//freopen("sample_input.txt", "r", stdin);
//	scanf("%d", &T);
//
//	int arr[1000001] = { 0 };
//	arr[2] = 1;
//
//	int count;
//	int tmp;
//	for (int i = 3; i < 1000000; i = i + 2)
//	{
//		count = 0;
//		tmp = i;
//		while (tmp != 1)
//		{
//			if (tmp % 2 == 0)
//				tmp /= 2;
//			else
//				++tmp;
//			++count;
//		}
//
//		arr[i] = count + arr[i - 1];
//		arr[i + 1] = count - 1 + arr[i];
//	}
//
//	int n1, n2;
//	for (test_case = 0; test_case < T; test_case++)
//	{
//		Answer = 0;
//		/////////////////////////////////////////////////////////////////////////////////////////////
//		scanf("%d", &n1);
//		scanf("%d", &n2);
//
//		Answer = arr[n2] - arr[n1 - 1];
//		/////////////////////////////////////////////////////////////////////////////////////////////
//
//		// Print the answer to standard output(screen).
//		printf("Case #%d\n", test_case + 1);
//		printf("%d\n", Answer);
//	}
//
//	return 0;//Your program should return 0 on normal termination.
//}





/*
You should use the standard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/

//#include <stdio.h>
//
//#define _USE_MATH_DEFINES
//#include <cmath>
//
//using namespace std;
//
//long double Answer;
//
//#pragma warning(disable : 4996)
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
//	//freopen("sample_input.txt", "r", stdin);
//	scanf("%d", &T);
//
//	for (test_case = 0; test_case < T; test_case++)
//	{
//		Answer = 0;
//		/////////////////////////////////////////////////////////////////////////////////////////////
//		int num_of_rect = 0;
//		int left_[1000];
//		int right_[1000];
//		int height_[1000];
//
//		int r = 0;
//
//		int start_pos = 0;
//		int end_pos = 0;
//		long double horizon_distance = 0;		//
//		long double vertical_distance = 0;	//
//		long double edge_distance = 0;
//		long double total_distance = 0;
//
//		long double circle_x = 0;
//
//
//
//		scanf("%d", &r);
//		scanf("%d", &start_pos);
//		scanf("%d", &end_pos);
//		scanf("%d", &num_of_rect);
//
//		// test
//		//printf("r : %d, ", r);
//		//printf("start : %d, ", start_pos);
//		//printf("end : %d, ", end_pos);
//		//printf("num of rect : %d\n\n", num_of_rect);
//
//		circle_x = start_pos;
//		for (int i = 0; i < num_of_rect; ++i)
//		{
//			scanf("%d", &left_[i]);
//			scanf("%d", &right_[i]);
//			scanf("%d", &height_[i]);
//
//
//			if (height_[i] >= r)
//			{
//				// 등반 전
//				horizon_distance += right_[i] - circle_x - r;
//
//				// 등반 중
//				vertical_distance += 2 * (height_[i] - r);
//				edge_distance += 2 * (2 * M_PI * r / 4);	// 90도이므로
//
//															// 등반 후
//				circle_x = right_[i] + r;
//			}
//			else
//			{
//				// 등반 전
//				long double trapezoid_height = sqrt(2 * (long double)r * height_[i] - pow((long double)height_[i], 2));
//				horizon_distance += left_[i] - trapezoid_height - circle_x;
//
//				// 등반 중
//				horizon_distance += right_[i] - left_[i];
//				long double tmp = r - height_[i];
//				long double round_theta = acos(tmp / r) * 180 / M_PI;
//				edge_distance += 2 * (2 * M_PI * r * round_theta / 360);
//
//				// 등반 후
//				circle_x = right_[i] + trapezoid_height;
//			}
//
//		}
//		horizon_distance += end_pos - circle_x;
//
//		total_distance = horizon_distance + edge_distance + vertical_distance;
//		Answer = total_distance;
//
//		/////////////////////////////////////////////////////////////////////////////////////////////
//
//		// Print the answer to standard output(screen).
//		printf("Case #%d\n", test_case + 1);
//		printf("%Lf\n", Answer);
//	}
//
//	return 0;//Your program should return 0 on normal termination.
//}


/*
You should use the standard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/

//#include <stdio.h>
//#include <time.h>
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//int Answer;
//clock_t start, end;
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
//
//	freopen("sample_input.txt", "r", stdin);
//	long long jmp[320000];
//	jmp[0] = 0;
//
//	start = clock();
//	for (long long i = 1; i < 320000; ++i)
//	{
//		jmp[i] = jmp[i - 1] + i;
//	}
//	end = clock();
//	printf("채우기 : %lf\n", (double)(end - start) / CLOCKS_PER_SEC);
//
//	scanf("%d", &T);
//	for (test_case = 0; test_case < T; test_case++)
//	{
//		start = clock();
//
//		long long x = 0;
//		long long y = 0;
//		scanf("%lld", &x);
//		scanf("%lld", &y);
//
//		int x_jndex[10] = { 0 };
//		long long x_mod[10] = { 0 };
//		int y_jndex[10] = { 0 };
//		long long y_mod[10] = { 0 };
//		int same_index = -1;
//
//
//
//		int maxtot_count = 0;
//
//		Answer = 0;
//
//		/////////////////////////////////////////////////////////////////////////////////////////////
//		for (int i = 1; x >= jmp[i] || y >= jmp[i]; ++i)
//		{
//			if (x >= jmp[i])
//				x_jndex[0]++;
//
//			if (y >= jmp[i])
//				y_jndex[0]++;
//		}
//		x_mod[0] = x - jmp[x_jndex[0]];
//		y_mod[0] = y - jmp[y_jndex[0]];
//
//
//		int i = 1;
//		while (x_jndex[i - 1] == y_jndex[i - 1])
//		{
//			same_index++;
//
//			int xok = 1;
//			int yok = 1;
//
//			for (int j = x_jndex[i - 1]; xok || yok; --j)
//			{
//				if (x_mod[i - 1] >= jmp[j] && xok)
//				{
//					x_jndex[i] = j;
//					x_mod[i] = x_mod[i - 1] - jmp[j];
//					xok = 0;
//				}
//
//				if (y_mod[i - 1] >= jmp[j] && yok)
//				{
//					y_jndex[i] = j;
//					y_mod[i] = y_mod[i - 1] - jmp[j];
//					yok = 0;
//				}
//			}
//			++i;
//		}
//
//		//for (int q = 0; q < 10; ++q)
//		//{
//		//	printf("x_jndex(%d) : %d\t",q, x_jndex[q]);
//		//	printf("\n");
//		//}
//		//for (int q = 0; q < 10; ++q)
//		//{
//		//	printf("y_jndex(%d) : %d\t", q, y_jndex[q]);
//		//	printf("\n");
//		//}
//
//		int k = -1;
//		long long exc_mod = 0;
//		int exc_jndex = 0;
//		int exc_count = 0;
//		while (y_jndex[k + 1] != 0)
//		{
//			exc_mod += jmp[y_jndex[k + 1]];
//			k++;
//		}
//		exc_mod--;
//		exc_jndex = y_jndex[0];
//		printf("exc_mod : %d\n", exc_mod);
//
//		long long loc_mod = y;
//		int loc_count = 0;
//		for (int j = y_jndex[0]; j > 0; --j)
//		{
//			if (loc_mod >= jmp[j])
//			{
//				loc_count += j;
//				loc_mod -= jmp[j];
//			}
//		}
//		printf("loc : %d\n", loc_count);
//		for (int j = exc_jndex; j > 0; --j)
//		{
//			if (exc_mod >= jmp[j])
//			{
//				exc_count += j;
//				exc_mod -= jmp[j];
//			}
//		}
//		printf("exc : %d\n", exc_count);
//
//		if (loc_count > exc_count)
//		{
//			Answer = loc_count;
//		}
//		else
//		{
//			Answer = exc_count;
//		}
//		/////////////////////////////////////////////////////////////////////////////////////////////
//
//		// Print the answer to standard output(screen).
//		printf("Case #%d\n", test_case + 1);
//		printf("%d\n", Answer);
//	}
//
//	return 0;//Your program should return 0 on normal termination.
//}