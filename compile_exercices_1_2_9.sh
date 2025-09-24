#!/bin/bash
# Script de compilation et test des exercices 1, 2 et 9

echo "=== COMPILATION DES EXERCICES 1, 2 ET 9 ==="

# Compilation du programme principal
echo "Compilation du main.c..."
gcc -o bin/main src/main.c src/tableaux/*.c src/matrices/*.c -I src/tableaux -I src/matrices -lm

# Compilation des tests spécifiques aux exercices 1, 2 et 9
echo "Compilation des tests des exercices 1, 2 et 9..."
gcc -o tests/test_exercices_1_2_9 tests/test_exercices_1_2_9.c src/matrices/*.c -I src/matrices -lm

# Compilation des tests généraux
echo "Compilation des tests généraux..."
gcc -o tests/test_general tests/test_general.c src/tableaux/*.c src/matrices/*.c -I src/tableaux -I src/matrices -lm

echo ""
echo "=== EXÉCUTION DES TESTS ==="

# Test des exercices 1, 2 et 9
echo "Tests des exercices 1, 2 et 9 :"
./tests/test_exercices_1_2_9

echo ""
echo "Tests généraux :"
./tests/test_general

echo ""
echo "=== EXÉCUTION DU PROGRAMME PRINCIPAL ==="
echo "Pour exécuter le programme principal avec le menu interactif :"
echo "./bin/main"
echo ""
echo "Le programme inclut les options pour :"
echo "1. Somme de matrices (Exercice 1)"
echo "2. Produit de matrices (Exercice 2)"
echo "9. Produit vecteur × matrice (Exercice 9)"
