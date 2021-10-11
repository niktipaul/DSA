#include <stdio.h>
#include <stdlib.h>


typedef struct node{
	int data;
	struct node* next;
}N;

N* head = NULL ;

void beginInsert(){

	N* currentNode = (N*)malloc(sizeof(N));
	int data;
	printf("Enter data to be Inserted :");
	scanf("%d", &data);

	currentNode->data = data;
	currentNode->next = head;
	head = currentNode;
	printf("\nNode inserted at beginning successfully\n");

}

void lastInsert(){

	N* tempNode;
	N* currentNode = (N*)malloc(sizeof(N));
	int data;
	printf("Enter data to be Inserted :");
	scanf("%d", &data);

	if (head == NULL){

		currentNode->data = data;
		currentNode->next = head;
		head = currentNode;
		printf("\nNode inserted at last successfully\n");
	}
	else{
		tempNode = head;
		while (tempNode->next != NULL){
			tempNode = tempNode->next;
		}
		currentNode->data = data;
		tempNode->next = currentNode;
		currentNode->next = NULL;
		printf("\nNode inserted at last successfully\n");
	}
}

void randomInsert(){
	printf("\nSERVICE NOT AVAILABLE RIGHT NOW\n");
}

void beginDelete(){

	N* tempNode;
	if(head == NULL)
		printf("\nLinkedList is Empty\n");
	else{
		tempNode = head;
		head = head->next;
		free(tempNode);
		printf("\nNode deleted from beginning successfully\n");
	}
}

void lastDelete(){
	
	N* previousNode;
	N* tempNode = head;
	if(head == NULL)
		printf("\nLinkedList is Empty\n");
	else if(head->next == NULL){
		head = NULL;
		free(head);
		printf("\nNode Deleted from List Successfully\n");
	}
	else{
		while(tempNode->next != NULL){
			previousNode = tempNode;
			tempNode = tempNode->next;
		}
		previousNode->next = NULL;
		free(tempNode);
		printf("\nNode deleted from End successfully\n");
	}
}

void randomDelete(){
	printf("\nSERVICE NOT AVAILABLE RIGHT NOW\n");
}

void displayList(){

	N* currentNode = head;
	int count = 0;

	if(head == NULL)
		printf("\nLinkedList is Empty\n");

	else if(head->next == NULL){
		printf("\nLinked List has Single Element: %d\n", head->data);
	}
	else{
		printf("\nValues at LinkedList are:\n");
		while(currentNode != NULL){

			printf("Value at index %d is %d \n", count++, currentNode->data);
			currentNode = currentNode->next;
		}

	}
}

void main(){
	
	printf("\n######################## SinglyLinkedList ###############################\n");
	int choice = 0;
	while(choice != 8){
		
		printf("\n\n1. Insert Node at Beginning\t5. Delete Node at End\n2. Insert Node at End\t6. Delete Node at Random\n3. Insert Node at Random\t7. Display\n4. Delete Node at Beginning\t8. Exit\n");
		printf("Enter Your Choice: ");
		scanf("%d", &choice);

		switch(choice){

			case 1: beginInsert();
				break;
			case 2: lastInsert();
				break;
			case 3: randomInsert();
				break;
			case 4: beginDelete();
				break;
			case 5: lastDelete();
				break;
			case 6: randomDelete();
				break;
			case 7: displayList();
				break;
			default: printf("\nPlease Enter a Valid Choice\n");
		}

	}
}
