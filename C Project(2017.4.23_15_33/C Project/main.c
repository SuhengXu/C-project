#include"head.h"
#include<stdio.h>
#define NUMBER_OF_MENU 7//�˵������ĸ���
void main(void)
{
	int iCommand;//������¼�û����������
	void (*Menu[NUMBER_OF_MENU+1])(pINAEX);//����˵�ָ������
	Menu[0] = ListCreation;
	Menu[1] = ListAddtion;
	Menu[2] = DeleteData;
	Menu[3] = ShowList;
	Menu[4] = ReadData;
	Menu[5] = SaveData;
	Menu[6] = Research;
	Menu[7] = ExitApplication;
	setlocale(LC_ALL, "chs");//�������Ա��ػ� 
	printf("��ӭʹ�ü��˱�.\n");
	pINAEX pHead = ListInitialise(0, 0, 0, 0);
	Menu[4](pHead);//��ȡ��ʼ������
	for(;;)//��ʼһ��ѭ��
	{
		printf("************************\n");
		printf("���³�ʼ��������0\n");
		printf("������֧��Ŀ����1\n");
		printf("ɾ�������밴2\n");
		printf("��ʾ��ǰȫ����¼�밴3\n");
		printf("���¶�ȡ�����밴4\n");
		printf("���浱ǰ����������5\n");
		printf("��ѯ��ʷ����������6\n");
		printf("�˳������밴7\n");
		printf("************************\n");
		printf("��������Ҫ���еĲ���:\t");
		scanf("%d", &iCommand);
		if(iCommand<0||iCommand>NUMBER_OF_MENU)
		{
			printf("�����˲��Ϸ��Ĳ���!����������:\t");
			continue;
		}
		Menu[iCommand](pHead);
	}
}


/**************************************************************************************************
*   ������ݣ������������ֺ����ݴ洢�����Լ�ʵ��,�򵥵Ĳ˵�����                                     *
*   ����޸�ʱ�䣺2017/4/23 15��32                                                                  *
*   �޸���־��¼��                                                                                  *
*   2017/4/4  14��00 ������ ����� �����������ֵĽṹ                                               *
*	2017/4/4  24��00 ���պ� ����� ���ַ����������룬�ļ��Ĵ洢�Ͷ���                               *
*	2017/4/5  08��04 ���պ� ����� ��ָ�����鹹�ɵĲ˵�����                                         *
*   2017/4/5  12��30 ���պ� ����� �����ڵ��ɾ�����ӵڶ����ڵ㵽���һ���ڵ㶼����ɾ�� ��          *
*   2017/4/5  19��30 ������ ����� �޹�ʹ�����Ż�                                                   *
*   2017/4/5  20��17 ���պ� ����� Debug                                                            *
*   2017/4/5  21��00 ������ ����� �����淶��                                                       * 
*   2017/4/21 17��47 ��ɺɺ ����� ���Һ��� Research                                                *
*	2017/4/23 01: 31 ����� ����� ����																*
*   ��ʷ�ļ������ڵ�λ��  D:/data.txt                                                               *
***************************************************************************************************/



