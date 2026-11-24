# TP 2 — Q-learning en C

Ce TP d’architecture des systèmes intelligents à l’ENSEA explore l’apprentissage par renforcement dans une grille de 6 × 6 cases. La version actuelle affiche le point de départ, deux buts et les obstacles dans le terminal. Les déplacements et l’apprentissage restent à implémenter.

## Compiler et afficher la grille

```sh
cc -std=c11 qlearning.c -o qlearning
./qlearning
```

`*` indique le départ, `1` et `2` les buts, `#` les obstacles et `.` les cases libres.
