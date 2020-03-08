//#include <stdio.h>
//#include <malloc.h>
//#include <string.h>
//
//#ifdef _DEBUG
//#include <crtdbg.h>
//#define malloc(size) _malloc_dbg(size, _NORMAL_BLOCK, __FILE__, __LINE__)
//#endif // _DEBUG
//
//typedef struct _stack
//{
//	int* data;
//	int top;
//	size_t capacity;
//} stack;
//
//void init_stack(stack** const s, size_t capacity)
//{
//	if (s == NULL || *s == NULL)
//		return;
//
//	(*s) = (stack*)malloc(sizeof(stack));
//	if ((*s) == NULL)
//		return;
//
//	if (capacity == 0)	capacity = 10;
//	
//	(*s)->data = (int*)malloc(sizeof(int) * capacity);
//	if ((*s)->data == NULL)
//		return;
//	
//	(*s)->capacity = capacity;
//	(*s)->top = -1;
//}
//
//void init_stack_auto(stack** const s)
//{
//	init_stack(s, 0);
//}
//
//void push_stack(stack** const s, int data)
//{
//	if (s == NULL || *s == NULL)
//		return;
//
//	if ((size_t)(*s)->top + 1 == (*s)->capacity)
//	{
//		// extends mem-block
//		size_t new_capacity = (*s)->capacity * 2;
//		int* new_block = (int*)malloc(sizeof(int) * new_capacity);
//		if (new_block == NULL)
//			return;
//
//		// memcpy
//		int* old_block = (*s)->data;
//		memcpy(new_block, old_block, sizeof(int) * (*s)->capacity);
//
//		// swap and free
//		(*s)->data = new_block;
//		(*s)->capacity = new_capacity;
//		free(old_block);
//	}
//
//	(*s)->top += 1;
//	(*s)->data[(*s)->top] = data;
//}
//
//int pop_stack(stack** const s)
//{
//	if (s == NULL || *s == NULL)
//		return -1;
//
//	if ((*s)->top == -1)
//		return -1;
//
//	int pop_data = (*s)->data[(*s)->top];
//	(*s)->top -= 1;
//	return pop_data;
//}
//
//int stack_size(stack** const s)
//{
//	if (s == NULL || *s == NULL)
//		return -1;
//	
//	return (*s)->top + 1;
//}
//
//int is_empty_stack(stack** const s)
//{
//	if (s == NULL || *s == NULL)
//		return -1;
//
//	return (*s)->top == -1;
//}
//
//int stack_top(stack** const s)
//{
//	if (s == NULL || *s == NULL)
//		return -1;
//	
//	if (is_empty_stack(s))
//		return -1;
//
//	return (*s)->data[(*s)->top];
//}
//
//void release_stack(stack** const s)
//{
//	if (s == NULL || *s == NULL)
//		return;
//
//	free((*s)->data);
//	free(*s);
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
//	stack* s;
//	init_stack_auto(&s);
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
//			int data;
//			scanf("%d", &data);
//
//			push_stack(&s, data);
//		}
//		else if (strcmp(input, "pop") == 0)
//		{
//
//			printf("%d\n",pop_stack(&s));
//		}
//		else if (strcmp(input, "size") == 0)
//		{
//			printf("%d\n", stack_size(&s));
//		}
//		else if (strcmp(input, "empty") == 0)
//		{
//			printf("%d\n", is_empty_stack(&s));
//		}
//		else if (strcmp(input, "top") == 0)
//		{
//			printf("%d\n", stack_top(&s));
//		}
//	}
//	
//	release_stack(&s);
//#ifdef _DEBUG
//	_CrtDumpMemoryLeaks();
//#endif // _DEBUG
//	return 0;
//}