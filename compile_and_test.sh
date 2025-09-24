#!/bin/bash
# Script de compilation et exécution des tests

echo "=== COMPILATION DU PROJET ==="
gcc -o bin/main src/main.c -lm

echo "=== COMPILATION DES TESTS ==="
gcc -o tests/test_general tests/test_general.c src/tableaux/*.c src/matrices/*.c -I src/tableaux -I src/matrices -lm

echo "=== EXÉCUTION DES TESTS ==="
./tests/test_general

echo "=== EXÉCUTION DU PROGRAMME PRINCIPAL ==="
echo "Pour exécuter le programme principal avec le menu interactif :"
echo "./bin/main"
