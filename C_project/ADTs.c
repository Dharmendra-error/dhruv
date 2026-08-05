# include<stdio.h>
# include<stdlib.h>

struct array{
    int total_size;
    int used_size;
    int *ptr;
};

void createarray(struct array *marks,int tsize,int usize){

    marks->total_size=tsize;
    marks->used_size=usize;
    marks->ptr = (int*)malloc(tsize*(sizeof(int)));
}

void setval(struct array *marks){

    int n;
    for(int i=0;i<marks->used_size;i++){
        printf("enter no.of elements %d\n",i);
        scanf("%d",&n);
        marks->ptr[i]=n;
    }
}

void show(struct array *marks){

    for(int i=0;i<marks->used_size;i++){
        printf("%d\n",marks->ptr[i]);
    }
}
 
int main(){

    struct array marks;
    createarray(&marks,10,3);

    printf("show casing values\n");
    setval(&marks);

    printf("display used size\n");
    show(&marks);

    printf("done\n");

    return 0;
    }