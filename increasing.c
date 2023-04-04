
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
}*head,*temp;

void sort(){
int t;
temp=head;
struct node *temp1;
while(temp!=NULL){
    temp1=temp->next;
    while(temp1!=NULL){
        if(temp->data > temp1->data){
            t=temp->data;
            temp->data=temp1->data;
            temp1->data=t;
        }
        temp1=temp1->next;
    }
    temp=temp->next;
}
}
void display(){
     temp=head;
     while (temp!=NULL)
     {
        printf("%d ",temp->data);
        temp=temp->next;
     }  
}   
void display1(){
    temp=head;
    printf("\nSecond Smallest Number: %d",temp->next->data);
}  

int main() {
     int n;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("Enter %d Data : ",n);
    for(int i=0;i<n;i++)
    {
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if(head==NULL){
        head=newnode;
        temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    }
sort();
display();
display1();
}