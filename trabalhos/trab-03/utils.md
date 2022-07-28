gcc reserva/main.c -o main && ./main < arq1.in > out.res && sdiff -s arq1.res out.res;
gcc reserva/main.c -o main && ./main < arq2.in > out.res && sdiff -s arq2.res out.res;
