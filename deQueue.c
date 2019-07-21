#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int InitQueue(Queue *q) {
	q->front = q->rear = -1;
}
int DestroyQueue(Queue *q) {
	free(q);
}
int QueueEmpty(Queue *q) {
	return (q->front == q->rear);
}
int enQueue(Queue *q, ElemType e) {
	if ((q->rear + 1) % MAX == q->front)
		return 0;
	q->rear = (q->rear + 1) % MAX;
	q->data[q->rear] = e;
	return 1;
}
ElemType deQueue(Queue *q) {
	if (q->front == q->rear)
		return 0;
	q->front = (q->front + 1) % MAX;
	return (q->data[q->front]);
}

void Initdeque(Queue *q) {
	q->rear = q->front = 0;
	q->size = 0;
}
int Push_Rear(Queue *q, ElemType e) {
	if (q->size == MAX) {
		return 0;
	}
	q->data[q->rear] = e;
	q->rear = (q->rear + 1) % MAX;
	q->size++;
	return 1;
}
ElemType Pop_Rear(Queue *q) {
	if (q->size == 0)
		return 0;
	q->rear = (q->rear - 1 + MAX) % MAX;
	ElemType temp = q->data[q->rear];
	q->size--;
	return temp;
}
int Push_Front(Queue *q, ElemType e) {
	if (q->size == MAX)
		return 0;
	q->front = (q->front - 1 + MAX) % MAX;
	q->data[q->front] = e;
	q->size++;
	return 1;
}
ElemType Pop_Front(Queue *q) {
	if (q->size == 0) {
		return 0;
	}
	ElemType temp = q->data[q->front];
	q->front = (q->front + 1) % MAX;
	q->size--;
	return temp;
}
ElemType GetRear(Queue *q) {
	return (q->data[q->rear - 1]);
}
ElemType GetFront(Queue *q) {
	return(q->data[q->front]);
}
