#include <stdio.h>
#include <string.h>

struct Personne {
    char nom[50];
    char prenom[50];
    int age;
};

int main() {
    struct Personne personne;

    strcpy(personne.nom, "Dupont");
    strcpy(personne.prenom, "Jean");
    personne.age = 30;

    printf("Nom : %s\n", personne.nom);
    printf("Prenom : %s\n", personne.prenom);
    printf("Age : %d\n", personne.age);

    return 0;
}
