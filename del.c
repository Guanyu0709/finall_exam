#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void del(int num)
{
	//�Ω󲾰ʯ��ު�node���� 
	Node *move;
	//�Ω󲾰ʯ��޼Ȧs�W�@��node������ 
	Node *pre;
	//�Ȧsnode�� 
	Node *tmp;
	
	if(list_ptr==NULL)
	{
		printf("�����,�R������\n");
		return;
	}
	
	//�Ĥ@��node�Y���n�R�������p 
	if(list_ptr->data==num)
	{
		tmp=list_ptr->next;
		free(list_ptr);
		list_ptr=tmp;
	}
	else
	{
		pre=list_ptr;
		move=list_ptr->next;
		//�V��j�M 
		while(move->next!=NULL)
		{
			if(move->data==num)
			{
				break;
			}
			else
			{
				pre=move;
				move=move->next;
			}
		}
		if(move->next==NULL)
		{
			//�p�G���ި�̫�@�Ө̵M�䤣�� 
			if(move->data!=num)
			{
				printf("�䤣��ӼƦr,�R������\n");
				return;
			}
			//�R���̫�@�� 
			if(move->data==num)
			{
				pre->next=NULL;
				free(move);
				return;
			}
		}
		//�R�����������p
		if(move->data==num)
		{
			pre->next=move->next;
			free(move);
			return;
		}
	}
	return;	
}
