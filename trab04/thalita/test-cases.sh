gcc -std=c99 -pedantic -Wall -lm -o trab04 thalita/*.c && ./trab04 < arq1.in > out.res && sdiff -s arq1.res out.res;

gcc -std=c99 -pedantic -Wall -lm -o trab04 thalita/*.c && ./trab04 < arq2.in > out.res && sdiff -s arq2.res out.res;

gcc -std=c99 -pedantic -Wall -lm -o trab04 thalita/*.c && ./trab04 < arq3.in > out.res && sdiff -s arq3.res out.res;

gcc -std=c99 -pedantic -Wall -lm -o trab04 thalita/*.c && ./trab04 < arq4.in > out.res && sdiff -s arq4.res out.res