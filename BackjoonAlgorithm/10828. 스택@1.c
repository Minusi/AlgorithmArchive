//#include <stdio.h>
//#include <string.h>
//#include <malloc.h>
//
//#ifdef _DEBUG
//#include <crtdbg.h>
//#define malloc(size) _malloc_dbg(size, _NORMAL_BLOCK, __FILE__, __LINE__)
//#endif // _DEBUG
//
//typedef struct _node
//{
//	int data;
//	struct _node* prev;
//} node;
//
//typedef struct _stack
//{
//	node* top;
//	int size;
//} stack;
//
//void init_stack(stack** const s)
//{
//	if (s == NULL || *s == NULL)
//		return;
//
//	*s = (stack*)malloc(sizeof(stack));
//	if (*s == NULL)
//		return;
//	
//	(*s)->size = 0;
//	(*s)->top = NULL;
//}
//
//node* create_node(int data)
//{
//	node* new_node = (node*)malloc(sizeof(node));
//	if (new_node == NULL)
//		return NULL;
//
//	new_node->data = data;
//	new_node->prev = NULL;
//	return new_node;
//}
//
//void push_stack(stack** const s, int data)
//{
//	if (s == NULL || *s == NULL)
//		return;
//	
//	node* elem = create_node(data);
//	if (elem == NULL)
//		return;
//
//	elem->prev = (*s)->top;
//	(*s)->top = elem;
//	(*s)->size += 1;
//}
//
//int pop_stack(stack** const s)
//{
//	if (s == NULL || *s == NULL)
//		return -1;
//	
//	if ((*s)->size == 0)
//		return -1;
//	
//	node* remove = (*s)->top;
//	int pop_data = remove->data;
//	(*s)->top = (*s)->top->prev;
//
//	free(remove);
//	(*s)->size -= 1;
//	return pop_data;
//}
//
//int is_empty_stack(stack** const s)
//{
//	if (s == NULL || *s == NULL)
//		return 1;
//
//	return (*s)->size == 0;
//}
//
//int stack_top(stack** const s)
//{
//	if (s == NULL || *s == NULL)
//		return -1;
//
//	if ((*s)->size == 0)
//		return -1;
//
//	return (*s)->top->data;
//}
//
//void release_stack(stack** const s)
//{
//	if (s == NULL || *s == NULL)
//		return;
//
//	while ((*s)->size > 0)
//		pop_stack(s);
//
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
//	int n;
//	scanf("%d", &n);
//
//	stack* s;
//	init_stack(&s);
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
//			printf("%d\n", pop_stack(&s));
//		}
//		else if (strcmp(input, "size") == 0)
//		{
//			printf("%d\n", s->size);
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
//	release_stack(&s);
//
//#ifdef _DEBUG
//	_CrtDumpMemoryLeaks();
//#endif // _DEBUG
//
//	return 0;
//}