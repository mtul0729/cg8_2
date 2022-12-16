#include <stdio.h>
void swap(float **x,float **y){
    float *t;
    t=*x;
    *x=*y;
    *y=t;
}
void maopao(float **p){
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2-i; ++j) {
            if(**(p+j)>**(p+j+1))swap(p+j,p+j+1);
        }
    }

}
int main() {
    float a[3];
    float * p[3];
    for (int i = 0; i < 3; ++i) {
        scanf("%f",p[i]=a+i);
    }
    maopao(p);
    for (int i = 0; i < 3; ++i) {
        printf("%g ",**(p+i));
    }
    return 0;
}
