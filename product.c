#include "product.h"

int createProduct(Product *p){
    getchar();
    printf("제품명은? ");
    scanf("%s" , p->name);
    printf("중량은? ");
    scanf("%d" , &p->weight);
    printf("가격은? ");
    scanf("%d" , &p->price);
    printf("별점개수는? ");
    scanf("%d" , &p->num);
    printf("=>추가됨!");
    return 1;
}

void readProduct(Product p){
    printf("%8s %4d %4d" , p.name, p.weight, p.price);
    for(int i=0; i<p.num; i++)
    printf("★");
    for(int i=0; i<5-p.num; i++)
    printf("☆");
    printf("\n");
}

void listProduct(Product *p, int count){
    printf("\n제품명 중량 가격 별점\n");
    for(int i=0; i<count; i++){
        if(p[i].num==-1) continue;
        printf("%d " , i+1);
        readProduct(p[i]);
    }
}

int selectDataNo(Product *p, int count){
    int no;
    listProduct(p, count);
    printf("번호는(취소:0)?");
    scanf("%d" , &no);
    return no;
}

int UpdateProduct(Product *p){
    getchar();
    printf("제품명은? ");
    scanf("%s" , p->name);
    printf("중량은? ");
    scanf("%d" , &p->weight);
    printf("가격은? ");
    scanf("%d" , &p->price);
    printf("별점개수는? ");
    scanf("%d" , &p->num);
    printf("=> 수정완료!\n");
    return 1;
}

int deleteProduct(Product *p){
    int no;
    printf("정말로 삭제하시겠습니까?(삭제:1)");
    scanf("%d" , &no);
    if(no==1){
    p->name[0] = '\0';
    p->weight = -1;
    p->price = -1;
    p->num = -1;
    printf("=> 삭제됨!\n");
    }
    return 1;
}

int selectMenu(){
    int menu;
    printf("\n*** 메뉴 ***\n");
    printf("1. 조회\n");
    printf("2. 추가\n");
    printf("3. 수정\n");
    printf("4. 삭제\n");
    printf("5. 파일저장\n");
    printf("6. 이름검색\n");
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}

