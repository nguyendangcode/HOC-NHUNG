#include <stdio.h>
#include <stdlib.h>
struct sinh_vien
{
    int mssv[20];
    char Ho_ten[50];
    float gpa ;
    struct sinh_vien *next;
};
typedef  struct sinh_vien SV;
int main() {
    SV a,b;
    a.gpa=7.4;
    a.next=&b;
    b.gpa=7.8;
    printf("%0.1f",a.next->gpa);
    return 0;
}