#include "Funcoes.h"

// Definição das variáveis globais
	char HOST[] = "localhost";
	char USER[] = "Kairo";
	char PASS[] = "";
	const char* DB = "addak";
	char* consult;
	const char* sentence;
	string sentence_aux;
    char Nome[25]; 
    char CNPJ[20]; 
    char Telefone[16]; 
    char CEP[12];
    char Cidade[15];
    char Bairro[25];
    char Rua[20];
    char Numero[5];
    char Obs[250];
    char Categoria[20];
    char Materias[50];
    char CustoProducao[8];
    char TaxaLucro[8];
    int Id; 
    int Quantidade;
    int answer;
    int ID_Produto;
    int idPedido;
    int ultimoId;
    bool ProgramIsOpened = true; 
    MYSQL* obj = mysql_init(0);
	MYSQL_RES* result = mysql_store_result(obj);
 //___________________________________________________________________________________//
///////////////////////////////////////////////////////////////////////////////////////
void fecharMySQL(MYSQL* obj) {
    mysql_close(obj);
}
 //_____________________________________________________________________________________//
/////////////////////////////////////////////////////////////////////////////////////////
void Fim_do_Programa(){
	 
	system("cls");
	int resposta;
	printf("Encerrar o programa?\n\n\n\n");
	printf("[1] Encerrar \n");
	printf("[0] Voltar ao início\n\n\n");
	printf(" :");
	do{
		scanf(" %d", &resposta);
		if(resposta != 0 && resposta != 1)
		{
			printf("Resposta Inválida.\n");
		}
	}while(resposta != 0 && resposta != 1);
	if(resposta == 1){
		system("cls");
	cout << "Programa Finalizado!" << endl;	
	
	}
	else
	{
		system("cls");
			Tela_Selecao();
	}
    delete[] consult;// Libera a memória alocada para a consulta
	  fecharMySQL(obj); 
    system("pause");
}
 //_____________________________________________________________________________________//
/////////////////////////////////////////////////////////////////////////////////////////
void Tela_ADDAK(){
	int senha;
const int senha_Kairo = 123;
const int senha_Diogo = 123;
const int senha_Diego = 123;
const int senha_Adriano = 123;

do {
	time_t t = time(NULL);
    struct tm *data_atual = localtime(&t);

    // Obtendo o ano, mês e dia atual
    int ano_atual = data_atual->tm_year + 1900;
    int mes_atual = data_atual->tm_mon + 1;
    int dia_atual = data_atual->tm_mday;

    // Exibindo a data atual
    cout << "                                                           " << dia_atual << "/" << mes_atual << "/" << ano_atual << endl;
system("cls");
	setlocale(LC_ALL,"C");
/*1*/printf("\xDB\xDB\xDF\xDF\xDF\xDB\xDC \xDB\xDF\xDF\xDF\xDF\xDC  \xDB\xDF\xDF\xDF\xDF\xDC  \xDB\xDB\xDF\xDF\xDF\xDB\xDC \xDB    \xDC\xDF\n");
/*2*/printf("\xDB     \xDB \xDB     \xDB \xDB     \xDB \xDB     \xDB \xDB   \xDC\xDF\n");
/*3*/printf("\xDB     \xDB \xDB     \xDB \xDB     \xDB \xDB     \xDB \xDB \xDC\xDF\n");
/*4*/printf("\xDB\xDC\xDC\xDC\xDC\xDC\xDB \xDB     \xDB \xDB     \xDB \xDB\xDC\xDC\xDC\xDC\xDC\xDB \xDB\xDC\xDF\n");
/*5*/printf("\xDB     \xDB \xDB     \xDB \xDB     \xDB \xDB     \xDB \xDB \xDF\xDC\n");
/*6*/printf("\xDB     \xDB \xDB     \xDB \xDB     \xDB \xDB     \xDB \xDB  \xDF\xDC\n");
/*7*/printf("\xDB     \xDB \xDB\xDC\xDC\xDC\xDC\xDF  \xDB\xDC\xDC\xDC\xDC\xDF  \xDB     \xDB \xDB   \xDF\xDC\n");
setlocale(LC_ALL,"Portuguese");
printf("ACREDITAMOS NO DESENVOLVIMENTO SUSTENTÁVEL");
printf("\n");
printf("\n");
printf("\n");
printf("Senha: \n");
scanf(" %d", &senha);
}while(senha != senha_Adriano && senha != senha_Diego && senha != senha_Diogo && senha != senha_Kairo );

if( senha == senha_Adriano || senha == senha_Diego || senha == senha_Diogo || senha == senha_Kairo)
{
	system("cls");
 Tela_Selecao();
}
}
 //__________________________________________________________________________________//
//////////////////////////////////////////////////////////////////////////////////////
void Campo_Cliente(){
MYSQL* obj;
	int tela;
	do{
	printf("\\\\__ Campo Cliente __//\n\n\n\n");
	printf("Qual será sua ação?\n");
	printf("[1] Cadastro\n");
	printf("[2] DATA BASE\n");
	printf("[3] Modificação\n");
	printf("[4] Busca\n");
	printf("[5] Deletar\n");
	printf("\n\n\n\n\n\n");
	printf("                         [0] Voltar\n");
	printf("Escolha: ");
	scanf(" %d", &tela);
	system("cls");
}while (tela!= 1 && tela!= 2 && tela!= 3 && tela!= 4 && tela!= 5 && tela!= 0);
switch(tela){
			case 1 : Cadastro_Cliente(); break;
			case 2 : DB_Cliente(); break;
			case 3 : Modificar_Cliente(); break;
			case 4 : Busca_Cliente();break;
			case 5 : Delete_Cliente();break;
			case 0 : Tela_Selecao(); break;
			default : printf("ERRO de SISTEMA");
			printf("\n\n");
			Fim_do_Programa();
			break;
		}
	
}
 //_________________________________________________________________________________________//
