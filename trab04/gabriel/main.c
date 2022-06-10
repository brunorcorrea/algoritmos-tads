#include <stdio.h>
#include <string.h>

int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0, z = 0;
int A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, G = 0, H = 0, I = 0, J = 0, K = 0, L = 0, M = 0, N = 0, O = 0, P = 0, Q = 0, R = 0, S = 0, T = 0, U = 0, V = 0, W = 0, X = 0, Y = 0, Z = 0, valor = 0;
int num0 = 0, num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0, num8 = 0, num9 = 0, alfabeto, contador, total = 0;

int analise(char paragrafos[1001])
{
    total = 0;
    if (strcmp(paragrafos, "FIM\n") == 0)
    {
        return 0;
    }

    for (alfabeto = 0; alfabeto < strlen(paragrafos); alfabeto++)
    { // pega as letras maisuculas do texto
        switch (paragrafos[alfabeto])
        {
        case 'A': // verificar cada caso para analisar as letras maiusculas
            A++;
            total++;
            break;

        case 'B':
            B++;
            total++;
            break;

        case 'C':
            C++;
            total++;
            break;

        case 'E':
            E++;
            total++;
            break;

        case 'F':
            F++;
            total++;
            break;

        case 'G':
            G++;
            total++;
            break;

        case 'H':
            H++;
            total++;
            break;

        case 'I':
            I++;
            total++;
            break;

        case 'J':
            J++;
            total++;
            break;

        case 'K':
            K++;
            total++;
            break;

        case 'L':
            L++;
            total++;
            break;

        case 'M':
            M++;
            total++;
            break;

        case 'N':
            N++;
            total++;
            break;

        case 'O':
            O++;
            total++;
            break;

        case 'P':
            P++;
            total++;
            break;

        case 'Q':
            Q++;
            total++;
            break;

        case 'R':
            R++;
            total++;
            break;

        case 'S':
            S++;
            total++;
            break;

        case 'T':
            T++;
            total++;
            break;

        case 'U':
            U++;
            total++;
            break;

        case 'V':
            V++;
            total++;
            break;

        case 'W':
            W++;
            total++;
            break;

        case 'X':
            X++;
            total++;
            break;

        case 'Y':
            Y++;
            total++;
            break;

        case 'Z':
            Z++;
            total++;
            break;
        }
    }
    for (alfabeto = 0; alfabeto < strlen(paragrafos); alfabeto++)
    { // pega as letras maisuculas do texto
        switch (paragrafos[alfabeto])
        {
        case 'a': // verificar cada caso para analisar as letras minusculas
            a++;
            total++;
            break;

        case 'b':
            b++;
            total++;
            break;

        case 'c':
            c++;
            total++;
            break;

        case 'e':
            e++;
            total++;
            break;

        case 'f':
            f++;
            total++;
            break;

        case 'g':
            g++;
            total++;
            break;

        case 'h':
            h++;
            total++;
            break;

        case 'i':
            i++;
            total++;
            break;

        case 'j':
            j++;
            total++;
            break;

        case 'k':
            k++;
            total++;
            break;

        case 'l':
            l++;
            total++;
            break;

        case 'm':
            m++;
            total++;
            break;

        case 'n':
            n++;
            total++;
            break;

        case 'o':
            o++;
            total++;
            break;

        case 'p':
            p++;
            total++;
            break;

        case 'q':
            q++;
            total++;
            break;

        case 'r':
            r++;
            total++;
            break;

        case 's':
            s++;
            total++;
            break;

        case 't':
            t++;
            total++;
            break;

        case 'u':
            u++;
            total++;
            break;

        case 'v':
            v++;
            total++;
            break;

        case 'w':
            w++;
            total++;
            break;

        case 'x':
            x++;
            total++;
            break;

        case 'y':
            y++;
            total++;
            break;

        case 'z':
            z++;
            total++;
            break;
        }
    }
    for (valor = 0; valor < strlen(paragrafos); valor++)
    {
        switch (paragrafos[alfabeto])
        {
        case '0':
            num0++;
            total++;
            break;
        case '1':
            num1++;
            total++;
            break;

        case '2':
            num2++;
            total++;
            break;

        case '3':
            num3++;
            total++;
            break;

        case '4':
            num4++;
            total++;
            break;

        case '5':
            num5++;
            total++;
            break;

        case '6':
            num6++;
            total++;
            break;

        case '7':
            num7++;
            total++;
            break;

        case '8':
            num8++;
            total++;
            break;

        case '9':
            num9++;
            total++;
            break;
        }
    }

    return 1;
}

