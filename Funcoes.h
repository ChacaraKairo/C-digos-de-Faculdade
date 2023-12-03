// Funcoes.h
#ifndef FUNCOES_H
#define FUNCOES_H
#include <string.h>
#include <string>
#include <locale.h>
#include <iostream>
#include <mysql.h>
#include <limits> 
#include <ctime>
#include <locale.h>
#include <conio.h> 
#include <windows.h>
#include <sstream>
#include <string>
#include <ctime>

using namespace std; // Declara uma string para armazenar a consulta SQL como uma string

void Tela_ADDAK();//OK
void Exibir_Detalhes_Produto(MYSQL* obj, int id);//Ok
void Tela_Selecao();//OK
void Campo_Cliente();//OK
void Delete_Cliente();//OK
void Campo_Produto();//OK
void Cadastro_Produto();//OK
void fecharMySQL(MYSQL* obj);//OK
void Cadastro_Cliente();//OK
void DB_Cliente();//OK
void DB_Produto();//OK
void PedidosRegistrados();//OK
void Campo_Pedido();//OK
void NovoPedido();//OK
void Modificar_Produto();//OK
void Modificar_Cliente();//OK
void Busca_Cliente();//OK
void Fim_do_Programa();//OK

#endif 
