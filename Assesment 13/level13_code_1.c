#include <stdio.h>
#include <stdlib.h>
typedef struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
}st;

int main(){
    st *head = (st *)malloc(sizeof(st));
    st *temp = head ;
    printf("Enter ID :");
    scanf("%d",&head->id);
    if (head->id==-1) return 0 ;
    printf("Enter Math mark :");
    scanf("%d",&head->Maths);
    printf("Enter Science mark :");
    scanf("%d",&head->Science);
    head->next=NULL;
    while (1){
        st *newnode = (st *) malloc(sizeof(st));
         printf("Enter ID :");
        scanf("%d",&newnode->id);
        if(newnode->id==-1) {
            goto disp;
        }
        printf("Enter Math mark :");
        scanf("%d",&newnode->Maths);
        printf("Enter Science mark :");
        scanf("%d",&newnode->Science);
        while (temp->next!=NULL){
        temp = temp->next;
        }
        temp->next =newnode;
        newnode->next=NULL;
    }
    disp: temp = head;
    while (temp->next!=NULL){
        printf("ID : %d ",temp->id);
        printf("Math : %d ",temp->Maths);
        printf("Sci : %d\n",temp->Science);
        temp=temp->next;
    }
    printf("ID : %d ",temp->id);
    printf("Math : %d ",temp->Maths);
    printf("Sci : %d\n",temp->Science);
}