#include"head.h"
#include<stdio.h>
#define NUMBER_OF_MENU 7//菜单函数的个数
void main(void)
{
	int iCommand;//用来记录用户输入的命令
	void (*Menu[NUMBER_OF_MENU+1])(pINAEX);//定义菜单指针数组
	Menu[0] = ListCreation;
	Menu[1] = ListAddtion;
	Menu[2] = DeleteData;
	Menu[3] = ShowList;
	Menu[4] = ReadData;
	Menu[5] = SaveData;
	Menu[6] = Research;
	Menu[7] = ExitApplication;
	setlocale(LC_ALL, "chs");//设置语言本地化 
	printf("欢迎使用记账本.\n");
	pINAEX pHead = ListInitialise(0, 0, 0, 0);
	Menu[4](pHead);//读取初始的数据
	for(;;)//开始一个循环
	{
		printf("************************\n");
		printf("重新初始化请输入0\n");
		printf("增加收支条目输入1\n");
		printf("删除数据请按2\n");
		printf("显示当前全部记录请按3\n");
		printf("重新读取数据请按4\n");
		printf("保存当前数据请输入5\n");
		printf("查询历史数据请输入6\n");
		printf("退出程序请按7\n");
		printf("************************\n");
		printf("请输入您要进行的操作:\t");
		scanf("%d", &iCommand);
		if(iCommand<0||iCommand>NUMBER_OF_MENU)
		{
			printf("输入了不合法的操作!请重新输入:\t");
			continue;
		}
		Menu[iCommand](pHead);
	}
}


/**************************************************************************************************
*   完成内容：链表基础部分和数据存储部分以及实现,简单的菜单函数                                     *
*   最后修改时间：2017/4/23 15：32                                                                  *
*   修改日志记录：                                                                                  *
*   2017/4/4  14：00 刘子琦 完成了 链表基础部分的结构                                               *
*	2017/4/4  24：00 徐苏恒 完成了 宽字符的中文输入，文件的存储和读出                               *
*	2017/4/5  08：04 徐苏恒 完成了 又指针数组构成的菜单函数                                         *
*   2017/4/5  12：30 徐苏恒 完成了 链表节点的删除（从第二个节点到最后一个节点都可以删除 ）          *
*   2017/4/5  19：30 刘子琦 完成了 无关痛痒的优化                                                   *
*   2017/4/5  20：17 徐苏恒 完成了 Debug                                                            *
*   2017/4/5  21：00 刘子琦 完成了 变量规范化                                                       * 
*   2017/4/21 17：47 王珊珊 完成了 查找函数 Research                                                *
*	2017/4/23 01: 31 于文昊 完成了 日历																*
*   历史文件保存在的位置  D:/data.txt                                                               *
***************************************************************************************************/




