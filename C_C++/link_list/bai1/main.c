#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct sinh_vien
{
    char mssv[20];
    char Ho_ten[50];
    float gpa ;
    struct sinh_vien *next;
};
void copy_string(char *in1,char *in2){
    int i=0;
    while(in2[i]!='\0'){
        in1[i]=in2[i];
        i++;
    }
    in1[i] = '\0';
}
typedef  struct sinh_vien SV;
SV* tao_sinh_vien(char *mssv,char *ho_ten,float gpa){
    SV *new_sinh_vien=(SV*)malloc(sizeof(SV));
    if (new_sinh_vien == NULL) {
        printf("Khong the cap phat bo nho!\n");
        exit(1);
    }
    copy_string(new_sinh_vien->mssv,mssv);
    copy_string(new_sinh_vien->Ho_ten,ho_ten);
    new_sinh_vien->gpa=gpa;
    new_sinh_vien->next=NULL;
    return new_sinh_vien;
}
void tao_sinh_vien_dau(SV **head,char *mssv,char *ho_ten,float gpa){
    SV *new_sinh_vien = tao_sinh_vien(mssv,ho_ten,gpa);
    new_sinh_vien->next = *head;
    *head = new_sinh_vien;
}
void tao_sinh_vien_cuoi(SV **head,char *mssv,char *ho_ten,float gpa){
    SV *new_sinh_vien = tao_sinh_vien(mssv,ho_ten,gpa);
    SV* temp= *head;
    if(*head==NULL){
        *head=new_sinh_vien;
    }
    else{
        while(temp->next!=NULL){
           temp=temp->next;
        }
        temp->next=new_sinh_vien;
    }
}
int main() {
    SV *head = NULL;
    tao_sinh_vien_cuoi(&head, "211465", "Nguyen Van A", 3.2);
    tao_sinh_vien_cuoi(&head, "211466", "Tran Van B", 2.9);
    tao_sinh_vien_cuoi(&head, "211467", "Le Thi C", 3.8);
//    SV *head = NULL; 
//    int n;
//    char mssv[20];
//    char Ho_ten[50];
//    float gpa = 0;
//    scanf("%d",&n);
//    getchar();
//    if(n==1){
//        gets(mssv);
//        gets(Ho_ten);
//        scanf("%f",&gpa);
//        tao_sinh_vien_dau(&head,mssv,Ho_ten,gpa);
//    }
    //free(head);
   //else if (n==2);
   // else if (n==3);
 //   return 0;
}