# 🖨️ ft_printf

Este repositório contém a implementação do projeto **ft_printf**, desenvolvido como parte do currículo da [42 São Paulo](https://www.42sp.org.br/). O objetivo é recriar a função `printf` da linguagem C, respeitando o comportamento da original, mas sem utilizar a versão da libc.

## 🎯 Objetivo

- Entender o funcionamento interno da função `printf`.
- Trabalhar com argumentos variádicos em C (`<stdarg.h>`).
- Gerenciar buffers, tipos de dados e formatação.
- Reforçar boas práticas de organização e modularização de código.

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
├── ft_printf.c        # Função principal ft_printf
├── ft_printf_utils.c  # Funções auxiliares para formatação
├── ft_putnbr_base.c   # Conversões numéricas
├── ft_putptr.c        # Impressão de ponteiros
├── ft_putchar.c       # Escrita de caracteres
├── ft_putstr.c        # Escrita de strings
├── ft_strlen.c        # Função auxiliar de string
├── Makefile           # Script de compilação
├── ft_printf.h        # Header do projeto
└── README.md          # Este arquivo

## 🔧 Compilação

Para compilar a biblioteca, basta rodar:
make

Isso irá gerar o arquivo libftprintf.a, que pode ser incluído em outros projetos.

## 📦 Exemplo de uso
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Número: %d | Hex: %x | Char: %c\n", 42, 42, 'A');
    return 0;
}

Saída esperada:
Hello, world!
Número: 42 | Hex: 2a | Char: A

## 📚 Aprendizados

Durante o projeto, foi possível:

Trabalhar com manipulação de tipos e formatação personalizada.

Usar va_list, va_start, va_arg e va_end.

Refatorar código para maior legibilidade e modularidade.

Entender como a função printf lida com diferentes tipos de entrada.

## 🚫 Limitações

Este projeto não implementa os bônus (flags, largura, precisão ou alinhamento).

O comportamento é limitado aos conversores obrigatórios descritos acima.

## ✅ Status

✔️ Projeto finalizado e aprovado na 42 SP.
