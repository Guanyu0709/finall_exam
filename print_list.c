#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"



void print_list(void)
{
	if(list_ptr==NULL)
	{
		printf("�����\n");
	}
	else
	{
		//�v�ӦL�X���e 
		int cnt=1;
		Node* move=list_ptr;
		while(move!=NULL)
		{
			printf("��%d�ӦP�� �Ǹ�:%d ����:\n",cnt,move->data);
			cnt++;
			move=move->next;
		}
	}
	return;
}
