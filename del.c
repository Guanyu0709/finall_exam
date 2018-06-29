#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void del(int num)
{
	//用於移動索引的node指標 
	Node *move;
	//用於移動索引暫存上一個node的指標 
	Node *pre;
	//暫存node用 
	Node *tmp;
	
	if(list_ptr==NULL)
	{
		printf("鍊表為空,刪除失敗\n");
		return;
	}
	
	//第一個node即為要刪除的狀況 
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
		//向後搜尋 
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
			//如果索引到最後一個依然找不到 
			if(move->data!=num)
			{
				printf("找不到該數字,刪除失敗\n");
				return;
			}
			//刪除最後一個 
			if(move->data==num)
			{
				pre->next=NULL;
				free(move);
				return;
			}
		}
		//刪除中間的狀況
		if(move->data==num)
		{
			pre->next=move->next;
			free(move);
			return;
		}
	}
	return;	
}
