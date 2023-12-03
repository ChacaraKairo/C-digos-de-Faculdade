CREATE TABLE Cliente_Empresa(
`Id_Cliente` int auto_increment primary key not null,
`Nome` varchar(20) not null,
`CNPJ` char(20),
`Telefone` varchar(16),/*(99) 99999-9999*/
`Cep` varchar(12) not null, 
`Cidade` varchar(20),
`Bairro` varchar(20),
`Rua` varchar(25),
`Numero` varchar(5),
`Observacao` text
)DEFAULT CHARSET = utf8;
select*from Cliente_empresa;
insert into Cliente_Empresa (Nome, CNPJ, Telefone, Cep, Cidade, Bairro, Rua, Numero) 
VALUES ('teste' ,'teste' ,'teste' ,'teste','teste','teste' ,'teste', '1234');
SELECT Id_Cliente FROM Cliente_Empresa WHERE CNPJ = 'ASDGF';
