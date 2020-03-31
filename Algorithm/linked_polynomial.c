//#include <stdio.h>
//#include <malloc.h>
//#ifdef _DEBUG
//#include <crtdbg.h>
//#define malloc(size) _malloca_dbg(size, _NORMAL_BLOCK, __FILE__, __LINE__);
//#endif // _DEBUG
//
//typedef struct _node
//{
//	int coef;
//	int exp;
//	struct _node* next;
//} node;
//
//typedef struct _list
//{
//	node* head;
//} list;
//
//list* create_list()
//{
//	list* new_list = (list*)malloc(sizeof(list));
//	if (new_list == NULL)
//		return NULL;
//
//	new_list->head = NULL;
//	return new_list;
//}
//
//node* create_node(int coef, int exp)
//{
//	node* new_node = (node*)malloc(sizeof(node));
//	if (new_node == NULL)
//		return NULL;
//	
//	new_node->coef = coef;
//	new_node->exp = exp;
//	new_node->next = NULL;
//	return new_node;
//}
//
//void release_list(list* l)
//{
//	if (l == NULL)
//		return;
//
//	node* del_node;
//	while (l->head != NULL)
//	{
//		del_node = l->head;
//		l->head = l->head->next;
//		free(del_node);
//	}
//	free(l);
//}
//
//void push_back(list* l, int coef, int exp)
//{
//	if (l == NULL)
//		return;
//
//	node* new_node = create_node(coef, exp);
//	if (l->head == NULL)
//	{
//		l->head = new_node;
//	}
//	else
//	{
//		node* prev = l->head;
//		while (prev->next != NULL)
//			prev = prev->next;
//		prev->next = new_node;
//	}
//}
//
//void pop_back(list* l)
//{
//	if (l == NULL)
//		return;
//
//	if (l->head == NULL)
//		return;
//
//	node* it = l->head;
//	if (it->next == NULL)
//	{
//		free(it);
//		l->head = NULL;
//	}
//	else
//	{
//		node* prev = it;
//		while (it->next != NULL)
//		{
//			prev = it;
//			it = it->next;
//		}
//		free(it);
//		prev->next = NULL;
//	}
//}
//
//void print_list(list* l)
//{
//	if (l == NULL)
//		return;
//
//	node* it = l->head;
//	if (it == NULL)
//	{
//		printf("[empty]\n");
//		return;
//	}
//	else
//	{
//		while (it != NULL)
//		{
//			printf("%3dx^%d", it->coef, it->exp);
//			it = it->next;
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
//
//	list* l;
//	l = create_list();
//	if (l == NULL)
//		return 0;
//
//	push_back(l, 3, 3);
//	push_back(l, 2, 2);
//	push_back(l, 1, 1);
//	print_list(l);
//	getch();
//
//	pop_back(l);
//	pop_back(l);
//	print_list(l);
//	getch();
//
//	pop_back(l);
//	print_list(l);
//	getch();
//	
//	release_list(l);
//	_CrtDumpMemoryLeaks();
//	return 0;
//}