#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"



void add(int num)
{

	if(list_ptr==NULL)
	{
		list_ptr=malloc(sizeof(Node));
		list_ptr->data=num;
		list_ptr->next=NULL;
	}
	else
	{
		Node* move=list_ptr;
		while(move->next!=NULL)
		{
			move=move->next;
		}
		move->next=malloc(sizeof(Node));
		move=move->next;
		move->next=NULL;
		move->data=num;		
	}
	
	return;
}