/////////////////////////////////////////////////////////////////////////////////////////////
void Cadastro_Cliente(){
 /**/ {//Conexão com o Servidor MYSQL
	char* consult; // Declara um ponteiro para armazenar a consulta SQL
    const char* sentence; // Declara uma constante para armazenar a sentença SQL
    string sentence_aux; // Declara uma string para armazenar a consulta SQL como uma string

    // Inicializa o objeto MySQL
    if (!(obj = mysql_init(0))) {
        cout << "ERRO: O objeto MySQL não pôde ser criado." << endl;
        return ;
    }

    // Tenta conectar ao banco de dados MySQL
    if (!mysql_real_connect(obj, HOST, USER, PASS, "addak", 3306, NULL, 0)) {
        cout << "ERRO: Algumas informações do banco de dados estão erradas ou não existem." << endl;
        cout << mysql_error(obj) << endl;
        return ;
    }
    	}
 // Registros

    setlocale(LC_ALL,"Portuguese");
    
	while (ProgramIsOpened) {
       
       
	  
	 /**/	{//Formulário Cadastro Cliente
		cout << "Adicione os dados seguindo os exemplos.";
		printf("\n\n\n");
        //cin.ignore(100, '\n');
       //cout << endl;
        Id = 0;
        cin.ignore(100, '\n');
 cout << endl;
        cout << "Nome: ";
        cin.getline(Nome, 15, '\n');
        cout << endl;

        cout << "CNPJ (XX.XXX.XXX/0001-ZZ): ";
        cin.getline(CNPJ, 20, '\n');
        cout << endl;

        cout << "Telefone ""(XX)XXXXX-XXXX"": ";
        cin.getline(Telefone, 16, '\n');
        cout << endl;

        cout << "CEP (XXXXX-XXX): ";
        cin.getline(CEP, 12, '\n');
        cout << endl;

        cout << "Cidade: ";
        cin.getline(Cidade, 15, '\n');
        cout << endl;

        cout << "Bairro: ";
        cin.getline(Bairro, 25, '\n');
        cout << endl;

        cout << "Rua: ";
        cin.getline(Rua, 20, '\n');
        cout << endl;

        cout << "Número: ";
        cin.getline(Numero, 5, '\n');
        cout << endl;
        
        cout << "Observação: ";
        cin.getline(Obs, 250, '\n');
        cout << endl;
        
}
       /**/ {//Adição das informações e Verificação da conexão
		
		sentence_aux = "INSERT INTO Cliente_Empresa(`Id_Cliente`, `Nome`, `CNPJ`, `Telefone`, `Cep`, `Cidade`, `Bairro`, `Rua`, `Numero`, `Observacao`) VALUES(%d, '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s')";
        sentence = sentence_aux.c_str();

        consult = new char[sentence_aux.length() + 500];
        sprintf(consult, sentence, Id, Nome, CNPJ, Telefone, CEP, Cidade, Bairro, Rua, Numero, Obs);

        if (mysql_ping(obj)) {
            cout << "ERRO: Impossível conectar." << endl;
            cout << mysql_error(obj) << endl;
        }

        if (mysql_query(obj, consult)) {
            cout << "ERRO: " << mysql_error(obj) << endl;
            cin.ignore(100, '\n');
            getchar();
        } else {
            cout << "Informações adicionadas corretamente." << endl;
        }
}
        mysql_store_result(obj);
       system("pause");
        system("cls");
		cout << endl << "Adicionar novo cadastro?" << endl;
        cout << "[1]: Sim" << endl;
        cout << "[0]: Não" << endl;
        cout << "Resposta: ";
        cin >> answer;
        cout << endl;
system("cls");
        if (answer == 0) {
            ProgramIsOpened = false;
        }
	    delete[] consult;
	}
		Fim_do_Programa();
}
 //_________________________________________________________________________________________//
/////////////////////////////////////////////////////////////////////////////////////////////
void Delete_Cliente(){
	using namespace std;
	MYSQL* obj = mysql_init(0);
    int id = 0;

    cout << "Digite o Id do cliente que será excluído: ";
    cin >> id;

    // Conectar ao banco de dados
    if (!mysql_real_connect(obj, HOST, USER, PASS, "addak", 3306, NULL, 0)) {
        cout << "ERRO: Algumas informações do banco de dados estão erradas ou não existem." << endl;
        cout << mysql_error(obj) << endl;
        fecharMySQL(obj);
        return;
    }

    // Construir a consulta SQL de exclusão
    stringstream ss;
    ss << "DELETE FROM Cliente_Empresa WHERE Id_Cliente = " << id;
    string consulta = ss.str();

    // Executar a consulta SQL de exclusão
    if (mysql_query(obj, consulta.c_str())) {
        cout << "ERRO: " << mysql_error(obj) << endl;
    } else {
        cout << "Cliente excluído com sucesso." << endl;
    }
system("pause");
    // Fechar a conexão
    fecharMySQL(obj);
    Fim_do_Programa();
}
 //_________________________________________________________________________________________//
