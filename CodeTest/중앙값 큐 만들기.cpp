//#include <stdio.h>
//#include <queue>
//#include <functional>
//#include <cstring>
//using namespace std;
//
///* [Notice for C/C++]
//* - 기본 제공되는 뼈대 코드는 입출력의 이해를 돕기위해 제공되었습니다.
//* - 뼈대코드의 활용은 선택사항이며 코드를 직접 작성하여도 무관합니다.
//*
//* - 데이터의 입력과 출력은 stdin과 stdout을 통하고 scanf와 printf를 사용하세요
//* - 별도의 병렬 처리나 시스템콜, 네트워크/파일접근 등을 하지 마세요
//* - main은 int형으로 선언한 후 return 0를 항상 하는 것을 권유합니다
//* - 지역변수 배열 크기에 의한 Stack Overflow 에러에 주의하세요
//* - (C++) cin/cout보다 scanf/printf를 사용하기를 권장합니다. (입출력 성능에 의한 이유)
//*/
//#pragma warning(disable:4996)
//
//
///* 큐의 좌측에 해당되는 MaxQueue의 top값이 중앙값임을 알려주는 중앙값 큐입니다. */
//class MedianQueue
//{
//public:
//	/* 중앙값 큐에 Push합니다. 이후 중앙값을 출력합니다. */
//	void Push(int X)
//	{
//		/* 현재 저장된 수가 짝수개일 경우, MinQueue에 값을 넣고 MinQueue의 top 값 1개를 MaxQueue로 시프트*/
//		if (Size_Internal() % 2 == 0)
//		{
//			MinQueue.push(X);
//			MaxQueue.push(MinQueue.top());
//			MinQueue.pop();
//		}
//		/* 현재 저장된 수가 짝수개일 경우, MaxQueue에 값을 넣고 MaxQueue의 top 값 1개를 MinQueue로 시프트*/
//		else
//		{
//			MaxQueue.push(X);
//			MinQueue.push(MaxQueue.top());
//			MaxQueue.pop();
//		}
//
//		printf("%d\n", MaxQueue.top());
//	}
//
//	/* 중앙값 큐의 Pop을 수행합니다. 중앙값이 빠집니다. 이후 중앙값이 있다면, 중앙값을
//	 * 없다면, NO ITEM을 출력합니다. */
//	void Pop()
//	{
//		if (Size_Internal() == 0)
//		{
//			printf("NO ITEM\n");
//			return;
//		}
//
//		MaxQueue.pop();
//		/* pop 이후, 중앙값 큐의 개수가 홀수 개이면, 우측 MinQueue 값 하나를 MaxQueue로 시프트 */
//		if (Size_Internal() % 2 == 1)
//		{
//			MaxQueue.push(MinQueue.top());
//			MinQueue.pop();
//		}
//
//		if (Size_Internal() == 0)
//			printf("NO ITEM\n");
//		else
//			printf("%d\n", MaxQueue.top());
//	}
//
//	/* 큐의 총 사이즈를 출력합니다. */
//	void Size()
//	{
//		printf("%d\n", Size_Internal());
//	}
//
//private:
//	/* 큐 사이즈를 반환하는 Size 내부 함수 */
//	int Size_Internal()
//	{
//		int QueueSize = MaxQueue.size() + MinQueue.size();
//		return QueueSize;
//	}
//
//private:
//	/* 중앙값 + 1 ~최대값 저장용 큐 */
//	priority_queue<int, vector<int>, greater<int>> MinQueue;
//	/* 최솟값 ~ 중앙값 저장용 큐 */
//	priority_queue<int, vector<int>, less<int>> MaxQueue;
//};
//
//int main()
//{   //프로그램의 시작부 
//
//	int N;
//	scanf("%d", &N);
//
//	MedianQueue MidQueue;
//
//	char Buffer[100];
//	int Value;
//	while (N--)
//	{
//		/* 입력 인터프리터 */
//		scanf("%s", Buffer);
//		if (strcmp(Buffer, "PUSH") == 0)
//		{
//			scanf("%d", &Value);
//			MidQueue.Push(Value);
//		}
//		else if (strcmp(Buffer, "POP") == 0)
//		{
//			MidQueue.Pop();
//		}
//		else if(strcmp(Buffer, "SIZE") == 0)
//		{
//			MidQueue.Size();
//		}
//	}
//
//	return 0;
//}