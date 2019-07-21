#ifndef _DEQ_H
#define _DEQ_H
#define MAX 10000
typedef int ElemType;
typedef struct {
	ElemType data[MAX];
	int rear;
	int front;
	int size;
}Queue;             //队列的结构


int InitQueue(Queue *q);       //队列初始化
int DestroyQueue(Queue *q);    //销毁队列
int QueueEmpty(Queue *q);      //判断队空
int enQueue(Queue *q, ElemType e);//进队
ElemType deQueue(Queue *q);    //出队

void Initdeque(Queue *q);              //初始化双端队列
int Push_Rear(Queue *q, ElemType e);   //队尾入队
ElemType Pop_Rear(Queue *q);           //队尾出队
int Push_Front(Queue *q, ElemType e);  //队首入队
ElemType Pop_Front(Queue *q);          //队首出队
ElemType GetRear(Queue *q);            //取队尾元素
ElemType GetFront(Queue *q);           //取队首元素 

#endif
