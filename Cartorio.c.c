#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em m�morioa
#include <locale.h>  //biblioteca de aloca��o de texto por regi�o
#include <string.h> // biblioteca respons�vel por cuidar da string

int registro() // Fun��o responsavel por cadastrar os usuarios no sistema
{
	// Inicio cria��o de variaveis/string
   char arquivo[40];
   char cpf[40];
   char nome[40];
   char sobrenome[40];
   char cargo[40];
   // Final da cria��o de variaveis/string
   
   printf("Digite o CPF a ser cadastrado: "); // Coletando informa��o do usuario 
   scanf ("%s", cpf); // %s refere-se a string

   strcpy(arquivo, cpf); //respons�vel por copiar as string
   
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
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL);
	{
		printf("N�o foi possivel abrir o aquivo, n�o localizado!\n");
	}
	
	while(fgets(conteudp, 200, file))-!= NULL);
	{
		printf("\nEssas s�o as informa��es do usu�rios: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
}

int deletar()
{
	char cpf[40];
	
	printf("Digite p CPF do usu�rio a ser deletado: ");
	scanf("%s,cpf");
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!.\n");
	}
}


int main()
    {
	int opcao=0; //Definindo vari�veis 
	int laco=1;
	char senha digitada []="a";
	int comparacao;
	
	printf("### Cart�rio da EBAC ###\n\n");
	printf("### Login de administrador!\n\nDigite a senha");
	
	compara��o = strcmp(senhadigitada, "admin");
	
	if(comparacao == 0)
	{
		system ("cls")
		for(laco=1;laco=1;)
	}
	
	{
	
      setlocale(LC_ALL, "Portuguese"); //definindo a linguagem 
    
	  printf("### Cart�rio da EBAC ### \n\n"); //inicio do menu
 	  printf("Escolha a op��o desejada do menu:\n\n");
	  printf("\t1 - Registrar nomes\n");
	  printf("\t2 - Consultar nomes\n");
	  printf("\t3 - Deletar nomes\n\n");
	  printf("\t4 - Sair do sistema\n\n");
	  printf("Op��o: ");  //fim do menu

	  scanf("%d" , &opcao); //armazenamento a escolha do usu�rio 
	
	  system("cls"); // Responsavel por deletar 

	switch(opcao) // Inicio da sele��o do menu
	{
		case 1:
		registro(); // Chamada de fun��es
	    break;
	    
	    case 2:
	    consulta();
	    break;
	    
	    case 3:
	    deletar();
	    break;
	    
	    case 4:
	    deletar("Obrigado por utilizar o sistema!\n");
	    return 0;
	    break;
	    
	    
	    default:
	    printf("Essa op��o n�o est� disponivel");
	    system("pause");
	    break;
	} // Fim da sele��o
	}
}

else
printf("Senha incorreta!");

}

