#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct queue {
    node *front;
    node *rear;
};

void initQueue(Queue q) {
    q->front = NULL;
    q->rear = NULL;
}

int isEmpty(Queue q) {
    return (q->front == NULL);
}

void enqueue(Queue q, int value) {
    node *newNode = malloc(sizeof(node));
    newNode->data = value;
    newNode->next = NULL;
    if (isEmpty(q)) {
        q->front = newNode;
        q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

int dequeue(Queue q) {
    if (isEmpty(q)) {
        printf("Fila vazia!\n");
        return -1;
    }
    int value = q->front->data;
    node *temp = q->front;
    q->front = q->front->next;
    free(temp);
    return value;
}

