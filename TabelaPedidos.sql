CREATE TABLE Pedidos(
`Id_Pedido`int primary key not null, 
`Id_Cliente` int,
`Id_Produtos` int,
`Quantidade` int,
`Valor` float,
`Data/Hora` datetime,
 FOREIGN KEY (Id_Cliente) REFERENCES Cliente_Empresa(Id_Cliente),
 FOREIGN KEY (Id_Produtos) REFERENCES Produtos(Id_Produtos)
)DEFAULT CHARSET = utf8;