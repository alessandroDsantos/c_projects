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
