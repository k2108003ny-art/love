#include<stdio.h>

int main(){
  int A,B;
  char op;

  printf("一つ目の整数を入力: ");
  scanf("%d",&A);

  printf("計算記号を入力(+ - * /): ");
  scanf(" %c",&op);

  printf("二つ目の整数を入力: ");
  scanf("%d",&B);

if (op == '+'){
    printf("結果:%d\n",A+B);
}else if (op == '-'){
    printf("結果:%d\n",A-B);
}else if (op == '*'){
    printf("結果:%d\n",A*B);
}else if (op== '/'){
    if (B  != 0){
        printf("結果:%d\n",A/B);
    }else{
        printf("0では割れません。\n");
    }
}else{
    printf("演算子が違います。\n");
}
return 0;
}
