//#include <stdio.h>
//#include <malloc.h>
//
//#ifdef _DEBUG
//#include <crtdbg.h>
//#define malloc(size) _malloc_dbg(size, _NORMAL_BLOCK, __FILE__, __LINE__);
//#endif // _DEBUG
//
//typedef struct _node
//{
//	int data;
//	struct _node* prev;
//	struct _node* next;
//
//} node;
//
//typedef struct _dlinked_list
//{
//	node* head;
//	node* tail;
//	size_t size;
//}dlinked_list;
//
//node* create_node(int data)
//{
//	node* new_node = (node*)malloc(sizeof(node));
//	if (new_node == NULL)
//		return NULL;
//
//	new_node->data = data;
//	new_node->prev = NULL;
//	new_node->next = NULL;
//
//	return new_node;
//}
//
//dlinked_list* create_dlinked_list()
//{
//	dlinked_list* dl = (dlinked_list*)malloc(sizeof(dlinked_list));
//	if (dl == NULL)
//		return NULL;
//
//	dl->head = NULL;
//	dl->tail = NULL;
//	dl->size = 0;
//
//	return dl;
//}
//
//void release_dlinked_list(dlinked_list* dl)
//{
//	node* delete;
//	while (dl->head != NULL)
//	{
//		delete = dl->head;
//		dl->head = dl->head->next;
//
//		free(delete);
//		delete = NULL;
//	}
//	dl->head = NULL;
//	dl->tail = NULL;
//	dl->size = 0;
//
//	free(dl);
//	dl = NULL;
//}
//
//void push_front(dlinked_list* dl, int data)
//{
//	if (dl == NULL)
//		return;
//
//	node* new_node = create_node(data);
//	if (new_node == NULL)
//		return;
//
//	if (dl->head == NULL || dl->tail == NULL)
//	{
//		dl->head = dl->tail = new_node;
//		dl->size++;
//		return;
//	}
//
//	node* temp = dl->head;
//	dl->head = new_node;
//	dl->head->next = temp;
//	temp->prev = dl->head;
//	dl->size++;
//}
//
//void push_back(dlinked_list* dl, int data)
//{
//	if (dl == NULL)
//		return;
//
//	node* new_node = create_node(data);
//	if (new_node == NULL)
//		return;
//
//	if (dl->head == NULL || dl->tail == NULL)
//	{
//		dl->head = dl->tail = new_node;
//		dl->size++;
//		return;
//	}
//
//	node* temp = dl->tail;
//	dl->tail = new_node;
//	dl->tail->prev = temp;
//	temp->next = dl->tail;
//	dl->size++;
//}
//
//void pop_front(dlinked_list* dl)
//{
//	if (dl == NULL)
//		return;
//
//	if (dl->head == NULL || dl->tail == NULL)
//		return;
//
//	if (dl->head == dl->tail)
//	{
//		free(dl->head);
//		dl->head = NULL;
//		dl->tail = NULL;
//		dl->size--;
//	}
//	else
//	{
//		node* delete = dl->head;
//		dl->head = dl->head->next;
//		dl->head->prev = NULL;
//
//		free(delete);
//		delete = NULL;
//		dl->size--;
//	}
//}
//
//void pop_back(dlinked_list* dl)
//{
//	if (dl == NULL)
//		return;
//
//	if (dl->head == NULL && dl->tail == NULL)
//		return;
//
//	if (dl->head == dl->tail)
//	{
//		free(dl->tail);
//		dl->tail = NULL;
//		dl->head = NULL;
//		dl->size--;
//	}
//	else
//	{
//		node* delete = dl->tail;
//		dl->tail = dl->tail->prev;
//		dl->tail->next = NULL;
//
//		free(delete);
//		delete = NULL;
//		dl->size--;
//	}
//}
//
//void print_dlist(dlinked_list* dl)
//{
//	if (dl == NULL)
//		return;
//
//	node* iter = dl->head;
//	size_t count = 0;
//	while (iter != NULL)
//	{
//		printf("[%zd] element : %d\n", count, iter->data);
//		iter = iter->next;
//		count++;
//	}
//	printf("*********************\n");
//}
//
//void print_dlist_reverse(dlinked_list* dl)
//{
//	if (dl == NULL)
//		return;
//
//	node* riter = dl->tail;
//	size_t count = dl->size - 1;
//	while (riter != NULL)
//	{
//		printf("[%zd] element : %d\n", count, riter->data);
//		riter = riter->prev;
//		count--;
//	}
//	printf("*********************\n");
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
//	dlinked_list* dl = create_dlinked_list();
//	if (dl == NULL)
//		return 0;
//
//	getchar();
//	push_front(dl, 1);
//	print_dlist(dl);
//	getchar();
//
//	push_back(dl, 2);
//	print_dlist(dl);
//	getchar();
//
//	push_front(dl, 3);
//	print_dlist(dl);
//	print_dlist_reverse(dl);
//	getchar();
//	
//	push_front(dl, 4);
//	push_front(dl, 5);
//	push_front(dl, 6);
//	push_back(dl, 7);
//	print_dlist(dl);
//	getchar();
//
//	pop_front(dl);
//	print_dlist(dl);
//	getchar();
//	pop_front(dl);
//	print_dlist(dl);
//	getchar();
//	pop_back(dl);
//	print_dlist(dl);
//	getchar();
//	pop_back(dl);
//	print_dlist(dl);
//	getchar();
//	pop_back(dl);
//	print_dlist(dl);
//	getchar();
//	pop_back(dl);
//	print_dlist(dl);
//	getchar();
//	pop_back(dl);
//	print_dlist(dl);
//	getchar();
//
//	release_dlinked_list(dl);
//
//#ifdef _DEBUG
//	_CrtDumpMemoryLeaks();
//#endif // _DEBUG
//
//	return 0;
//}