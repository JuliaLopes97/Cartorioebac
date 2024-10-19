#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em mémorioa
#include <locale.h>  //biblioteca de alocação de texto por região
#include <string.h> // biblioteca responsável por cuidar da string

int registro() // Função responsavel por cadastrar os usuarios no sistema
{
	// Inicio criação de variaveis/string
   char arquivo[40];
   char cpf[40];
   char nome[40];
   char sobrenome[40];
   char cargo[40];
   // Final da criação de variaveis/string
   
   printf("Digite o CPF a ser cadastrado: "); // Coletando informação do usuario 
   scanf ("%s", cpf); // %s refere-se a string

   strcpy(arquivo, cpf); //responsável por copiar as string
   
   FILE *file; //cria o arquivo no banco de dados
   file = fopen(arquivo, "w"); // cria o arquivo e o "w" significa escrever 
   fprintf(file,cpf); //salvo o valor da variavel 
   fclose(file); //fecha o arquivo
   
   file = fopen(arquivo, "a");
   fprintf(file,",");
   fclose(file);
   
   printf("Digite o nome a ser cadastrado: ");
   scanf("%s",nome);
   
   file = fopnen(arquivo, "a");
   fprintf(file,nome);
   fclose(file);
   
   printf("digite o sobrenome a ser cadastrado");
   scanf("%s",sobrenome);
   
   file = fopen(arquivo, "a");
   fprintf(file,sobrenome);
   fclose(file);
	
   file = fopen(arquivo, "a");
   fprintf(file,",");
   fclose(file);
	
   printf("Digite o cargo a ser cadastrado: ");
   scanf("%s",cargo);
	
   file = fopen(arquivo, "a");
   fprintf(file,cargo);
   fclose(file);
	
   system("pause");
   
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //definindo a linguagem 
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", CPF);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL);
	{
		printf("Não foi possivel abrir o aquivo, não localizado!\n");
	}
	
	while(fgets(conteudp, 200, file))-!= NULL)
	{
		printf("\nEssas são as informações do usuários: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
}

int deletar()
{
	printf("Você escolheu deletar os nomes!");
	system("pause");
}


int main()
    {
	int opcao=0; //Definindo variáveis 
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	

	
	
      setlocale(LC_ALL, "Portuguese"); //definindo a linguagem 
    
	  printf("### Cartório da EBAC ### \n\n"); //inicio do menu
 	  printf("Escolha a opção desejada do menu:\n\n");
	  printf("\t1 - Registrar nomes\n");
	  printf("\t2 - Consultar nomes\n");
	  printf("\t3 - Deletar nomes\n\n");
	  printf("opcão:"); //final do menu

	
	  scanf("%d" , &opcao); //armazenamento a escolha do usuário 
	
	  system("cls"); // Responsavel por deletar 

	switch(opcao) // Inicio da seleção do menu
	{
		case 1:
		registro(); // Chamada de funções
	    break;
	    
	    case 2:
	    consulta();
	    break;
	    
	    case 3:
	    deletar();
	    break;
	    
	    
	    default:
	    printf("Essa opção não está disponivel");
	    system("pause");
	    break;
	} // Fim da seleção
	}
}

