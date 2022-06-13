gcc ex10a.c -lm -o main && ./main < ../ex10a/arq1.in > out.res && sdiff -s ../ex10a/arq1.res out.res;

gcc ex10a.c -lm -o main && ./main < ../ex10a/arq2.in > out.res && sdiff -s ../ex10a/arq2.res out.res;

gcc ex10a.c -lm -o main && ./main < ../ex10a/arq3.in > out.res && sdiff -s ../ex10a/arq3.res out.res;