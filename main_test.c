/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:04:33 by namatias          #+#    #+#             */
/*   Updated: 2025/08/19 16:31:28 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// --- FUNÇÃO MAIN PARA RODAR OS TESTES ---
//Adicione as bibliotecas
//Copie para o seu arquivo princial, no meu caso ft_printf.c
//Por fim compile usando cc + flags + os nomes dos seus arquivos
//no meu caso sera:
//cc -Wall -Werror -Wextra ft_put_c.c ft_put_nbr.c ft_put_nbr_u.c ft_put_p.c ft_put_s.c ft_put_x.c ft_put_x_upper.c ft_printf.c ft_printf.h

#include <stdio.h>
#include <limits.h>

int main(void)
{
    char	c;
	int		nbr;
//imprime a qtd de caracter impresso pelo printf
    int ft_printf_ret = 0;
    int printf_ret = 0;

    // --- Teste %c ---
    c = 'a';
    printf("Teste de %%c: %c\n", c);
  	printf_ret = printf("Original: %c. ", c);
	printf("Retorno printf: %d\n", printf_ret);
    ft_printf_ret = ft_printf("ftprintf: %c. ", c);
	printf("Retorno ft_printf: %d\n", ft_printf_ret);

    c = '0';
  	printf_ret = printf("Original: %c. ", c);
	printf("Retorno printf: %d\n", printf_ret);
    ft_printf_ret = ft_printf("ftprintf: %c. ", c);
	printf("Retorno ft_printf: %d\n", ft_printf_ret);
printf("\n----------------------------------------------------\n\n");
    // --- Teste %s ---
    char *null_str = NULL;
    char *empty_str = "";
    char *normal_str = "hello, world!";

	printf("Teste de %%s: char *null_str = NULL\n");
  	printf_ret = printf("Original: %s. ", null_str);
	printf("Retorno printf: %d\n", printf_ret);
    ft_printf_ret = ft_printf("ftprintf: %s. ", null_str);
	printf("Retorno ft_printf: %d\n", ft_printf_ret);

	printf("Teste de %%s: char *empty_str = ""\n");
  	printf_ret = printf("Original: %s. ", empty_str);
	printf("Retorno printf: %d\n", printf_ret);
    ft_printf_ret = ft_printf("ftprintf: %s. ", empty_str);
	printf("Retorno ft_printf: %d\n", ft_printf_ret);
    
	printf("Teste de %%s: char normal_str = hello, world!\n");
  	printf_ret = printf("Original: %s. ", normal_str);
	printf("Retorno printf: %d\n", printf_ret);
    ft_printf_ret = ft_printf("ftprintf: %s. ", normal_str);
	printf("Retorno ft_printf: %d\n", ft_printf_ret);

printf("\n----------------------------------------------------\n");
    // --- Teste %p ---
    int local_var = 42;
    void *ptr = &local_var;
    void *null_ptr = NULL;

    printf("Teste de %%p:\n");
    printf_ret = printf("O endereco original: %p. ", ptr);
    printf("Retorno original: %d\n", printf_ret);
    ft_printf_ret = ft_printf("O endereco ftprintf: %p. ", ptr);
    printf("Retorno ft_printf: %d\n", ft_printf_ret);

	printf("Teste de %%p: NULL\n");
    printf_ret = printf("O endereco original: %p. ", null_ptr);
    printf("Retorno original: %d\n", printf_ret);
    ft_printf_ret = ft_printf("O endereco ftprintf: %p. ", null_ptr);
    printf("Retorno ft_printf: %d\n", ft_printf_ret);

printf("\n----------------------------------------------------\n");
    // --- Teste %d e %i ---
	nbr = -2147483648;
    printf("Teste de %%d = INT_MIN\n");
  	printf_ret = printf("Original %%d: %d. ", nbr);
	printf("Retorno printf: %d\n", printf_ret);
    ft_printf_ret = ft_printf("ftprintf %%d: %d. ", nbr);
	printf("Retorno ft_printf: %d\n", ft_printf_ret);

	nbr = -2147483648;
    printf("Teste de %%i = INT_MIN\n");
  	printf_ret = printf("Original %%i: %i. ", nbr);
	printf("Retorno printf: %d\n", printf_ret);
    ft_printf_ret = ft_printf("ftprintf %%i: %i. ", nbr);
	printf("Retorno ft_printf: %d\n", ft_printf_ret);

	nbr = 0;
    printf("Teste de %%d e %%i\n");
  	printf_ret = printf("Original %%d: %d. ", nbr);
	printf("Retorno printf: %d\n", printf_ret);
    ft_printf_ret = ft_printf("ftprintf %%i: %i. ", nbr);
	printf("Retorno ft_printf: %d\n", ft_printf_ret);

printf("\n----------------------------------------------------\n");
    // --- Teste %u ---
	unsigned int u_max = 4294967295; // UINT_MAX

    printf("Teste de %%u = unsigned INT_Max\n");
  	printf_ret = printf("Original %%u: %u. ", u_max);
	printf("Retorno printf: %d\n", printf_ret);
    ft_printf_ret = ft_printf("ftprintf %%u: %u. ", u_max);
	printf("Retorno ft_printf: %d\n", ft_printf_ret);

printf("\n----------------------------------------------------\n");
    // --- Teste %x e %X ---
	nbr = 255;
	printf("Teste de %%x = 255 (ff)\n");
  	printf_ret = printf("Original %%x: %x. ", nbr);
	printf("Retorno printf: %d\n", printf_ret);
    ft_printf_ret = ft_printf("ftprintf %%x: %x. ", nbr);
	printf("Retorno ft_printf: %d\n", ft_printf_ret);

    printf("Teste de %%X = 255 (FF)\n");
	printf_ret = printf("Original %%X: %X. ", nbr);
	printf("Retorno printf: %d\n", printf_ret);
    ft_printf_ret = ft_printf("ftprintf %%X: %X. ", nbr);
	printf("Retorno ft_printf: %d\n", ft_printf_ret);

printf("\n----------------------------------------------------\n");

    // --- Teste %% ---
    printf("Teste de %%%%\n");
  	printf_ret = printf("Original: %%%%. ");
	printf("Retorno printf: %d\n", printf_ret);
    ft_printf_ret = ft_printf("ftprintf: %%%%. ", c);
	printf("Retorno ft_printf: %d\n", ft_printf_ret);

printf("\n----------------------------------------------------\n");
    return 0;
}
