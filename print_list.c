#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"



void print_list(void)
{
	if(list_ptr==NULL)
	{
		printf("鍊表為空\n");
	}
	else
	{
		//逐個印出內容 
		int cnt=1;
		Node* move=list_ptr;
		while(move!=NULL)
		{
			printf("第%d個同學 學號:%d 分數:\n",cnt,move->data);
			cnt++;
			move=move->next;
		}
	}
	return;
}
