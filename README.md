# Informações em C

## Especificadores de Formato

- `%c`: caractere (char).
- `%hd` ou `%hi`: short.
- `%ld` ou `%li`: long (long int não é muito utilizado hoje, pois o int já tem 4 bytes).
- `%d` ou `%i`: inteiros decimais com sinal (int).
- `%u`: inteiros decimais sem sinal.
- `%f`: números de ponto flutuante (float).
- `%e` ou `%E`: números de ponto flutuante em notação científica.
- `%g` ou `%G`: números de ponto flutuante em notação científica ou decimal.
- `%o`: inteiros em formato octal.
- `%x` ou `%X`: inteiros em formato hexadecimal (minúsculo ou maiúsculo).
- `%p`: ponteiros.
- `%s`: strings (cadeias de caracteres).
- `%a` ou `%A`: números de ponto flutuante em notação hexadecimal (minúsculo ou maiúsculo).
- `%n`: armazena o número de caracteres impressos até aquele ponto.
- `%lf`: números de ponto flutuante do tipo double.
- `%Lf`: números de ponto flutuante do tipo long double (cuidado ao compilar no Windows).
- `%lu`: inteiros longos sem sinal (unsigned int).
- `%lld` ou `%lli`: inteiros longos longos com sinal (long long int).
- `%llu`: inteiros longos longos sem sinal (unsigned long long int).
- `%%`: caractere de porcentagem (%).

## Caracteres de Escape

- Quebra de linha -> `\n`
- Tabulação       -> `\t`
- Aspas duplas    -> `\"`
- Aspa simples    -> `\'`
- Contrabarra     -> `\\`

## Precisão em Operações com Números de Ponto Flutuante

Em C, assim como em outras linguagens de programação, operações com números de ponto flutuante (decimais) podem ser imprecisas devido à forma como esses números são representados na memória. Isso pode levar a erros de arredondamento e outras imprecisões. 

Isso acontece porque os números de ponto flutuante são representados de forma aproximada na memória do computador, seguindo o padrão IEEE 754, o que pode levar a erros de arredondamento. 

Uma abordagem comum para evitar esses problemas é trabalhar com números inteiros e, em seguida, converter para decimais apenas quando necessário. Por exemplo, você pode armazenar valores em centavos (inteiros) e depois dividir por 100.00 para obter o valor em reais.