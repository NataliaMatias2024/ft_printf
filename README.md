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

```
.
├── ft_printf.c         # Função principal
├── ft_printf_utils.c   # Funções auxiliares
├── ft_putnbr_base.c    # Conversão para base (hex, dec, etc.)
├── ft_putptr.c         # Impressão de ponteiros
├── ft_putchar.c        # Impressão de caractere
├── ft_putstr.c         # Impressão de strings
├── ft_strlen.c         # Função auxiliar: tamanho de string
├── ft_printf.h         # Header principal
├── Makefile            # Compilação
└── README.md           # Este arquivo
```

## ⚙️ Compilação

Para compilar:

```bash
make
```

Isso irá gerar a biblioteca estática `libftprintf.a`, que pode ser usada em outros projetos:

Inclua o cabeçalho no seu código:

```c
#include "ft_printf.h"
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

## 📚 Aprendizados

- Manipulação de argumentos variádicos com `stdarg.h`
- Conversão numérica para diferentes bases (hexadecimal, decimal, unsigned)
- Escrita de funções modulares e reutilizáveis
- Uso seguro de ponteiros, strings e tipos de dados
- Implementação de lógica de formatação semelhante à da função `printf` original

## 🚫 Limitações

- Este projeto não implementa os bônus (flags, largura, precisão ou alinhamento).
- O comportamento é limitado aos conversores obrigatórios descritos acima.

## ✅ Status

✔️ Projeto finalizado e aprovado na 42 São Paulo.
