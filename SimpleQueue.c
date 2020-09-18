#include <stdio.h>
#include<stdlib.h>
#define MAX 5
int queue_array[MAX];
int rear = - 1;//rear pointer -1 for empty queue
int front = - 1;//same as rear
//start inserting the data in queue
void insert()
{
int item,num=0;
printf("Enter number of element you want to insert :");
scanf("%d",&num);
for(int i=0;i<num;i++)
{
if(rear == MAX - 1)
	printf("Queue Overflow \n");//for overflow condition
else
{
if(front== - 1)\\if front pointer is = -1
	front = 0;
printf("Inset the element in queue : ");
scanf("%d", &item);
rear = rear + 1;
queue_array[rear] = item;//add element in queue
}
}
}
//deleting the data from queue
void delete()
{
if(front == - 1 || front > rear)
{
printf("Queue Underflow \n");//under flow condition
return;
}
else
{
printf("Element deleted from queue is : %d\n", queue_array[front]);
front+=1;//increace the front pointer
}
}
void display()
{
int i;
if(front == - 1)
printf("Queue is empty \n");
else
{
printf("Queue is :\n");
for(i = front; i <= rear; i++)
printf("| %d |\n", queue_array[i]);
printf("\n");
}
}

int main()
{
int choice;
while (1)
{
printf("1.Insert element to queue \n");
printf("2.Delete element from queue \n");
printf("3.Display all elements of queue \n");
printf("4.Quit \n");
printf("Enter your choice : ");
scanf("%d", &choice);
switch(choice)
{
case 1:

	insert();
printf("\n");
display();
break;
case 2:
delete();
printf("\n");
display();
break;
case 3:
display();
break;
case 4:
exit(1);
default:
printf("Wrong choice n");
}
}
}


