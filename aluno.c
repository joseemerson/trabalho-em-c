#include <stdio.h>
#include<stdlib.h>
#include "aluno.c"
typedef struct node
{
Aluno A;
struct node*esq;
struct node*dir;
}*No;

typedef No noRaiz;

noRaiz criarArvore();
noRaiz criarArvore(Aluno);
void niveliter(noRaiz);

int main(){
    Aluno k=criarAluno(10, "Kennedy Lopes\0",9.);
    No raiz=malloc(sizeof(struct node));
    raiz->esq=0;
    raiz->dir=0;
    raiz->A=k;
    Aluno B=criarAluno(12, "Francisco\0",9.);
    Aluno C=criarAluno(15,"pedro\0",8.);
    Aluno D=criarAluno(8,"henrique\0",7.);

    noRaiz r=criarArvore(B);
    r->dir=criarArvore(C);
    r->esq=criarArvore(D);
     return 0;
}
noRaiz criarAluno(){
    noRaiz raiz =(No*)malloc(sizeof(struct node));
    raiz->A=NULL;
    raiz->dir=0;
    raiz->esq=0;
    return raiz;

} 
noRaiz criarArvores(Aluno A){
    noRaiz raiz=(No)malloc(sizeof(struct node));
    raiz->A=A;
    raiz->dir=0;
    raiz->esq=0;
    return raiz;
}
void niveliter(noRaiz r){
    int i,tamanho,a,b;
    noRaiz raiz= r;
    printf("informe o tamanho da raiz");
    scanf("%d",&tamanho);
    if (raiz != 0)
    {
        for ( i = raiz; i < tamanho; i++)
        {
            raiz->esq=a;
            raiz->dir=b;
        }
        
    }
    
  printf("%p",raiz);  
}
