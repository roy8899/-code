//单链表 
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef struct Node{
	int data;
	struct Node *next;
}Node; 

Node *init_list(){
	Node *list = (Node*)malloc(sizeof(Node));
	list->data = 0;
	list->next = NULL;
	return list;
}

void head_insert(Node *list, int data){
	Node *node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = list->next;
	list->next = node;
	list->data++;
}
void tail_insert(Node *list, int data){
	Node *head = list;
	Node *node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	while(list -> next){
		list = list->next; 
	}
	list->next = node;
	head->data++;
}
void print_list(Node *list){
	list = list->next;//注意要移动至下一位才开始输出值 
	while(list){
		printf("%d -> ",list->data);
		list = list->next;
	}
	printf("NULL\n");
}
int delete_list(Node *list,int data){
	Node *pre = (Node*)malloc(sizeof(Node));
	Node *cur = (Node*)malloc(sizeof(Node));
	pre = list;
	cur = list->next;
	while(cur){
		if(cur->data == data){
			pre->next = cur->next;
			free(cur);
			return TRUE;
		}
		pre = cur;
		cur = cur->next;
	} 
	return FALSE;
} 


 int main(){
 	Node *list = init_list();
 	head_insert(list,1);
 	head_insert(list,2);
 	head_insert(list,3);
 	head_insert(list,4);
 	head_insert(list,5);
 	tail_insert(list,6);
 	tail_insert(list,7);
 	tail_insert(list,8);
 	tail_insert(list,9);
 	tail_insert(list,10);
 	print_list(list); 
 	delete_list(list,5);
 	delete_list(list,6);
 	delete_list(list,10);
 	print_list(list);
 	return 0;
 }