/////////////////////////////////////////////////////////////////////////////////////////////
void DB_Cliente() {
 MYSQL* obj = mysql_init(0);

    if (!obj) {
        cout << "ERRO: O objeto MySQL não pôde ser criado." << endl;
        return;
    }

    if (!mysql_real_connect(obj, HOST, USER, PASS, DB, 3306, NULL, 0)) {
        cout << "ERRO: Algumas informações do banco de dados estão erradas ou não existem." << endl;
        cout << mysql_error(obj) << endl;
        mysql_close(obj);
        return;
    }

    if (mysql_query(obj, "SELECT * FROM Cliente_Empresa;")) {
        cout << "ERRO: " << mysql_error(obj) << endl;
        mysql_close(obj);
        return;
    }

    MYSQL_RES* result = mysql_store_result(obj);

    if (!result) {
        cout << "ERRO: Falha ao recuperar o resultado da consulta." << endl;
        mysql_close(obj);
        return;
    }

    cout << "Registros da tabela Cliente_Empresa:" << endl;

    while (MYSQL_ROW row = mysql_fetch_row(result)) {
        cout << "\tId_Cliente: " << row[0] << "\t Nome: " << row[1] << "\t CNPJ: " << row[2] << "\t Telefone: " << row[3]
             << "\t Cep: " << row[4] << "\t Cidade: " << row[5] << "\t Bairro: " << row[6] << "\t Rua: " << row[7]
             << "\t Numero: " << row[8]  << endl << endl;
    }

    mysql_free_result(result);
    mysql_close(obj);

    cout << endl;
    cout << "Fim da lista de clientes." << endl;
    cout << endl;
    system("pause");
    Fim_do_Programa();
}
 //_________________________________________________________________________________________//
