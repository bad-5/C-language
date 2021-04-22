/*�û����������е�Ԫ�ظ���������������ÿ��Ԫ�أ������������е�Ԫ��*/
# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

struct Node
{
	int data;  //�����򣬶��������е����ݲ���
	struct Node * pNext;  //ָ���򣬶��������ͷ�ڵ㣬���ڴ�ŵ�ַ
};

/*��������*/
struct Node * Create_List(void);  //��������
void Traverse_List(struct Node *);  //��������

int main(void)
{
	struct Node * pHead = NULL;  //���ڴ�������ͷ�ڵ��ַ

	pHead = Create_List();  //����һ������������������ͷ�ڵ��ַ���أ���ֵ��pHead
	Traverse_List(pHead);  //��������������������

	return 0;
}

struct Node * Create_List(void)  //void��ʾ�����ղ���
{
	int len;  //���ڴ��������Ԫ�صĸ���
	int i;
	int val;  //������ʱ����û������Ԫ�ص�ֵ

	struct Node * pHead = (struct Node *)malloc(sizeof(struct Node));
	/*
		pHead���ڴ�������ͷ�ڵ��ַ
	 */
	if (NULL == pHead)
	{
		printf("�ڵ����ʧ�ܣ�������ֹ��\n");
		exit(-1);  //��ֹ����
	}

	struct Node * pTail = pHead;  //pTail�����޸�ÿһ�������ֵ��ָ�����һ����ַ
	pTail->pNext = NULL;

	printf("����������Ҫ���ɵ�����Ľڵ������");
	scanf("%d", &len);

	for (i = 0; i < len; ++i)
	{
		printf("�������%d���ڵ��ֵ��", i + 1);
		scanf("%d", &val);

		struct Node * pNew = (struct Node *)malloc(sizeof(struct Node));
		/*
			������ʱ����û������ֵ�͵�ַ
		 */
		if (NULL == pNew)
		{
			printf("����ʧ�ܣ�������ֹ��\n");
			exit(-1);
		}

		pNew->data = val;
		pTail->pNext = pNew;
		pNew->pNext = NULL;
		pTail = pNew;
	}
	return pHead;
};

void Traverse_List(struct Node * pHead)
{
	struct Node * p = pHead->pNext;

	printf("�����е�Ԫ��Ϊ��");
	while (NULL != p)
	{
		printf("%d ", p->data);
		p = p->pNext;
	}
	printf("\n");

	return;
}
/*
��Visual C++6.0�е����н��
-----------------------
����������Ҫ���ɵ�����Ľڵ������5
�������1���ڵ��ֵ��1
�������2���ڵ��ֵ��2
�������3���ڵ��ֵ��3
�������4���ڵ��ֵ��4
�������5���ڵ��ֵ��5
�����е�Ԫ��Ϊ��1 2 3 4 5
Press any key to continue
-----------------------
 */