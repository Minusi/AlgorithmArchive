//#include <stdio.h>
//#include <malloc.h>
//#ifdef _DEBUG
//#include <crtdbg.h>	
//#define malloc(size) _malloc_dbg(size, _NORMAL_BLOCK, __FILE__, __LINE__);
//#endif // _DEBUG
//
//#include <string.h>
//
//typedef struct _node
//{
//	int data;
//	struct _node* next;
//} node;
//
//typedef struct _slinked_list
//{
//	node* head;
//	size_t size;
//} slinked_list;
//
//
//node* create_node(int data)
//{
//	node* new_node = (node*)malloc(sizeof(node));
//	if (new_node != NULL)
//	{
//		new_node->data = data;
//		new_node->next = NULL;
//	}
//	return new_node;
//}
//
//slinked_list* create_slinked_list()
//{
//	slinked_list* new_list = (slinked_list*)malloc(sizeof(slinked_list));
//	if (new_list != NULL)
//	{
//		new_list->head = NULL;
//		new_list->size = 0;
//	}
//	return new_list;
//}
//
//void push_back(slinked_list* list, int data)
//{
//	if (list == NULL)
//		return;
//
//	node* new_node = create_node(data);
//	if (new_node == NULL)
//		return;
//
//	node* last_node = list->head;
//	if (last_node == NULL)
//	{
//		list->head = new_node;
//		list->size++;
//		return;
//	}
//
//	while (last_node->next != NULL)
//		last_node = last_node->next;
//	last_node->next = new_node;
//	list->size++;
//}
//
//void pop_back(slinked_list* list)
//{
//	if (list == NULL)
//		return;
//
//	node* last_node = list->head;
// 	if (last_node == NULL)
//		return;
//
//	if (last_node->next == NULL)
//	{
//		free(last_node);
//		list->head = NULL;
//	}
//	else
//	{
//		node* prev_last = last_node;
//		while (last_node->next != NULL)
//		{
//			prev_last = last_node;
//			last_node = last_node->next;
//		}
//		free(last_node);
//		prev_last->next = NULL;
//	}
//	last_node = NULL;
//	list->size--;
//}
//
//void revserse_slinked_list(slinked_list* list)
//{
//	if (list == NULL)
//		return;
//	
//	node* next = list->head;
//	node* current = NULL;
//	node* prev = NULL;
//	while (next != NULL)
//	{
//		prev = current;
//		current = next;
//		next = next->next;
//		current->next = prev;
//	}
//	list->head = current;
//}
//void release_slinked_list(slinked_list* list)
//{
//	if (list == NULL)
//		return;
//
//	while (list->head != NULL)
//	{
//		node* rel_node = list->head;
//		list->head = list->head->next;
//		free(rel_node);
//	}
//	free(list);
//}
//
//void print_slinked_list(slinked_list* list)
//{
//	if (list == NULL)
//		return;
//
//	node* iterator = list->head;
//	size_t index = 0;
//	if (list->head == NULL)
//	{
//		printf("[empty]\n");
//		return;
//	}
//	
//	while (iterator != NULL)
//	{
//		printf("[%zd] : %d", index++, iterator->data);
//		iterator = iterator->next;
//	}
//	printf("\n");
//}
//
//int main()
//{
//	slinked_list* list;
//	list = create_slinked_list();
//	if (list == NULL)
//		return 0;
//
//	// empty print
//	print_slinked_list(list);
//	getchar();
//
//	push_back(list, 1);
//	push_back(list, 2);
//	push_back(list, 3);
//	print_slinked_list(list);
//	getchar();
//
//	revserse_slinked_list(list);
//	print_slinked_list(list);
//	getchar();
//
//	pop_back(list);
//	push_back(list, 4);
//	push_back(list, 5);
//	push_back(list, 6);
//	print_slinked_list(list);
//	getchar();
//
//	release_slinked_list(list);
//	getchar();
//
//	list = create_slinked_list();
//	if (list == NULL)
//		return;
//
//	pop_back(list);
//	push_back(list, 1);
//	print_slinked_list(list);
//	getchar();
//	
//	pop_back(list);
//	print_slinked_list(list);
//	getchar();
//
//
//	return 0;
//
//}