/////////////////////////////////////////////////////////////////////////////////////////////
void Modificar_Cliente() {
	int opcao, novo;
	do{
		MYSQL* obj;
    
setlocale(LC_ALL,"Portuguese");
    // Conectar ao banco de dados
    if (!(obj = mysql_init(0))) {
        cout << "ERRO: O objeto MySQL não pôde ser criado." << endl;
        return;
    }

    if (!mysql_real_connect(obj, HOST, USER, PASS, "addak", 3306, NULL, 0)) {
        cout << "ERRO: Algumas informações do banco de dados estão erradas ou não existem." << endl;
        cout << mysql_error(obj) << endl;
        return;
    }

    // Solicitar o ID para modificar
	 int id;
    cout << "Digite o ID do cliente que deseja modificar: ";
    cin >> id;

    // Executar a consulta SQL
    char consulta[1000];
    sprintf(consulta, "SELECT * FROM Cliente_Empresa WHERE Id_Cliente = %d", id);
    if (mysql_query(obj, consulta)) {
        cout << "ERRO: " << mysql_error(obj) << endl;
        fecharMySQL(obj);
        return;
    }

    // Recuperar o resultado
    MYSQL_RES* result = mysql_store_result(obj);

    if (!result) {
        cout << "ERRO: Falha ao recuperar o resultado da consulta." << endl;
        fecharMySQL(obj);
        return;
    }

    // Exibir os detalhes do cliente
    MYSQL_ROW row;
    if ((row = mysql_fetch_row(result))) {
        cout << "Detalhes do Cliente:" << endl;
        cout << "ID: " << row[0] << endl;
        cout << "Nome: " << row[1] << endl;
        cout << "CNPJ: " << row[2] << endl;
        cout << "Telefone: " << row[3] << endl;
        cout << "Cep: " << row[4] << endl;
        cout << "Cidade: " << row[5] << endl;
        cout << "Bairro: " << row[6] << endl;
        cout << "Rua: " << row[7] << endl;
        cout << "Número: " << row[8] << endl;
        cout << "Observação" << row[9] << endl;
        // Exibir outros campos conforme necessário
    } else {
        cout << "Cliente não encontrado." << endl;
        fecharMySQL(obj);
        Fim_do_Programa();
        return;
    }
    printf("Qual dado será alterado?\n\n");
        cout << "[1]Nome\n";
        cout << "[2]CNPJ\n";
        cout << "[3]Telefone\n";
        cout << "[4]Cep\n";
        cout << "[5]Cidade\n";
        cout << "[6]Bairro\n";
        cout << "[7]Rua\n";
        cout << "[8]Número\n";
        cout << "[9]Observação\n";
        cout << "[0] Nenhum\n";
        printf("R: ");
        scanf(" %d", &opcao);
        system("cls");
        if(opcao==0){
        	Fim_do_Programa();
        	return;
		}
        {//mostra novamente os dados 
       	if (!(obj = mysql_init(0))) {
        cout << "ERRO: O objeto MySQL não pôde ser criado." << endl;
        return;
    }

    if (!mysql_real_connect(obj, HOST, USER, PASS, "addak", 3306, NULL, 0)) {
        cout << "ERRO: Algumas informações do banco de dados estão erradas ou não existem." << endl;
        cout << mysql_error(obj) << endl;
        return;
    }

    // Solicitar o ID para modificar

	 

    // Executar a consulta SQL
    char consulta[1000];
    sprintf(consulta, "SELECT * FROM Cliente_Empresa WHERE Id_Cliente = %d", id);
    if (mysql_query(obj, consulta)) {
        cout << "ERRO: " << mysql_error(obj) << endl;
        fecharMySQL(obj);
        return;
    }

    // Recuperar o resultado
    MYSQL_RES* result = mysql_store_result(obj);

    if (!result) {
        cout << "ERRO: Falha ao recuperar o resultado da consulta." << endl;
        fecharMySQL(obj);
        return;
    }

    // Exibir os detalhes do cliente
    MYSQL_ROW row;
    if ((row = mysql_fetch_row(result))) {
        cout << "Detalhes do Cliente:" << endl;
        cout << "ID: " << row[0] << endl;
        cout << "Nome: " << row[1] << endl;
        cout << "CNPJ: " << row[2] << endl;
        cout << "Telefone: " << row[3] << endl;
        cout << "Cep: " << row[4] << endl;
        cout << "Cidade: " << row[5] << endl;
        cout << "Bairro: " << row[6] << endl;
        cout << "Rua: " << row[7] << endl;
        cout << "Número: " << row[8] << endl;
        cout << "Observação" << row[9] << endl << endl<< endl;
       	
	   }
        // Exibir outros campos conforme necessário
    }
switch (opcao){
    // Solicitar as modificações
    case 1:{
    	
	char novoNome[100];
    cout << "Digite o novo nome: ";
    cin.ignore();
    cin.getline(novoNome, 100);
    // Construir a consulta de modificação
    sprintf(consulta, "UPDATE Cliente_Empresa SET Nome = '%s' WHERE Id_Cliente = %d", novoNome, id);}
	break;
	case 2:{
	char CNPJ[20];
    cout << "Digite o novo CNPJ: ";
    cin.ignore();
    cin.getline(CNPJ, 20);

    // Construir a consulta de modificação
    sprintf(consulta, "UPDATE Cliente_Empresa SET CNPJ = '%s' WHERE Id_Cliente = %d", CNPJ, id);}
	break;
case 3:{
	char Telefone[20];
    cout << "Digite o novo Telefone: ";
    cin.ignore();
    cin.getline(Telefone, 20);

    // Construir a consulta de modificação
    sprintf(consulta, "UPDATE Cliente_Empresa SET Telefone = '%s' WHERE Id_Cliente = %d", Telefone, id);}
	break;
case 4:{
	char Cep[20];
    cout << "Digite o novo Cep: ";
    cin.ignore();
    cin.getline(Cep, 20);

    // Construir a consulta de modificação
    sprintf(consulta, "UPDATE Cliente_Empresa SET Cep = '%s' WHERE Id_Cliente = %d", Cep, id);}
	break;
case 5:{
	char Cidade[20];
    cout << "Digite o novo Cidade: ";
    cin.ignore();
    cin.getline(Cidade, 20);

    // Construir a consulta de modificação
    sprintf(consulta, "UPDATE Cliente_Empresa SET Cidade = '%s' WHERE Id_Cliente = %d", Cidade, id);}
	break;
case 6:{
	char Bairro[20];
    cout << "Digite o novo Bairro: ";
    cin.ignore();
    cin.getline(Bairro, 20);

    // Construir a consulta de modificação
    sprintf(consulta, "UPDATE Cliente_Empresa SET Bairro = '%s' WHERE Id_Cliente = %d", Bairro, id);}
	break;
case 7:{
	char Rua[20];
    cout << "Digite o novo Rua: ";
    cin.ignore();
    cin.getline(Rua, 20);

    // Construir a consulta de modificação
    sprintf(consulta, "UPDATE Cliente_Empresa SET Rua = '%s' WHERE Id_Cliente = %d", Rua, id);}
	break;
case 8:{
	char Numero[20];
    cout << "Digite o novo Numero: ";
    cin.ignore();
    cin.getline(Numero, 20);

    // Construir a consulta de modificação
    sprintf(consulta, "UPDATE Cliente_Empresa SET Numero = '%s' WHERE Id_Cliente = %d", Numero, id);}
    case 9:{
	char Obs[250];
    cout << "Digite a nova Observação: ";
    cin.ignore();
    cin.getline(Obs, 250);
    // Construir a consulta de modificação
    sprintf(consulta, "UPDATE Cliente_Empresa SET Observacao = '%s' WHERE Id_Cliente = %d", Obs, id);}
	break;	
default : {
printf("Erro de Sistema");}break;
}
    // Executar a consulta SQL de modificação
    if (mysql_query(obj, consulta)) {
        cout << "ERRO: " << mysql_error(obj) << endl;
    }else 
	{ printf("\n");
        cout << "Cliente modificado com sucesso." << endl;
         printf("\n\n\n");
        system("pause");
		}
        do{
        	system("cls");
    	printf("Alterar mais algum dado?\n");
    	printf("[1] Sim\n");
    	printf("[0] Não\n");
    	printf("R: ");
    	scanf(" %d", &novo);
    	if(novo != 1 && novo != 0){
    		printf("INVÁLIDO");
    		system("pause");
		}
	}while(novo != 1 && novo != 0);
    printf("\n");
    system("pause");
    system("cls");
	}while(novo==1);
		Fim_do_Programa();
    // Liberar o resultado e fechar a conexão
    mysql_free_result(result);
    fecharMySQL(obj);
}
 //_________________________________________________________________________________________//
