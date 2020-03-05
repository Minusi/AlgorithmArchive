//#include <stdio.h>
//#include <malloc.h>
//#include <string.h>
//
//#ifdef _DEBUG
//#include <crtdbg.h>
//#define malloc(size) _malloc_dbg(size, _NORMAL_BLOCK, __FILE__, __LINE__)
//#endif // _DEBUG
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
//	size_t size;
//} queue;
//
//void init_queue(queue** q)
//{
//	if (q == NULL || *q == NULL)
//		return;
//
//	*q = (queue*)malloc(sizeof(queue));
//	if (*q == NULL)	return;
//
//	(*q)->front = NULL;
//	(*q)->back = NULL;
//	(*q)->size = 0;
//}
//
//node* create_node(int data)
//{
//	node* elem = (node*)malloc(sizeof(node));
//	if (elem == NULL)	return NULL;
//	
//	elem->data = data;
//	elem->next = NULL;
//
//	return elem;
//}
//void push_queue(queue** q, int data)
//{
//	if (q == NULL || *q == NULL)
//		return;
//	
//	node* add = create_node(data);
//	if (add == NULL)	return;
//
//	if ((*q)->size == 0)
//		(*q)->front = (*q)->back = add;
//	else
//	{
//		(*q)->back->next = add;
//		(*q)->back = add;
//	}
//	
//	(*q)->size += 1;
//}
//
//int pop_queue(queue** q)
//{
//	if (q == NULL || *q == NULL)
//		return -1;
//
//	if ((*q)->size == 0)	return -1;
//	
//	node* remove = (*q)->front;
//	(*q)->front = (*q)->front->next;
//	
//	int data = remove->data;
//	free(remove);
//	(*q)->size -= 1;
//
//	return data;
//}
//
//int is_empty_queue(queue** q)
//{
//	if (q == NULL || *q == NULL)
//		return 1;
//
//	return (*q)->size == 0 ? 1 : 0;
//}
//
//int queue_front(queue** q)
//{
//	if (q == NULL || *q == NULL)
//		return -1;
//	
//	if ((*q)->size == 0)	return -1;
//	else					return (*q)->front->data;
//}
//
//int queue_back(queue** q)
//{
//	if (q == NULL || *q == NULL)
//		return -1;
//
//	if ((*q)->size == 0)	return -1;
//	else					return (*q)->back->data;
//}
//
//void release_queue(queue** q)
//{
//	if (q == NULL || *q == NULL)
//		return;
//
//	while ((*q)->size > 0)
//		pop_queue(q);
//
//	free(*q);
//	q = NULL;
//}
//
//
//
//int main()
//{
//#ifdef _DEBUG
//	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
//#endif // _DEBUG
//
//	queue* qu;
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
//			push_queue(&qu, input_data);
//		}
//		else if (strcmp(input, "pop") == 0)
//		{
//			printf("%d\n", pop_queue(&qu));
//		}
//		else if (strcmp(input, "size") == 0)
//		{
//			printf("%zd\n", qu->size);
//		}
//		else if (strcmp(input, "empty") == 0)
//		{
//			printf("%d\n", is_empty_queue(&qu));
//		}
//		else if (strcmp(input, "front") == 0)
//		{
//			printf("%d\n", queue_front(&qu));
//		}
//		else if (strcmp(input, "back") == 0)
//		{
//			printf("%d\n", queue_back(&qu));
//		}
//	}
//
//	release_queue(&qu);
//
//#ifdef _DEBUG
//	_CrtDumpMemoryLeaks();
//#endif // _DEBUG
//
//	return 0;
//}