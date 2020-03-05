//#include <stdio.h>
//#include <string.h>
//
//#define MAX_DATA 2000001
//typedef struct _queue
//{
//	int data[MAX_DATA];
//	int front;
//	int back;
//} queue;
//
//void init_queue(queue* q)
//{
//	if (q == NULL)
//		return;
//
//	q->front = 0;
//	q->back = -1;
//}
//
//int empty(queue* q)
//{
//	if (q == NULL)
//		return 1;
//
//	return (((q->back + 1) % MAX_DATA) == q->front);
//}
//void push(queue* q, int x)
//{
//	if (q == NULL)
//		return;
//
//	q->back = (q->back + 1) % MAX_DATA;
//	// return if queue is full
//	if (q->back == q->front - 1)
//		return;
//
//	// push x
//	q->data[q->back] = x;
//}
//
//int pop(queue* q)
//{
//	if (q == NULL)
//		return -1;
//	
//	// return -1 if queue is empty
//	if (empty(q))
//		return -1;
//
//	int pop_data = q->data[q->front];
//	q->front = (q->front + 1) % MAX_DATA;
//	return pop_data;
//}
//
//int size(queue* q)
//{
//	if (q == NULL)
//		return -1;
//
//	// [ ... front ... back ... ]
//	if (empty(q))
//		return 0;
//	else if (q->front <= q->back)
//		return q->back - q->front + 1;
//	// [ ... back ... front ... ]
//	else
//		return (q->back + 1) + (MAX_DATA - q->front);
//}
//
//int front(queue* q)
//{
//	if (q == NULL)
//		return -1;
//	
//	if (empty(q))
//		return -1;
//	else return q->data[q->front];
//}
//
//int back(queue* q)
//{
//	if (q == NULL)
//		return -1;
//
//	if(empty(q))	return -1;
//	else			return q->data[q->back];
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	queue q;
//	init_queue(&q);
//	
//	char input[10] = { 0 };
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%s", input);
//		if (strcmp(input, "push") == 0)
//		{
//			int data;
//			scanf("%d", &data);
//			
//			push(&q, data);
//		}
//		else if (strcmp(input, "pop") == 0)
//		{
//			printf("%d\n", pop(&q));
//		}
//		else if (strcmp(input, "size") == 0)
//		{
//			printf("%d\n", size(&q));
//		}
//		else if (strcmp(input, "empty") == 0)
//		{
//			printf("%d\n", empty(&q));
//		}
//		else if (strcmp(input, "front") == 0)
//		{
//			printf("%d\n", front(&q));
//		}
//		else if (strcmp(input, "back") == 0)
//		{
//			printf("%d\n", back(&q));
//		}
//	}
//	return 0;
//}