
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

// --- COLE A SUA IMPLEMENTAÇÃO COMPLETA DE ft_printf AQUI ---
// (todas as funções ft_...)
// o seu código completo aqui, mas ele deve estar nesta seção
// para o main poder chamá-lo.


// --- FUNÇÃO MAIN PARA RODAR OS TESTES ---
int main(void)
{
    int ft_printf_ret;
    int printf_ret;

    printf("--- Suite de Testes para ft_printf ---\n\n");
    printf("--- Formato: \"Mensagem\", ft_printf(ret), printf(ret)\n\n");

    // --- Teste %c ---
    printf("Teste de %%c:\n");
    printf("   Original: 'A', Retorno: ");
    printf_ret = printf("O caractere é %c\n", 'A');
    printf("   ft_printf : 'A', Retorno: ");
    ft_printf_ret = ft_printf("O caractere é %c\n", 'A');
    printf("-> ft_printf_ret: %d, printf_ret: %d\n\n", ft_printf_ret, printf_ret);

    printf("   Original: '0', Retorno: ");
    printf_ret = printf("O caractere é %c\n", '0');
    printf("   ft_printf : '0', Retorno: ");
    ft_printf_ret = ft_printf("O caractere é %c\n", '0');
    printf("-> ft_printf_ret: %d, printf_ret: %d\n\n", ft_printf_ret, printf_ret);

    // --- Teste %s ---
    char *null_str = NULL;
    char *empty_str = "";
    char *normal_str = "hello, world!";

    printf("Teste de %%s:\n");
    printf("   Original: NULL, Retorno: ");
    printf_ret = printf("A string é %s\n", null_str);
    printf("   ft_printf : NULL, Retorno: ");
    ft_printf_ret = ft_printf("A string é %s\n", null_str);
    printf("-> ft_printf_ret: %d, printf_ret: %d\n\n", ft_printf_ret, printf_ret);

    printf("   Original: Vazia, Retorno: ");
    printf_ret = printf("A string é %s\n", empty_str);
    printf("   ft_printf : Vazia, Retorno: ");
    ft_printf_ret = ft_printf("A string é %s\n", empty_str);
    printf("-> ft_printf_ret: %d, printf_ret: %d\n\n", ft_printf_ret, printf_ret);

    printf("   Original: Normal, Retorno: ");
    printf_ret = printf("A string é %s\n", normal_str);
    printf("   ft_printf : Normal, Retorno: ");
    ft_printf_ret = ft_printf("A string é %s\n", normal_str);
    printf("-> ft_printf_ret: %d, printf_ret: %d\n\n", ft_printf_ret, printf_ret);

    // --- Teste %p ---
    int local_var = 42;
    void *ptr = &local_var;
    void *null_ptr = NULL;

    printf("Teste de %%p:\n");
    printf("   Original: Ponteiro, Retorno: ");
    printf_ret = printf("O endereco é %p\n", ptr);
    printf("   ft_printf : Ponteiro, Retorno: ");
    ft_printf_ret = ft_printf("O endereco é %p\n", ptr);
    printf("-> ft_printf_ret: %d, printf_ret: %d\n\n", ft_printf_ret, printf_ret);

    printf("   Original: Ponteiro NULL, Retorno: ");
    printf_ret = printf("O endereco é %p\n", null_ptr);
    printf("   ft_printf : Ponteiro NULL, Retorno: ");
    ft_printf_ret = ft_printf("O endereco é %p\n", null_ptr);
    printf("-> ft_printf_ret: %d, printf_ret: %d\n\n", ft_printf_ret, printf_ret);

    // --- Teste %d e %i ---
    printf("Teste de %%d e %%i:\n");
    printf("   Original: -123, Retorno: ");
    printf_ret = printf("O numero é %d\n", -123);
    printf("   ft_printf : -123, Retorno: ");
    ft_printf_ret = ft_printf("O numero é %d\n", -123);
    printf("-> ft_printf_ret: %d, printf_ret: %d\n\n", ft_printf_ret, printf_ret);

    printf("   Original: 0, Retorno: ");
    printf_ret = printf("O numero é %i\n", 0);
    printf("   ft_printf : 0, Retorno: ");
    ft_printf_ret = ft_printf("O numero é %i\n", 0);
    printf("-> ft_printf_ret: %d, printf_ret: %d\n\n", ft_printf_ret, printf_ret);

    printf("   Original: %d (INT_MIN), Retorno: ", INT_MIN);
    printf_ret = printf("O numero é %d\n", INT_MIN);
    printf("   ft_printf : %d (INT_MIN), Retorno: ", INT_MIN);
    ft_printf_ret = ft_printf("O numero é %d\n", INT_MIN);
    printf("-> ft_printf_ret: %d, printf_ret: %d\n\n", ft_printf_ret, printf_ret);

    // --- Teste %u ---
    unsigned int u_max = 4294967295; // UINT_MAX
    printf("Teste de %%u:\n");
    printf("   Original: 123, Retorno: ");
    printf_ret = printf("O numero é %u\n", 123);
    printf("   ft_printf : 123, Retorno: ");
    ft_printf_ret = ft_printf("O numero é %u\n", 123);
    printf("-> ft_printf_ret: %d, printf_ret: %d\n\n", ft_printf_ret, printf_ret);

    printf("   Original: %u (UINT_MAX), Retorno: ", u_max);
    printf_ret = printf("O numero é %u\n", u_max);
    printf("   ft_printf : %u (UINT_MAX), Retorno: ", u_max);
    ft_printf_ret = ft_printf("O numero é %u\n", u_max);
    printf("-> ft_printf_ret: %d, printf_ret: %d\n\n", ft_printf_ret, printf_ret);

    // --- Teste %x e %X ---
    printf("Teste de %%x e %%X:\n");
    printf("   Original: 255 (ff), Retorno: ");
    printf_ret = printf("O numero é %x e %X\n", 255, 255);
    printf("   ft_printf : 255 (ff), Retorno: ");
    ft_printf_ret = ft_printf("O numero é %x e %X\n", 255, 255);
    printf("-> ft_printf_ret: %d, printf_ret: %d\n\n", ft_printf_ret, printf_ret);

    // --- Teste %% ---
    printf("Teste de %%%%:\n");
    printf("   Original: %%, Retorno: ");
    printf_ret = printf("O sinal é %%\n");
    printf("   ft_printf : %%, Retorno: ");
    ft_printf_ret = ft_printf("O sinal é %%\n");
    printf("-> ft_printf_ret: %d, printf_ret: %d\n\n", ft_printf_ret, printf_ret);

    // --- Teste de combinação ---
    printf("Teste de Combinacao:\n");
    char *str_comb = "ft_printf";
    printf("   Original: %s - %d - %x - %p\n", str_comb, -100, 255, str_comb);
    ft_printf_ret = ft_printf("   ft_printf : %s - %d - %x - %p\n", str_comb, -100, 255, str_comb);
    printf_ret = printf("   Original: %s - %d - %x - %p\n", str_comb, -100, 255, str_comb); // Coloca o printf aqui para comparar o retorno
    printf("-> ft_printf_ret: %d, printf_ret: %d\n\n", ft_printf_ret, printf_ret);

    return 0;
}