/////////////////////////////////////////////////////////////////////////////////////////////
void Busca_Cliente(){
    MYSQL* obj;
setlocale(LC_ALL,"Portuguese");
    // Conectar ao banco de dados
    if (!(obj = mysql_init(0))) {
        cout << "ERRO: O objeto MySQL não pôde ser criado." << endl;
        return;
    }

    if (!mysql_real_connect(obj, HOST, USER, PASS, "addak", 3306, NULL, 0)) {
        cout << "ERRO: Algumas informações do banco de dados estão erradas ou não existem." << endl;
        cout << mysql_error(obj) << endl;
        return;
    }

    // Solicitar o ID para modificar
    int id;
    cout << "Buscar pelo ID: ";
    cin >> id;

    // Executar a consulta SQL
    char consulta[1000];
    sprintf(consulta, "SELECT * FROM Cliente_Empresa WHERE Id_Cliente = %d", id);
    if (mysql_query(obj, consulta)) {
        cout << "ERRO: " << mysql_error(obj) << endl;
        fecharMySQL(obj);
        return;
    }

    // Recuperar o resultado
    MYSQL_RES* result = mysql_store_result(obj);

    if (!result) {
        cout << "ERRO: Falha ao recuperar o resultado da consulta." << endl;
        fecharMySQL(obj);
        return;
    }

    // Exibir os detalhes do cliente
    MYSQL_ROW row;
    if ((row = mysql_fetch_row(result))) {
        cout << "Detalhes do Cliente:" << endl;
        cout << "Nome: " << row[1] << endl;
        cout << "CNPJ: " << row[2] << endl;
        cout << "Telefone: " << row[3] << endl;
        cout << "Cep: " << row[4] << endl;
        cout << "Cidade: " << row[5] << endl;
        cout << "Bairro: " << row[6] << endl;
        cout << "Rua: " << row[7] << endl;
        cout << "Número: " << row[8] << endl;
        cout << "Observação: " << row[9] << endl;
        // Exibir outros campos conforme necessário
    } else {
        cout << "\n\nCliente não encontrado." << endl;
        fecharMySQL(obj);
        printf("\n\n");
        system("pause");
        return;
    }
    system("pause");
    system("cls");
    Fim_do_Programa();
}
 //_________________________________________________________________________________________//
/////////////////////////////////////////////////////////////////////////////////////////////
void Cadastro_Produto(){
	{//Conexão com o Servidor MYSQL
	char* consult; // Declara um ponteiro para armazenar a consulta SQL
    const char* sentence; // Declara uma constante para armazenar a sentença SQL
    string sentence_aux; // Declara uma string para armazenar a consulta SQL como uma string

    // Inicializa o objeto MySQL
    if (!(obj = mysql_init(0))) {
        cout << "ERRO: O objeto MySQL não pôde ser criado." << endl;
        return ;
    }

    // Tenta conectar ao banco de dados MySQL
    if (!mysql_real_connect(obj, HOST, USER, PASS, "addak", 3306, NULL, 0)) {
        cout << "ERRO: Algumas informações do banco de dados estão erradas ou não existem." << endl;
        cout << mysql_error(obj) << endl;
        return ;
    }
    	}
 // Registros

    setlocale(LC_ALL,"Portuguese");
    
	while (ProgramIsOpened) {
        setlocale(LC_ALL, "Portuguese");
	  
	 /**/	{//Formulário Cadastro Cliente
		cout << "Use ponto ""."" ao invés de virgula "","", .";
		printf("\n\n\n");
        Id = 0;
        cin.ignore(100, '\n');
        cout << endl;

        cout << "Nome: ";
        cin.getline(Nome, 25, '\n');
        cout << endl;

        cout << "Categoria: ";
        cin.getline(Categoria, 20, '\n');
        cout << endl;

        cout << "Materiais: ";
        cin.getline(Materias, 50, '\n');
        cout << endl;

        cout << "Custo_Produção: ";
        cin.getline(CustoProducao, 8, '\n');
        cout << endl;

        cout << "Variação_Pocentagem: ";
       cin.getline(TaxaLucro, 8, '\n');
        cout << endl;

        cout << "Quantidade: ";
        cin >> Quantidade;
        cout << endl;
}
 {//Adição das informações e Verificação da conexão
		

		sentence_aux = "INSERT INTO Produtos(`Id_Produtos`, `Nome`, `Categoria`,`Materiais`, `Custo_Producao`, `Variacao_Pocentagem`, `Quantidade`) VALUES(%d, '%s', '%s', '%s', '%s', '%s', '%d')";
        sentence = sentence_aux.c_str();

        consult = new char[sentence_aux.length() + 500];
        sprintf(consult, sentence, Id, Nome, Categoria, Materias, CustoProducao, TaxaLucro,Quantidade);

        if (mysql_ping(obj)) {
            cout << "ERRO: Impossível conectar." << endl;
            cout << mysql_error(obj) << endl;
        }

        if (mysql_query(obj, consult)) {
            cout << "ERRO: " << mysql_error(obj) << endl;
            cin.ignore(100, '\n');
            getchar();
        } else {
            cout << "Informações adicionadas corretamente." << endl;
        }
}
        mysql_store_result(obj);
       system("pause");
        system("cls");
		cout << endl << "Adicionar novo cadastro?" << endl;
        cout << "[1]: Sim" << endl;
        cout << "[0]: Não" << endl;
        cout << "Resposta: ";
        cin >> answer;
        cout << endl;
system("cls");
        if (answer == 0) {
            ProgramIsOpened = false;
        }
	    delete[] consult;
	}
		Fim_do_Programa();
}
 //_________________________________________________________________________________________//
