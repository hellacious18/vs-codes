#include<iostream>
using namespace std;
 
struct queue//structure of queue
{
    int size;
    int f;
    int r;
    int* arr;
};
int isEmpty(struct queue *q)//check queue is empty or not
{
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
 
int isFull(struct queue *q)//check queue is full or not
{
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}
 
void enqueue(struct queue *q, int val)//insert element in queue
{
    if(isFull(q)){
        printf("This Queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
        // printf("Enqued element: %d\n", val);
    }
}
 
int dequeue(struct queue *q)//delete elememnt in queue
{
    int a = -1;
    if(isEmpty(q)){
        cout<<"This Queue is empty\n";
    }
    else{
        q->f++;
        a = q->arr[q->f]; 
    }
    return a;
}
 
int main(){
    // Initializing Queue (Array Implementation)
    struct queue q;
    q.size = 400;
    q.f = q.r = 0;

    int node;
    int i = 3;
    int visited[7] = {0,0,0,0,0,0,0};
    int a [7][7] = {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0}, 
        {0,0,0,0,1,0,0} 
    };
    cout<<i;
    visited[i] = 1;
    enqueue(&q, i); 
    while (!isEmpty(&q))
    {
        int node = dequeue(&q);
        for (int j = 0; j < 7; j++)
        {
            if(a[node][j] ==1 && visited[j] == 0){
                cout<<j;
                visited[j] = 1;
                enqueue(&q, j);
            }
        }
    }
    return 0;
}