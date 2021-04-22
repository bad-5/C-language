/*用户输入链表中的元素个数，再依次输入每个元素，最后输出链表中的元素*/
# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

struct Node
{
	int data;  //数据域，定义链表中的数据部分
	struct Node * pNext;  //指针域，定义链表的头节点，用于存放地址
};

/*函数声明*/
struct Node * Create_List(void);  //创建链表
void Traverse_List(struct Node *);  //遍历链表

int main(void)
{
	struct Node * pHead = NULL;  //用于存放链表的头节点地址

	pHead = Create_List();  //创建一个链表，并将这个链表的头节点地址返回，赋值给pHead
	Traverse_List(pHead);  //遍历链表，对链表进行输出

	return 0;
}

struct Node * Create_List(void)  //void表示不接收参数
{
	int len;  //用于存放链表中元素的个数
	int i;
	int val;  //用于临时存放用户输入的元素的值

	struct Node * pHead = (struct Node *)malloc(sizeof(struct Node));
	/*
		pHead用于存放链表的头节点地址
	 */
	if (NULL == pHead)
	{
		printf("节点分配失败！程序终止！\n");
		exit(-1);  //终止程序
	}

	struct Node * pTail = pHead;  //pTail用于修改每一个输入的值和指向的下一个地址
	pTail->pNext = NULL;

	printf("请输入您需要生成的链表的节点个数：");
	scanf("%d", &len);

	for (i = 0; i < len; ++i)
	{
		printf("请输入第%d个节点的值：", i + 1);
		scanf("%d", &val);

		struct Node * pNew = (struct Node *)malloc(sizeof(struct Node));
		/*
			用于临时存放用户输入的值和地址
		 */
		if (NULL == pNew)
		{
			printf("分配失败！程序终止！\n");
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

	printf("链表中的元素为：");
	while (NULL != p)
	{
		printf("%d ", p->data);
		p = p->pNext;
	}
	printf("\n");

	return;
}
/*
在Visual C++6.0中的运行结果
-----------------------
请输入您需要生成的链表的节点个数：5
请输入第1个节点的值：1
请输入第2个节点的值：2
请输入第3个节点的值：3
请输入第4个节点的值：4
请输入第5个节点的值：5
链表中的元素为：1 2 3 4 5
Press any key to continue
-----------------------
 */