
## Resolução prática  01

<p>1º Configuração do Ambiente: <br>
01- Como você pode verificar se o .NET SDK está corretamente instalado em
seu sistema? Em um arquivo de texto ou Markdown, liste os comandos que podem
ser usados para verificar a(s) versão(ões) do .NET SDK instalada(s), como remover e
atualizar.
</p>

R: Para verificar se o .NET SDK foi instalado corretamente rode o comando: 
~~~ 
 dotnet --version  
~~~


R: Para verificar as versões do .NET SDK instaladas no seu ambiente, você pode usar o comando: 

~~~ 
dotnet --list-sdks 
~~~

<p> 2º Tipos de Dados:
Problema: Quais são os tipos de dados numéricos inteiros disponíveis no .NET? Dê
exemplos de uso para cada um deles através de exemplos </p>

No .NET os números inteiros são definidos por 3 tipos que são: 

    * int: 	-2.147.483.648 a 2.147.483.647  para Inteiro assinado de 32 bits
    * long: -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807 para Inteiro assinado de 64 bits
    * short: -32.768 a 32.767 para Inteiro de 16 bits com sinal


<p>
3º Conversão de Tipos de Dados:
Problema: Suponha que você tenha uma variável do tipo double e deseja convertê-la
em um tipo int. Como você faria essa conversão e o que aconteceria se a parte
fracionária da variável double não pudesse ser convertida em um int? Resolva o
problema através de um exemplo em C#.
</p>

Quando os tipos não são compatíveis vai ocorrer um erro de compilação:

 __Cannot implicitly convert type 'long' to 'int'. An explicit conversion exists(are you missing a cast?__

 Portanto, se queremos atribuir um valor de tipo de dados maior(double) a um tipo de dados menor(int), usamos a conversão explícita de tipos.

~~~ C#
    double d = 765.12;   
    int i = (int)d;               
    Console.WriteLine("Valor de i é " + i ); 

~~~

Ou com usando funções

~~~ C#
    int i = 12; 
    double d = 765.12; 
    Console.WriteLine(Convert.ToInt32(d)); 
    Console.WriteLine(Convert.ToDouble(i));
~~~

Como o tipo inteiro não suporta valores fracionários, e recomendaria que não o utilize caso a parte fracionário seja necessário para a operação. Outro opção é realizar o arrendondamento dos valores.  

<p> 
4º Operadores Aritméticos:
Residência em Tecnologia da Informação e Comunicação
Problema: Dada a variável int x = 10 e a variável int y = 3, escreva código para calcular
e exibir o resultado da adição, subtração, multiplicação e divisão de x por y.
</p>

~~~ C#
    int x = 10 , y = 3;

    Console.WriteLine("Adição de X e Y é: " + (x + y)  ); 
    Console.WriteLine("Subtração de X e Y é:" + (x - y) ); 
    Console.WriteLine("Multiplicação de X e Y é:" + (x * y) ); 
    Console.WriteLine("Divisão de X e Y é:" + (x / y) ); 
    Console.WriteLine("Resto da divisão de X e Y é:" + (x % y) ); 
~~~

<p>
5º Operadores de Comparação:
Problema: Considere as variáveis int a = 5 e int b = 8. Escreva código para determinar
se a é maior que b e exiba o resultado.
</p>

~~~ C#
    int a = 5, b = 8;

    if(a > b){
       Console.WriteLine("A é maior que B");
    }else{
         Console.WriteLine("A é igual ou menor que B");
    }
~~~

<p>
6º Operadores de Igualdade:
Problema: Você tem duas strings, string str1 = "Hello" e string str2 = "World". Escreva
código para verificar se as duas strings são iguais e exibir o resultado.
</p>


~~~ C#
    String str1 = "Hello", str2 = "World";

    if(str1 == str2){
       Console.WriteLine("As duas strings são iguais");
    }else{
         Console.WriteLine("As duas strings não são iguais");
    }
~~~

<p>
7º Operadores Lógicos:
Problema: Suponha que você tenha duas variáveis booleanas, bool condicao1 = true
e bool condicao2 = false. Escreva código para verificar se ambas as condições são
verdadeiras e exiba o resultado.
</p>

~~~ C#
    bool condicao1 = true, condicao2 = false;

    if(condicao1 == condicao2){
       Console.WriteLine("As condições são iguais");
    }else{
         Console.WriteLine("As condições não são iguais");
    }
~~~

<p>
8. Desafio de Mistura de Operadores:
Problema: Dadas as variáveis int num1 = 7, int num2 = 3, e int num3 = 10, escreva
código para verificar se num1 é maior do que num2 e se num3 é igual a num1 + num2.
</p>

~~~ C#
    int num1 = 7, num2 = 3, num3 = 10;

    if(num1 > num2){
       Console.WriteLine("num1 é maior do que num2");
    }
    
    if(num3 > (num1 + num2)){
        Console.WriteLine("num3 é igual a num1 + num2");
    }else{
        Console.WriteLine("num3 não é igual a num1 + num2");

    }
~~~