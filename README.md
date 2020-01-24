# Sobre o projeto

![logo](https://github.com/LuizWalker/Pena-Sistema-de-Pesagens/blob/master/imagens%20projeto/Pena%20balan%C3%A7a.png)

Este projeto foi desenvolvido pelos alunos Luiz Walker e Guilherme Costa, do curso de Engenharia Elétrica do IFPB, para a disciplina de Técnicas de Programação. O projeto consiste em um protótipo de cadastro de produtos ou mercadorias, utilizando um sensor de peso para determinar o valor instantâneo de sua massa. O projeto também possui uma interface gráfica, criada por meio do programa Qt creator, para que se torne mais fácil e prático o cadastro de tais produtos. Além disso, os dados cadastrados podem são obtidos por meio de um sensor conectado a um Arduino, com comunicação serial, e podem ser consultados por meio de um servidor Web.

# Sistema de cadastro de mercadorias

Em diversos ramos da indústria se vê necessário a criação de diversas formas de controle sobre as mercadorias, a fim de manter a qualidade dos meios de produção, desde os bens de consumo que são produzidos, vendidos ou transportados. Nesse viés, é mais que necessário o investimento nestas formas de controle sobre as mercadorias. Este projeto traz uma forma de manter o controle dentro da indústria, podendo ser adaptada para a necessidade que se deseja. Com isso, é possível implementa o cadastro de produtos que entram ou saem de uma fábrica, aumentando a confiabilidade sobre o processo produtivo.

Como exemplo, poderíamos citar as aplicações no ramo da industria alimentícia, com a pesagem de pequenos pacotes de alimentos até grandes caminhões que transportam determinado produto, na industria farmaceútica que, por meio de balanças de precisão é possível separar de maneira exata certas quantidades de produtos químicos ou rémedios. Ademais, existem aplicações pr o mercado da tecnologia, onde se vê necessário não só uma pesagem precisa, mas um escaneamento minucioso antes do produto sair da fábrica, tornando mais complexo o sistema de cadastro de tais produtos.

# Manual do programa

Para utilizar este programa é bem simples! Vamos ao manual.

## Interface do programa

![interfaceConexao](https://github.com/LuizWalker/Pena-Sistema-de-Pesagens/blob/master/imagens%20projeto/Interface%20conex%C3%A3o.png)

Primeiramente, com o projeto aberto no Qt creator, deve-se conectar o Arduino a alguma porta USB do computador para que se possa transferir os dados do sensor e, em seguida, executar o programa no Qt creator. Caso não seja feito nesta ordem pode acarretar em erro ao compilar.

Se tudo der certo, o programa irá reconhecer a porta em que o Arduino foi conectado, informando no campo "PORTA SERIAL" na aba comunicação serial.

![interfaceConectada](https://github.com/LuizWalker/Pena-Sistema-de-Pesagens/blob/master/imagens%20projeto/Interface%20conex%C3%A3o%20conectada.png)

Em seguida, deve-se selecionar no campo "VELOCIDADE DE TRANSFERÊNCIA" o valor de 57600 obrigatoriamente! Pois, o sensor de pressão conectado ao Arduino só funciona nesta velocidade. Pressione o botão conectar ou desconectar para estabeler a conexão.

# Fazendo cadastro

Com a proposta de ser simples e prático, é fácil se familiarizar com o cadastro de dados do programa:

![interface](https://github.com/LuizWalker/Pena-Sistema-de-Pesagens/blob/master/imagens%20projeto/Interface.png)

Ao pressionar o botão físico ou o da interface (Ativar a Balança) ocorrerá captura de dados da balança, os leds indicaram que a medida está sendo feita. Quando o led verde acender significa que a medida já foi feita, e a cancela libera passagem para o automóvel por alguns segundos e fecha novamente. O valor aparecerá em "Sensor de Peso (Kg)" e será escrito na caixa de texto da aba Registar Cargas em "PESO(KG)".

Para salvar os dados e serem exibidos na tela, basta preencher todos os campos restantes (Descrição da carga e Empresa) e selecionar "Registrar" para exibir na tabela logo abaixo.

![cadastro](https://github.com/LuizWalker/Pena-Sistema-de-Pesagens/blob/master/imagens%20projeto/cadastro.png)

## Erro de cadastro

Se houver algum espaço em branco, os dados não serão salvos e aparece-rá a seguinte mendagemde erro:

![erro](https://github.com/LuizWalker/Pena-Sistema-de-Pesagens/blob/master/imagens%20projeto/mensagem%20de%20erro.png)

# Protótipo

Arduino
Sensor de carga



# Comunicação serial

## Comunicação Qt

![json](https://github.com/LuizWalker/Pena-Sistema-de-Pesagens/blob/master/imagens%20projeto/Json's%20do%20QT.png)

# Informações adicionais


