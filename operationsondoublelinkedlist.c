
#include <stdio.h>
 #include <stdlib.h> 
struct Node { 
struct Node *prev; 
struct Node *next; 
int data; 
}; typedef struct Node Node; 
Node *start = NULL; void Insert_Beginning(); void Insert_Last(); void Insert_Location(); 
void Del_FirstNode(); void Del_LastNode(); void Del_AfterNode();
 void display(); void search(); void main() { 
printf("welcome to doubly link list\n”);
printf("\nDisplay"); 
printf(“\nSearch"); 
printf("\nInsert in beginning"); 
printf("\nInsert at last"); printf("\nInsert at location"); 
printf("\nDelete from beginning"); 
printf("\nDelete from last”); printf("\nDelete the node after the given data"); 
printf("\nClear"); 
int choice = 0; while (choice != 9) { printf("\nEnter your choice: "); 
scanf("%d", &choice); switch (choice) { case 0: display(); break; case 1: search(); break; case 2: Insert_Beginning(); break; case 3: Insert_Last(); break; case 4: 
Insert_Location();
 break; case 5: Del_FirstNode(); 
break; 
case 6: Del_LastNode(); break; case 7: Del_AfterNode(); 
break; case 8: exit(0); break; default: printf("wrong choice"); 
} 
} 
} void Insert_Beginning() 
{ 
Node *ptr; int val; ptr = (Node *)malloc(sizeof(Node)); if (ptr == NULL) { printf("\nOVERFLOW"); } else { printf("Enter value: "); scanf("%d", &val); if (start == NULL) { ptr->next = NULL; ptr->prev = NULL; ptr->data = val; start = ptr; } else { ptr->data = val; ptr->prev = NULL; ptr->next = start; start->prev = ptr; start = ptr; } printf("Node is inserted\n"); 
} 
} void Insert_Last() 
{ 
Node *ptr, *temp; int val; ptr = (Node *)malloc(sizeof(Node)); if (ptr == NULL) { printf("\nOVERFLOW"); } 
else { printf("Enter value: "); scanf("%d", &val); ptr->data = val; if (start == NULL) { ptr->next = NULL; ptr->prev = NULL; start = ptr; } else { temp = start; while (temp->next != NULL) { temp = temp->next; } temp->next = ptr; ptr->prev = temp; ptr->next = NULL; } } printf("Node is inserted\n"); 
} void Insert_Location() 
{ 
Node *new_node, *ptr; int val, pos, i; new_node = (Node *)malloc(sizeof(Node)); if (new_node == NULL) { printf("\nOVERFLOW"); } else { ptr = start; printf("Enter the location: "); scanf("%d", &pos); for (i = 1; i < pos - 1; i++) { ptr = ptr->next; if (ptr == NULL) { printf("There are less than %d elements", pos); 
return; 
} } printf("Enter value: "); scanf("%d", &val); new_node->data = val; new_node->next = ptr->next; new_node->prev = ptr; ptr->next = new_node; ptr->next->prev = new_node; printf("Node is inserted\n"); } 
} 
void Del_FirstNode() { 
Node *ptr; if (start == NULL) { printf("\n UNDERFLOW"); } else if (start->next == NULL) { start = NULL; free(start); printf("Node is deleted\n"); } else { ptr = start; start = start->next; start->prev = NULL; free(ptr); printf("Node is deleted\n"); } 
} void Del_LastNode() { 
Node *ptr; if (start == NULL) { printf("\nUNDERFLOW"); } else if (start->next == NULL) { start = NULL; free(start); printf("Node is deleted\n"); } else { ptr = start; if (ptr->next != NULL) { ptr = ptr->next; } ptr->prev->next = NULL; free(ptr); printf("Node is deleted\n"); } 
} void Del_AfterNode() 
{ 
Node *ptr, *temp; int value; printf("Enter the data after which the node to be deleted "); 
scanf("%d", &value); ptr = start; while (ptr->data != value) ptr = ptr->next; if (ptr->next == NULL) 
{ printf("\nCannot delete\n"); } else if (ptr->next->next == NULL) { ptr->next = NULL; } else { temp = ptr->next; ptr->next = temp->next; 
temp->next->prev = ptr; free(temp); printf("Node isdeleted\n"); } 
} void display() 
{ 
Node *ptr; ptr = start; while (ptr != NULL) { printf("%d ", ptr->data); 
ptr = ptr->next; } printf("\n"); 
} void search() { 
Node *ptr; int val, i = 0, flag = 0; ptr = start; if (ptr == NULL) { printf("Empty List\n"); } else { printf("Enter value to be searched "); 
scanf("%d", &val); while (ptr != NULL) { if (ptr->data == value) { printf("Value found at %d\n", i + 1); 
flag = 1; break; } i++; ptr = ptr->next; } if (flag == 0) { printf("Value not found\n"); } } 
} 
