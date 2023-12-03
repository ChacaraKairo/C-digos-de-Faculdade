Create table Produtos(
`Id_Produtos` int auto_increment primary key not null,
`Nome` varchar(15), 
`Categoria` varchar(15),
`Materiais` tinytext,
`Custo_Producao` decimal(5,2),
`Variacao_Pocentagem` decimal(5,2),
`Valor_Final` decimal(5,2),
`Quantidade` int
)DEFAULT CHARSET = utf8;

DELIMITER //
CREATE TRIGGER calcular_valor_final_produto BEFORE INSERT ON Produtos
FOR EACH ROW
BEGIN
    -- Calcular o Valor_Final multiplicando Custo_Producao pela Variacao_Pocentagem
    SET NEW.Valor_Final = NEW.Custo_Producao * NEW.Variacao_Pocentagem;
END;produtosValor_Final
//
DELIMITER ;
select*from produtos;
INSERT INTO Produtos (Nome, Categoria, Materiais, Custo_Producao, Variacao_Pocentagem, Quantidade)
VALUES ('Produto Teste', 'Categoria Teste', 'Materiais Teste', 10.00, 1.2, 5);
SELECT * FROM Produtos WHERE Nome = 'Produto Teste';
SELECT Id_Produtos, Quantidade FROM Produtos;