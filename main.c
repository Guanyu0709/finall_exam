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
		printf("新增(A),列表(L),刪除(D),離開(Q)\n");
		scanf("%s",&cmd);
		switch(cmd[0])
		{
		case 'A':case 'a':
		printf("新增,請輸入學號.成績(EX:356為3號56分 )\n");
		scanf("%d",&tmp);
		add(tmp);
		break;
		case 'L':case 'l':
		printf("列表\n");
		print_list();
		break;
		case 'D':case 'd':
		printf("刪除,請輸入數字\n");
		scanf("%d",&tmp);
		del(tmp);		
		break;
		case 'Q':case 'q':
		printf("離開\n");
		flag=0;
		break;
		default:
		printf("別鬧了\n");
		break;
		}
	}
	return 0;
}