/////////////////////////////////////////////////////////////////////////////////////////////
void DB_Produto() {
    // conexão com a base de dados
    MYSQL* obj;

    if (!(obj = mysql_init(0))) {
        cout << "ERRO: O objeto MySQL não pôde ser criado." << endl;
        return;
    }

    if (!mysql_real_connect(obj, HOST, USER, PASS, DB, 3306, NULL, 0)) {
        cout << "ERRO: Algumas informações do banco de dados estão erradas ou não existem." << endl;
        cout << mysql_error(obj) << endl;
        return;
    }

    // Executar a consulta SQL
    if (mysql_query(obj, "SELECT * FROM Produtos;")) {
        cout << "ERRO: " << mysql_error(obj) << endl;
        return;
    }

    // Recuperar o resultado
    MYSQL_RES* result = mysql_store_result(obj);

    if (!result) {
        cout << "ERRO: Falha ao recuperar o resultado da consulta." << endl;
        return;
    }

    // Iterar sobre os resultados e exibir
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(result))) {
        cout << "\tId_Produtos: " << row[0] << "\t Nome: " << row[1] << "\t Categoria: " << row[2]
             << "\t Materiais: " << row[3] << "\t Custo_Producao: " << row[4] << "\t Variacao_Porcentagem: " << row[5] 
             << "\t Valor: " << row[6] << "\t Quantidade: " << row[7] << endl;
    }

    // Liberar o resultado e fechar a conexão
    mysql_free_result(result);
    mysql_close(obj);
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    printf("\n");
    system("pause");
    Fim_do_Programa();
}
 //_________________________________________________________________________________________//
/////////////////////////////////////////////////////////////////////////////////////////////
void Modificar_Produto() {
    int opcao, novo;

    do {
        MYSQL* obj;

        setlocale(LC_ALL, "Portuguese");

        // Conectar ao banco de dados
        if (!(obj = mysql_init(0))) {
            cout << "ERRO: O objeto MySQL não pôde ser criado." << endl;
            return;
        }

        if (!mysql_real_connect(obj, HOST, USER, PASS, "addak", 3306, NULL, 0)) {
            cout << "ERRO: Algumas informações do banco de dados estão erradas ou não existem." << endl;
            cout << mysql_error(obj) << endl;
            return;
        }

        int id;
        cout << "Digite o ID do produto que deseja modificar: ";
        cin >> id;

        char consulta[1000];

        // Exibir os detalhes do produto antes da modificação
        Exibir_Detalhes_Produto(obj, id);

        // Exibir opções de modificação
        cout << "[1] Materiais" << endl;
        cout << "[2] Custo de Produção" << endl;
        cout << "[3] Variação Percentual" << endl;
        cout << "[4] Quantidade" << endl;
        cout << "[0] Nenhum" << endl;
        cout << "Escolha a opção desejada: ";
        cin >> opcao;

        // Construir a consulta de modificação
        switch (opcao) {
            case 1: {
                char novosMateriais[50];
                cout << "Digite os novos materiais: ";
                cin.ignore();
                cin.getline(novosMateriais, 50);
                sprintf(consulta, "UPDATE Produtos SET Materiais = '%s' WHERE Id_Produtos = %d", novosMateriais, id);
                break;
            }
            case 2: {
                char novoCustoProducao[6];
                cout << "Digite o novo custo de produção: ";
                 cin.ignore();
    			cin.getline(novoCustoProducao, 6);
                sprintf(consulta, "UPDATE Produtos SET Custo_Producao = %s WHERE Id_Produtos = %d", novoCustoProducao, id);
                break;
            }
            case 3: {
                char novaVariacaoPercentual[6];
                cout << "Digite a nova variação percentual: ";
                cin.ignore();
    			cin.getline(novaVariacaoPercentual, 6);
                sprintf(consulta, "UPDATE Produtos SET Variacao_Porcentagem = %s WHERE Id_Produtos = %d", novaVariacaoPercentual, id);
                break;
            }
            case 4: {
                int novaQuantidade;
                cout << "Digite a nova quantidade: ";
                cin >> novaQuantidade;
                sprintf(consulta, "UPDATE Produtos SET Quantidade = %d WHERE Id_Produtos = %d", novaQuantidade, id);
                break;
            }
            case 0:
                // Nenhuma modificação, encerrar o loop
                break;
            default: {
                cout << "Opção inválida." << endl;
                fecharMySQL(obj);
                return;
            }
        }

        // Executar a consulta SQL de modificação
        if (mysql_query(obj, consulta)) {
            cout << "ERRO: " << mysql_error(obj) << endl;
        } else {
            cout << "\nProduto modificado com sucesso." << endl;
            printf("\n\n\n");
            system("pause");
        }

        // Liberar o resultado
        mysql_free_result(mysql_store_result(obj));

        // Perguntar se deseja realizar mais modificações
        do {
            system("cls");
            cout << "Deseja modificar mais algum dado?" << endl;
            cout << "[1] Sim" << endl;
            cout << "[0] Não" << endl;
            cout << "Escolha a opção desejada: ";
            cin >> novo;

            if (novo != 1 && novo != 0) {
                cout << "Opção inválida" << endl;
                system("pause");
            }
        } while (novo != 1 && novo != 0);

        // Limpar o buffer de entrada do teclado
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // Fechar a conexão
        fecharMySQL(obj);

    } while (novo == 1);

    Fim_do_Programa();
}
 //_________________________________________________________________________________________//
