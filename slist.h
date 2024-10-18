#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

typedef int SLTDateType;
typedef struct SListNode
{
	SLTDateType data;
	struct SListNode* next;
}SListNode;

// ��̬����һ���ڵ�
SListNode* BuySListNode(SLTDateType x);

// ��������ӡ
void SListPrint(SListNode* plist);
// ������β��
void SListPushBack(SListNode** pplist, SLTDateType x);
// ��������ͷ��
void SListPushFront(SListNode** pplist, SLTDateType x);
// ��������βɾ
void SListPopBack(SListNode** pplist);
// ������ͷɾ
void SListPopFront(SListNode** pplist);
// ����������
SListNode* SListFind(SListNode* plist, SLTDateType x);
// ��������posλ��֮�����x
void SListInsertAfter(SListNode** pplist,SListNode* pos, SLTDateType x);
// ������ɾ��posλ��֮���ֵ
void SListEraseAfter(SListNode* pos);