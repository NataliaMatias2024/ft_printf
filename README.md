<h1 align="center">
    <img alt="ft_printf" width="20%" height="20%" src="https://raw.githubusercontent.com/NataliaMatias2024/42-project-badges/main/badges/ft_printfe.png">
</h1>

# 🖨️ ft_printf - @42SP
**Score:** 100/100 ✅ (Sem bônus)

Este repositório contém a implementação da **ft_printf**, desenvolvido como parte do currículo da [42 São Paulo](https://www.42sp.org.br/). 

## 🚀 Objetivo

> - Entender o funcionamento interno da função `printf`.
> - Trabalhar com **argumentos variádicos** em C (`va_list`, `va_arg`, `va_start`, `va_end`).
> - Gerenciar buffers, tipos de dados e formatação.
> - Reforçar boas práticas de organização e modularização de código.

## 🛠️ Tecnologias e Conceitos
<div align="left">
  <img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="C" />
  <img src="https://img.shields.io/badge/Makefile-4EAA25?style=for-the-badge&logo=gnu-make&logoColor=white" alt="Makefile" />
</div>

> - **Variadic Functions:** Manipulação de um número variável de argumentos com `<stdarg.h>`.
> - **Format Specifiers:** Lógica de parsing para identificar e tratar diferentes tipos de dados.
> - **Base Conversion:** Algoritmos para conversão de inteiros para hexadecimal e tratamento de ponteiros.

## ✅ Requisitos

Reimplementar a função `printf`, com suporte aos seguintes **format specifiers**:

| Especificador | Descrição                     |
|---------------|-------------------------------|
| `%c`          | Caractere                     |
| `%s`          | String (cadeia de caracteres) |
| `%p`          | Ponteiro (endereço de memória)|
| `%d` / `%i`   | Número decimal com sinal      |
| `%u`          | Número decimal sem sinal      |
| `%x` / `%X`   | Número hexadecimal            |
| `%%`          | Imprime o caractere `%`       |

## 🛠️ Estrutura do Projeto

```bash
.
├── *.c                 # Implementação das funções (.c)
├── ft_printf.h         # Header (.h)
├── Makefile            # Script de automação
└── README.md           # Este arquivo
```

## ⚙️ Como Utilizar

### 1. Compilar
Na raiz do projeto, execute:
```bash
make
```
Isso gerará o arquivo `libftprintf.a`

### 2. Integração
Para usar em seu código C, inclua o header:
```c
#include "ft_printf.h"
```

### 3. Linkagem
Compile seu programa linkando a biblioteca:
```c
cc seu_programa.c -L. -lftprintf -o programa
```

## 📦 Exemplo de uso

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Char: %c | Int: %d | Hex: %x | Pointer: %p\n", 'A', 42, 42, (void *)0x1234);
    return 0;
}
```

**Saída esperada:**

```
Hello, world!
Char: A | Int: 42 | Hex: 2a | Pointer: 0x1234
```

## 🧠 Lições Aprendidas e Dicas

**- Flexibilidade com stdarg.h:** Manipulação de argumentos variádicos com `stdarg.h` e descobrir como C lida com argumentos desconhecidos.

**- Recursividade e Bases:**  Conversão numérica para diferentes bases (hexadecimal, decimal, unsigned), que reforçou minha base de algoritmos.

**- Modularização:** Otimo exercício de organização de funções em diferentes arquivos, pensando em reutilizar uma mesma função para diferentes fins.

A quantidade de conceitos novos sempre dá um frio na barriga e deixa a gente sem saber por onde começar. Dividir e conquistar sempre será a melhor saída! Pequenas funções que funcionem de forma independente, como um ft_putnbr, sempre serão um bom ponto de partida quando ainda não se sabe muito o que fazer rs.
