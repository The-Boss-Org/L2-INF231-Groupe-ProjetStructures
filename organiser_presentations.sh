#!/bin/bash
# Script d'organisation des présentations

echo "=== ORGANISATION DES PRÉSENTATIONS ==="

# Vérifier si le dossier presentations existe
if [ ! -d "presentations" ]; then
    echo "❌ Le dossier presentations n'existe pas !"
    exit 1
fi

# Lister le contenu actuel du dossier presentations
echo "📂 Contenu actuel du dossier presentations :"
ls -la presentations/

echo ""
echo "✅ VÉRIFICATION DES PRÉSENTATIONS DISPONIBLES :"

# Vérifier la documentation principale
if [ -f "presentations/DOCUMENTATION_PROJET_SDD2.md" ]; then
    echo "✅ DOCUMENTATION_PROJET_SDD2.md - Présent"
else
    echo "❌ DOCUMENTATION_PROJET_SDD2.md - Absent"
fi

# Vérifier l'index des présentations
if [ -f "presentations/INDEX_PRESENTATIONS.md" ]; then
    echo "✅ INDEX_PRESENTATIONS.md - Présent"
else
    echo "❌ INDEX_PRESENTATIONS.md - Absent"
fi

echo ""
echo "📊 STATISTIQUES DES PRÉSENTATIONS :"

# Compter les fichiers dans presentations
nb_presentations=$(ls -1 presentations/*.md 2>/dev/null | wc -l)
echo "📄 Nombre de documents de présentation : $nb_presentations"

# Taille totale
taille_presentations=$(du -sh presentations/ | cut -f1)
echo "📏 Taille totale du dossier : $taille_presentations"

echo ""
echo "📋 LISTE COMPLÈTE DES PRÉSENTATIONS :"
ls -la presentations/*.md

echo ""
echo "🎯 VALIDATION POUR LA SOUTENANCE :"

# Vérifier les éléments essentiels pour la soutenance
elements_requis=("DOCUMENTATION_PROJET_SDD2.md" "INDEX_PRESENTATIONS.md")
tous_presents=true

for element in "${elements_requis[@]}"; do
    if [ -f "presentations/$element" ]; then
        echo "✅ $element - Prêt pour la soutenance"
    else
        echo "❌ $element - Manquant !"
        tous_presents=false
    fi
done

echo ""
if [ "$tous_presents" = true ]; then
    echo "🎉 TOUTES LES PRÉSENTATIONS SONT PRÊTES !"
    echo "✅ Le dossier presentations est complet pour la soutenance."
else
    echo "⚠️  Certains éléments sont manquants pour la soutenance."
fi

echo ""
echo "📚 RAPPEL DES DOCUMENTS DISPONIBLES :"
echo "  📂 presentations/DOCUMENTATION_PROJET_SDD2.md - Documentation complète"
echo "  📂 presentations/INDEX_PRESENTATIONS.md - Index des présentations"
echo ""
echo "🌐 Ces documents sont prêts pour :"
echo "  • La soutenance du projet"
echo "  • L'évaluation par les enseignants"
echo "  • La documentation finale"
echo "  • La maintenance future du projet"
