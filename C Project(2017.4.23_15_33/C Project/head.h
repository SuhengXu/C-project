#include<stdio.h>
#include<stdlib.h>//��׼����Standred Library
#include<string.h>
#include<wchar.h>//����֧�ֿ��ַ���صĺ����ԶԺ��ֽ��в���
#include<locale.h>
#ifndef _HEAD_H_
#define _HEAD_H_
/*Ԥ��ļ�����������*/
#define BLE BasicLifeExpense
#define DLE DevelopedLifeExpense
#define ME MentalExpense
#define IFP IncomeFromParents
#define IFE IncomeFromEarning
/*�򻯵��ַ�*/
#define pHead TheHeadofAnIncomeAndExpenseList 
#define pCur TheCurrentTerm 
#define pPre ThePreviousTerm  

/*�ṹ�������*/
typedef struct _INCOME_AND_EXPENSE
{
	int iNumber;//���ڼ�¼���ǵڼ�����¼������֮��Ĳ���
	float fValue;//��֧����
	wchar_t szLocation[20];//���ѳ���
    wchar_t szKind[20];//��������
    int iYearDate;//��
	int iMonthDate;//��
	int iDayDate;//��
	struct _INCOME_AND_EXPENSE * pNext;//�������һ��Ԫ��
}INAEX;//�򻯽ṹ����
typedef INAEX * pINAEX;//����һ��INAEX���͵�ָ��

/*�Ժ���������*/
pINAEX ListInitialise(float, int, int, int);//��һ���ڵ�ĳ�ʼ��
void ListCreation(pINAEX); //�б�ͷ��ʼ��
void StructCreation(pINAEX);//���û�����һ���ڵ����Ϣ
void ListAddtion(pINAEX);//���һ���ڵ�
void ShowList(pINAEX head);//�������������������
void SaveData(pINAEX);//��������
void ReadData(pINAEX);//��ȡ����
void DeleteData(pINAEX);//ɾ��ĳ���ض��ڵĺ���
void ExitApplication(pINAEX);//�˳�����
void Research(pINAEX head);//��ѯ����
int Calender(int, int, int);//�ж������Ƿ����
//int SafeInputCheck(wchar_t wcArray[20],int iLimit);//ȷ��������ַ����ᳬ����������

#endif // _HEAD_H_
