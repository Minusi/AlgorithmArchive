//#include <stdio.h>
//#include <malloc.h>
//#include <string.h>
//
//#ifdef _DEBUG
//#include <crtdbg.h>
//#define malloc(s) _malloc_dbg(s, _NORMAL_BLOCK, __FILE__, __LINE__)
//#endif // _DEBUG
//
//
//
//typedef struct _node
//{
//	int data;
//	struct _node* next;
//} node;
//
//typedef struct _queue
//{
//	node* front;
//	node* back;
//	int size;
//} queue;
//
//// do not use pointer for input argument
//void init_queue(queue* q)
//{
//	if (q == NULL)
//		return;
//
//	q->front = NULL;
//	q->back = NULL;
//	q->size = 0;
//}
//
//node* create_node(int data)
//{
//	node* elem = (node*)malloc(sizeof(node));
//	if (elem == NULL)
//		return NULL;
//
//	elem->data = data;
//	elem->next = NULL;
//	return elem;
//}
//
//void push(queue* q, int data)
//{
//	if (q == NULL)
//		return;
//
//	node* elem = create_node(data);
//	if (elem == NULL)
//		return;
//
//	if (data == 3)
//		data = 3;
//
//	if (q->size == 0)
//		q->front = q->back = elem;
//	else
//	{
//		q->back->next = elem;
//		q->back = elem;
//	}
//
//	++q->size;
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
//	node* remove = q->front;
//	q->front = q->front->next;
//	--q->size;
//
//	// free memory
//	int data = remove->data;
//	free(remove);
//	return data;
//}
//
//int empty(queue* q)
//{
//	if (q == NULL)
//		return 1;
//	
//	return (q->size == 0 ? 1 : 0);
//}
//
//int front(queue* q)
//{
//	if (q == NULL)
//		return -1;
//
//	return q->size == 0 ? -1 : q->front->data;
//}
//
//int back(queue* q)
//{
//	if (q == NULL)
//		return -1;
//	return q->size == 0 ? -1 : q->back->data;
//}
//
//void release_queue(queue* q)
//{
//	if (q == NULL)
//		return;
//
//	while (q->size > 0)
//		pop(q);
//}
//
//
//int main()
//{
//#ifdef DEBUG
//	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
//#endif // DEBUG
//
//	queue qu;
//	init_queue(&qu);
//
//	int n;
//	scanf("%d", &n);
//
//	char input[10] = { 0 };
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%s", input);
//		if (strcmp(input, "push") == 0)
//		{
//			int input_data;
//			scanf("%d\n", &input_data);
//
//			push(&qu, input_data);
//		}
//		else if (strcmp(input, "pop") == 0)
//		{
//			printf("%d\n", pop(&qu));
//		}
//		else if (strcmp(input, "size") == 0)
//		{
//			printf("%d\n", qu.size);
//		}
//		else if (strcmp(input, "empty") == 0)
//		{
//			printf("%d\n", empty(&qu));
//		}
//		else if (strcmp(input, "front") == 0)
//		{
//			printf("%d\n", front(&qu));
//		}
//		else if (strcmp(input, "back") == 0)
//		{
//			printf("%d\n", back(&qu));
//		}
//	}
//
//	release_queue(&qu);
//#ifdef _DEBUG
//	_CrtDumpMemoryLeaks();
//#endif // DEBUG
//	return 0;
//}