void imprime()
{
    printf("Caracteres Maiusculos:\n");

    printf("%c: ", 'A');
    for (contador = A; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", A, ((float)A) / total);
    printf("%c: ", 'B');
    for (contador = B; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", B, ((float)B) / total);
    printf("%c: ", 'C');
    for (contador = C; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", C, ((float)C) / total);
    printf("%c: ", 'D');
    for (contador = D; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", D, ((float)D) / total);
    printf("%c: ", 'E');
    for (contador = E; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", E, ((float)E) / total);
    printf("%c: ", 'F');
    for (contador = F; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", F, ((float)F) / total);
    printf("%c: ", 'G');
    for (contador = G; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", G, ((float)G) / total);
    printf("%c: ", 'H');
    for (contador = H; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", H, ((float)H) / total);
    printf("%c: ", 'I');
    for (contador = I; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", I, ((float)I) / total);
    printf("%c: ", 'J');
    for (contador = J; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", J, ((float)J) / total);
    printf("%c: ", 'K');
    for (contador = K; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", K, ((float)K) / total);
    printf("%c: ", 'L');
    for (contador = L; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", L, ((float)L) / total);
    printf("%c: ", 'M');
    for (contador = M; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", M, ((float)M) / total);
    printf("%c: ", 'N');
    for (contador = N; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", N, ((float)N) / total);
    printf("%c: ", 'O');
    for (contador = O; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", O, ((float)O) / total);
    printf("%c: ", 'P');
    for (contador = P; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", P, ((float)P) / total);
    printf("%c: ", 'Q');
    for (contador = Q; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", Q, ((float)Q) / total);
    printf("%c: ", 'R');
    for (contador = R; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", R, ((float)R) / total);
    printf("%c: ", 'S');
    for (contador = S; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", S, ((float)S) / total);
    printf("%c: ", 'T');
    for (contador = T; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", T, ((float)T) / total);
    printf("%c: ", 'U');
    for (contador = U; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", U, ((float)U) / total);
    printf("%c: ", 'V');
    for (contador = V; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", V, ((float)V) / total);
    printf("%c: ", 'W');
    for (contador = W; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", W, ((float)W) / total);
    printf("%c: ", 'X');
    for (contador = X; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", X, ((float)X) / total);
    printf("%c: ", 'Y');
    for (contador = Y; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", Y, ((float)Y) / total);
    printf("%c: ", 'Z');
    for (contador = Z; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", Z, ((float)Z) / total);

    printf("\nCaracteres Minusculos:\n");

    printf("%c: ", 'a');
    for (contador = a; contador > 0; contador--)
    {
        printf("*");
    }
    printf(" (%d - %.2f)\n", a, ((float)a) / total);
    printf("%c: ", 'b');
    for (contador = b; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'c');
    for (contador = c; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'd');
    for (contador = d; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'e');
    for (contador = e; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'f');
    for (contador = f; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'g');
    for (contador = g; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'h');
    for (contador = h; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'i');
    for (contador = i; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'i');
    for (contador = i; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'k');
    for (contador = k; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'l');
    for (contador = l; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'm');
    for (contador = m; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'n');
    for (contador = n; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'o');
    for (contador = o; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'p');
    for (contador = p; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'q');
    for (contador = q; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'r');
    for (contador = r; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 's');
    for (contador = s; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 't');
    for (contador = t; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'u');
    for (contador = u; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'v');
    for (contador = v; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'w');
    for (contador = w; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'x');
    for (contador = x; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'y');
    for (contador = y; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");
    printf("%c: ", 'z');
    for (contador = z; contador > 0; contador--)
    {
        printf("*");
    }
    printf("\n");

    a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0, z = 0;
    int A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, G = 0, H = 0, I = 0, J = 0, K = 0, L = 0, M = 0, N = 0, O = 0, P = 0, Q = 0, R = 0, S = 0, T = 0, U = 0, V = 0, W = 0, X = 0, Y = 0, Z = 0, num0 = 0, num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0, num8 = 0, num9 = 0, alfabeto;
}

int main()
{
    char paragrafos[1001];
    do
    {
        paragrafos[0] = '\0';
        fgets(paragrafos, 1001, stdin);
    } while (analise(paragrafos) == 0);

    imprime();

    return 0;
}