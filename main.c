#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(void) 
{
	int flag=1;
	while(flag)
	{
		char cmd[2];
		int tmp,number;
		printf("------------------------------------\n");
		printf("�s�W(A),�C��(L),�R��(D),���}(Q)\n");
		scanf("%s",&cmd);
		switch(cmd[0])
		{
		case 'A':case 'a':
		printf("�s�W,�п�J�Ǹ�.���Z(EX:356��3��56�� )\n");
		scanf("%d",&tmp);
		add(tmp);
		break;
		case 'L':case 'l':
		printf("�C��\n");
		print_list();
		break;
		case 'D':case 'd':
		printf("�R��,�п�J�Ʀr\n");
		scanf("%d",&tmp);
		del(tmp);		
		break;
		case 'Q':case 'q':
		printf("���}\n");
		flag=0;
		break;
		default:
		printf("�O�x�F\n");
		break;
		}
	}
	return 0;
}
