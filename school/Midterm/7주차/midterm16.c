#include<stdio.h>

#pragma pack(1)

typedef struct Tag
{
    char arr[12];
    int num1;
    int num2;
} Mystruct;

int main(){
    FILE* fp = NULL;

    fp = fopen("a.bin","wb");
    if(fp==NULL){
        printf("파일을 열지 못했습니다.\n");
        return 1;
    }    

    Mystruct s1 = {"KONKUK",1,2};
    Mystruct s2 = {"UNIVERSITY",3,4};

    fwrite(&s1,sizeof(s1),1,fp);
    fwrite(&s2,sizeof(s2),2,fp);

    fclose(fp);

    fp=fopen("a.bin","rb");
    if(fp==NULL){
        printf("파일을 열지 못했습니다.\n");
        return 1;
    }

    Mystruct p,q;

    fread(&p,sizeof(p),1,fp);
    fread(&q,sizeof(q),1,fp);

    printf("%s %s %d %d %d",p.arr,q.arr,p.num1,q.num2,p.num1+q.num2);

    fclose(fp);

    return 0;

    //KONKUKUNIVERSITY%
}
