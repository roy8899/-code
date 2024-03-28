//Ñ­»·µ¥Á´±í
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
 	list->next = list;
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
 	Node *n = list;
 	Node *node = (Node*)malloc(sizeof(Node));
 	node->data = data;
 	while(n->next != list){
 		n = n->next;
	 }
	 node->next = list;
	 n->next = node;

 }
 
 int delete_list(Node *list,int data){
 	Node *pre = list;
 	Node *cur = list->next;
 	while(cur != list){
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
 void print_list(Node *list){
 	Node *node = list->next;
 	while( node != list){
 		printf("%d->",node->data);
 		node = node->next;
	 }
	 printf("NULL\n");
 }
 
 int main(){
 	Node *list = init_list();
 	head_insert(list,1);
 	head_insert(list,2);
 	head_insert(list,3);
 	tail_insert(list,4);
 	tail_insert(list,5);
 	tail_insert(list,6);
 	print_list(list);
 	delete_list(list,1);
 	delete_list(list,6);
	delete_list(list,3);
	print_list(list);
 	
 	return 0;
 }