/////////////////////////////////////////////////////////////////////////////////////////////
void Exibir_Detalhes_Produto(MYSQL* obj, int id) {
    char consulta[1000];
    sprintf(consulta, "SELECT * FROM Produtos WHERE Id_Produtos = %d", id);

    // Executar a consulta SQL
    if (mysql_query(obj, consulta)) {
        cout << "ERRO: " << mysql_error(obj) << endl;
        fecharMySQL(obj);
        return;
    }

    // Recuperar o resultado
    MYSQL_RES* result = mysql_store_result(obj);

    if (!result) {
        cout << "ERRO: Falha ao recuperar o resultado da consulta." << endl;
        fecharMySQL(obj);
        return;
    }

    // Exibir os detalhes do produto
    MYSQL_ROW row;
    if ((row = mysql_fetch_row(result))) {
        cout << "Detalhes do Produto antes da modificação:" << endl;
        cout << "Nome: " << row[1] << endl;
        cout << "Categoria: " << row[2] << endl;
        cout << "Materiais: " << row[3] << endl;
        cout << "Custo de Produção: " << row[4] << endl;
        cout << "Variação Percentual: " << row[5] << endl;
        cout << "Valor: " << row[6] << endl;
        cout << "Quantidade: " << row[7] << endl << endl;
    }

    // Liberar o resultado
    mysql_free_result(result);
}
 //_________________________________________________________________________________________//
/////////////////////////////////////////////////////////////////////////////////////////////
void Campo_Produto(){
	MYSQL* obj;
	int tela;
	do{
	printf("\\\\__ Campo Produtos __//\n\n\n\n");
	printf("Qual será sua ação?\n");
	printf("[1] Cadastro\n");
	printf("[2] DATA BASE\n");
	printf("[3] Modificação de produto\n");
	printf("\n\n\n\n\n\n");
	printf("                         [0] Voltar\n");
	printf("Escolha: ");
	scanf(" %d", &tela);
	system("cls");
}while (tela!= 1 && tela!= 2 && tela!= 3 && tela!= 0);
switch(tela){
			case 1 : Cadastro_Produto(); break;
			case 2 : DB_Produto(); break;
			case 3 : Modificar_Produto(); break;
			default :Tela_Selecao();break;
		}
	

}
 //__________________________________________________________________________________________//
////////////////////////////////////////////////////////////////////////////////////////////// 
void Tela_Selecao(){
	
	MYSQL* obj = mysql_init(0);
	int tela;
	do{
		time_t t = time(NULL);
    struct tm *data_atual = localtime(&t);

    // Obtendo o ano, mês e dia atual
    int ano_atual = data_atual->tm_year + 1900;
    int mes_atual = data_atual->tm_mon + 1;
    int dia_atual = data_atual->tm_mday;

    // Exibindo a data atual
    cout << "                                                           " << dia_atual << "/" << mes_atual << "/" << ano_atual << endl;
	printf("Qual ação será tomada?\n\n");
	printf("[1] Campo Cliente\n");
	printf("[2] Campo Produto\n");
	printf("[3] Campo Pedidos\n");
	printf("\n\n\n\n\n\n");
	printf("                         [0] Voltar\n");
	printf("Escolha: ");
	
	scanf(" %d", &tela);
	system("cls");
}while (tela!= 1 && tela!= 2 && tela!= 3 && tela!= 4 && tela!= 0);
switch (tela)
{//opções do switch
case 1 : Campo_Cliente();break;
case 2 : Campo_Produto();break;
case 3 : Campo_Pedido();break;
default: Tela_ADDAK();break;
}
}
 //________________________________________________________________________________________//
