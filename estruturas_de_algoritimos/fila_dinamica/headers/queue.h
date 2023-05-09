#ifndef UNTITLED_QUEUE_H
#define UNTITLED_QUEUE_H
struct node {
    int data;
    struct node *next;
};
typedef struct node node;

typedef struct queue* Queue;
typedef struct queue queue;

void initQueue(Queue q);
int isEmpty(Queue q);
void enqueue(Queue q, int value);
int dequeue(Queue q);

#endif //UNTITLED_QUEUE_H
