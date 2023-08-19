#include <stdio.h>
#include <conio.h>

struct Data  {
  int dia;
  int mes;
  int ano;
};

typedef struct {
  int matricula;
  char nome[30];
  float salario;
} Usuario;

int main() {
  Usuario user;
  
  printf("Digite o nome do usuario: ");
  fgets(user.nome, 30, stdin);
  
  printf("Digite a matricula: ");
  scanf("%d", &user.matricula);
  
  printf("Digite o salario: ");
  scanf("%f", &user.salario);
  
  float salarioReajustado = (user.salario*0.15) + user.salario;
  
  printf("Salario reajustado: R$%.2f", salarioReajustado);
  
  return 0;
}