////////////////////////////////////////////////////////////////////////////////////////////
void NovoPedido() {
    MYSQL* obj;
    int id;

   if (!(obj = mysql_init(0))) {
        cout << "ERRO: O objeto MySQL não pôde ser criado." << endl;
        return;
    }

    // Tenta conectar ao banco de dados MySQL
    if (!mysql_real_connect(obj, HOST, USER, PASS, "addak", 3306, NULL, 0)) {
        cout << "ERRO: Algumas informações do banco de dados estão erradas ou não existem." << endl;
        cout << mysql_error(obj) << endl;
        return;
    }

    setlocale(LC_ALL, "Portuguese");

    cout << "Digite o CNPJ do Cliente: ";
    cin >> CNPJ;

    // Executar a consulta SQL
    char consulta[50];
    sprintf(consulta, "SELECT Id_Cliente FROM Cliente_Empresa WHERE CNPJ = '%s';", CNPJ);

    if (mysql_query(obj, consulta)) {
        cout << "ERRO: " << mysql_error(obj) << endl;
        fecharMySQL(obj);
        return;
    }

    // Recuperar o resultado
    MYSQL_RES* result = mysql_store_result(obj);
    if (!result) {
        cout << "ERRO: Falha ao recuperar o resultado da consulta." << endl;
        fecharMySQL(obj);
        return;
    }

    // Exibir os detalhes do cliente
    MYSQL_ROW row;
    if ((row = mysql_fetch_row(result))) {
        // RECEBEU O ID DO CLIENTE BASEADO NO CNPJ
        id = atoi(row[0]);
    } else {
        cout << "\n\nCliente não encontrado." << endl;
        mysql_free_result(result);
        fecharMySQL(obj);
        printf("\n\n");
        system("pause");
        Fim_do_Programa();
        return;
    }

    char consultaUltimoPedido[50];
    sprintf(consultaUltimoPedido, "SELECT MAX(Id_Pedido) FROM Pedidos");

    if (mysql_query(obj, consultaUltimoPedido)) {
        cout << "ERRO: " << mysql_error(obj) << endl;
        fecharMySQL(obj);
        return;
    }

    // Recuperar o resultado do último pedido
    MYSQL_RES* resultUltimoPedido = mysql_store_result(obj);
    if (!resultUltimoPedido) {
        cout << "ERRO: Falha ao recuperar o resultado da consulta do último pedido." << endl;
        fecharMySQL(obj);
        return;
    }

    int idUltimoPedido;
    // Exibir o ID do último pedido
    MYSQL_ROW rowUltimoPedido;
    if ((rowUltimoPedido = mysql_fetch_row(resultUltimoPedido))) {
        idUltimoPedido = atoi(rowUltimoPedido[0]);
    } else {
        cout << "ERRO: Não foi possível obter o ID do último pedido." << endl;
        fecharMySQL(obj);
        return;
    }

    printf(" ID cliente %d e id ultimo pedido %d\n", id, idUltimoPedido);

    char mais;
    idUltimoPedido++;

    do {
        system("cls");
        time_t t = time(NULL);
        struct tm* data_atual = localtime(&t);

        // Obtendo o ano, mês e dia atual
        int ano_atual = data_atual->tm_year + 1900;
        int mes_atual = data_atual->tm_mon + 1;
        int dia_atual = data_atual->tm_mday;

        // Exibindo a data atual
        cout << "                                                           " << dia_atual << "/" << mes_atual << "/" << ano_atual << endl;
        cout << "ID Produto: ";
        cin >> ID_Produto;
        cout << endl;

        cout << "Quantidade: ";
        cin >> Quantidade;
        cout << endl;

        printf("Mais algum produto?\nR:");
        scanf(" %c", &mais);

        // Código relacionado à consulta SQL
        char consultaPedido[255];
        sprintf(consultaPedido, "INSERT INTO Pedidos(Id_Pedido, Id_Cliente, Id_Produtos, Quantidade) VALUES(%d, %d, %d, %d)",
                idUltimoPedido, id, ID_Produto, Quantidade);

        if (mysql_ping(obj)) {
            cout << "ERRO: Impossível conectar." << endl;
            cout << mysql_error(obj) << endl;
            fecharMySQL(obj);
            return;
        }

        if (mysql_query(obj, consultaPedido)) {
            cout << "ERRO: " << mysql_error(obj) << endl;
            cin.ignore(100, '\n');
            getchar();
        } else {
        	printf("\n\n");
            cout << "Informações adicionadas corretamente." << endl;
        }

    } while (mais == 's' || mais == 'S');
    	printf("\n\n");
system("pause");
    Fim_do_Programa();
}
 //______________________________________________________________________________________//
////////////////////////////////////////////////////////////////////////////////////////// 
void PedidosRegistrados() {
    MYSQL* obj;

    // Inicializar o objeto MySQL
    if (!(obj = mysql_init(0))) {
        cout << "ERRO: O objeto MySQL não pôde ser criado." << endl;
        return;
    }

    // Conectar ao banco de dados MySQL
    if (!mysql_real_connect(obj, HOST, USER, PASS, "addak", 3306, NULL, 0)) {
        cout << "ERRO: Algumas informações do banco de dados estão erradas ou não existem." << endl;
        cout << mysql_error(obj) << endl;
        return;
    }

    // Executar a consulta SQL
    printf("Qual o ID do Pedido?\nR:");
    scanf(" %d", &idPedido);
    char consulta[100];
    sprintf(consulta, "SELECT * FROM Pedidos WHERE Id_Pedido = %d;", idPedido);

    if (mysql_query(obj, consulta)) {
        cout << "ERRO: " << mysql_error(obj) << endl;
        fecharMySQL(obj);
        return;
    }

    // Recuperar o resultado
    MYSQL_RES* result = mysql_store_result(obj);
    if (!result) {
        cout << "ERRO: Falha ao recuperar o resultado da consulta." << endl;
        fecharMySQL(obj);
        return;
    }

    // Verificar se há resultados
    int num_rows = mysql_num_rows(result);
    if (num_rows == 0) {
        cout << "Nenhum pedido encontrado com o ID fornecido." << endl;
        // Liberar o resultado e fechar a conexão
        mysql_free_result(result);
        fecharMySQL(obj);
        system("pause");
        Fim_do_Programa();
        return;
    }

    // Exibir os detalhes de todos os pedidos com o ID fornecido
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(result))) {
        cout << "\t ID.Cliente: " << row[1] << "\t ID.Produto: " << row[2]
             << "\t Qtd: " << row[3] << "\t R$" << row[4] << "\t  " << row[5] << endl;
    }

    // Liberar o resultado e fechar a conexão
    mysql_free_result(result);
    fecharMySQL(obj);
    system("pause");
    Fim_do_Programa();
}
 //______________________________________________________________________________________//
//////////////////////////////////////////////////////////////////////////////////////////
void Campo_Pedido(){
	MYSQL* obj;
	int tela;
	do{
	printf("\\\\__ Campo Pedidos __//\n\n\n\n");
	printf("Qual será sua ação?\n");
	printf("[1] Novo Pedido\n");
	printf("[2] Pedidos Registrados\n");
	printf("\n\n\n\n\n\n");
	printf("                         [0] Voltar\n");
	printf("Escolha: ");
	scanf(" %d", &tela);
	system("cls");
}while (tela!= 1 && tela!= 2 && tela!= 0);
switch(tela){
			case 1 : NovoPedido(); break;
			case 2 : PedidosRegistrados(); break;
			default :Tela_Selecao();break;
	}
}
