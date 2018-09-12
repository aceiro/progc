#!/bin/bash

echo SCRIPT PARA TESTAR PROGRAMA EM C ANSI - LINUX
echo 
[ "$(./maxline < caso-teste-01.txt)" = "$(cat caso-teste-01-esperado.txt)" ] && echo "CASO DE TESTE 1 ...... PASSOU" || echo "CASO DE TESTE 1 - FALHOU"
[ "$(./maxline < caso-teste-02.txt)" = "$(cat caso-teste-02-esperado.txt)" ] && echo "CASO DE TESTE 1 ...... PASSOU" || echo "CASO DE TESTE 1 - FALHOU"
