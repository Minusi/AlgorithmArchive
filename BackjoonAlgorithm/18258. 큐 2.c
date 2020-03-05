//#include <stdio.h>
//#include <malloc.h>
//#include <string.h>
//
//const int TRUE = 1;
//const int FALSE = 0;
//typedef struct __queue
//{
//	int front, back;
//	int* data;
//
//	// current number of data holding
//	size_t size;
//	// num of data holding available
//	// if size >= capacity, capacity increased double
//	size_t capacity;
//} queue;
//
//void init_queue_cap(queue* q, int capacity)
//{
//	if (q == NULL)
//		return;
//
//	q->front = 0;
//	q->back = -1;
//	q->size = 0;
//	q->capacity = (capacity == 0) ? 10 : capacity;
//	q->data = (int*)malloc(sizeof(int) * q->capacity);
//}
//
//void init_queue(queue* q)
//{
//	init_queue_cap(q, 0);
//}
//
//void free_queue(queue* q)
//{
//	if (q == NULL)
//		return;
//
//	free(q->data);
//}
//
//void push(queue* q, int x)
//{
//	if (q == NULL)
//		return;
//	
//	// increase back to input element
//	q->back = (q->back + 1) == q->capacity ? 0 : q->back + 1;
//
//	// extend data mem blocks if queue is full
//	if (q->back == q->front && q->size > 0)
//	{
//		size_t new_capacity = q->capacity * 2;
//		int* new_data = (int*)malloc(sizeof(int) * new_capacity * 2);
//		if (new_data == NULL)
//			return;
//
//		if (q->back == 0)
//		{
//			memcpy(new_data, q->data, sizeof(int) * q->capacity);
//		}
//		else
//		{
//			size_t seg_size = q->capacity - q->front;
//			// copy to [front ... end of data array]
//			memcpy(new_data, (q->data) + q->front, sizeof(int) * seg_size);
//			// copy to [0 ... front]
//			int a = 5;
//			memcpy(new_data + seg_size, q->data, sizeof(int) * q->front);
//		}
//
//		// swap and free
//		int* tmp_data = q->data;
//		q->data = new_data;
//		free(tmp_data);
//
//		// update properties
//		q->back = q->capacity;
//		q->front = 0;
//		q->capacity = new_capacity;
//	}
//
//	q->data[q->back] = x;
//	q->size++;
//}
//
//int pop(queue* q)
//{
//	if (q == NULL)
//		return -1;
//
//	if (q->size == 0)
//		return -1;
//
//	int ret_data = q->data[q->front];
//	q->front = ((q->front + 1) == q->capacity) ? 0 : q->front + 1;
//	q->size--;
//
//	return ret_data;
//}
//
//size_t queue_size(queue* q)
//{
//	if (q == NULL)
//		return 0;
//	else
//		return q->size;
//}
//
//int empty(queue* q)
//{
//	if (q == NULL)
//		return TRUE;
//	return q->size == 0;
//}
//
//int front(queue* q)
//{
//	if (q == NULL)
//		return -1;
//
//	if (q->size == 0)
//		return -1;
//
//	return q->data[q->front];
//}
//
//int back(queue* q)
//{
//	if (q == NULL)
//		return -1;
//
//	if (q->size == 0)
//		return -1;
//	
//	return q->data[q->back];
//}
//
//void print_queue(queue* q)
//{
//#ifdef DEBUG
//	if (q == NULL)
//		return;
//
//	// print queue elements
//	printf("elem : ");
//	for (int i = 0; i < q->size; ++i)
//		printf("%d | ", q->data[(q->front + i) % q->capacity]);
//	printf("\n");
//#endif
//}
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
//			int input_data;
//			scanf("%d", &input_data);
//			
//			push(&q, input_data);
//			// DEBUG
//			print_queue(&q);
//		}
//		else if (strcmp(input, "pop") == 0)
//		{
//			printf("%d\n", pop(&q));
//			// DEBUG
//			print_queue(&q);
//		}
//		else if (strcmp(input, "size") == 0)
//		{
//			printf("%lld\n", queue_size(&q));
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
//
//	free_queue(&q);
//	return 0;
//}