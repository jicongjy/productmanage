#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20]; //제품명
    int weight; //중량
    int price; //가격
    int num; //별점개수
} Product;

int createProduct(Product *p); // 제품을 추가하는 함수
void readProduct(Product p); // 하나의 제품 출력 함수
void listProduct(Product *p, int count); // 전체 등록된 제품 리스트 출력
int selectDataNo(Product *p, int count); // 번호 선택
int UpdateProduct(Product *p); //제품을 정보를 수정하는 함수
int deleteProduct(Product *p); //제품을 삭제하는 함수
int selectMenu(); //메뉴를 선택하는 함수
void saveData(Product *p, int count);//파일로 저장하는 함수
int loadData(Product *p);//파일을 로드하는함수
void searchName(Product *p, int count);//검색하는 함수
