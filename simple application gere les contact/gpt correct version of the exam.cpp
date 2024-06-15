#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for a person
typedef struct {
    char nom[100];
    char tel[11];
} Personne;

// Define the structure for a linked list node
typedef struct Maillon {
    Personne P;
    struct Maillon *suivant;
} Maillon;

// Initialize the head of the linked list
Maillon *tete = NULL;

// Function to create a new person
Personne Saisir_Personne() {
    Personne Personnex;
    printf("Enter the name: ");
    scanf("%s", Personnex.nom);
    printf("Enter the telephone number: ");
    scanf("%s", Personnex.tel);
    return Personnex;
}

// Function to display a person
void Affiche_Personne(Personne P) {
    printf("%s%20s\n", P.nom, P.tel);
}

// Function to search for a person by name
Maillon *Recherche_Personne(Maillon *tete, char nomp[100]) {
    Maillon *temp = tete;
    while (temp != NULL) {
        if (strcmp(temp->P.nom, nomp) == 0) {
            return temp;
        }
        temp = temp->suivant;
    }
    return NULL;
}

//Function to edit the same name that we give
Maillon *Modifie_Personne(Maillon *tete, char nomp[100], char nvtel[11]){
	if(tete == NULL){
		printf("la liste est vide");
	}else{
		int n;
		Maillon *temp=tete;
		while(temp != NULL){
			if(strcmp(temp->P.nom, nomp) == 0){
                strcpy(temp->P.tel, nvtel);
            }
			temp=temp->suivant;
		}
	}
	return tete;
}

// Function to add a person to the linked list
Maillon *Ajouter_Personne(Maillon *tete, Personne P) {
    Maillon *p = (Maillon *)malloc(sizeof(Maillon));
    p->P = P;
    p->suivant = NULL;

    if (tete == NULL) {
        tete = p;
    } else {
        Maillon *temp = tete;
        Maillon *temp2 = NULL;

        // Find the correct position to insert the person
        while (temp != NULL && strcmp(temp->P.nom, P.nom) < 0) {
            temp2 = temp;
            temp = temp->suivant;
        }

        // If a person with the same name exists, update their phone number
        if (temp != NULL && strcmp(temp->P.nom, P.nom) == 0) {
            strcpy(temp->P.tel, P.tel);
            free(p);  // Free the allocated memory for p
        } else {
            // Insert the person at the correct position
            if (temp2 == NULL) {
                p->suivant = tete;
                tete = p;
            } else {
                temp2->suivant = p;
                p->suivant = temp;
            }
        }
    }
    return tete;
}

// Function to display the entire linked list
void Affiche_Liste(Maillon *tete) {
    Maillon *temp = tete;
    while (temp != NULL) {
        Affiche_Personne(temp->P);
        temp = temp->suivant;
    }
}

// Function to free the memory used by the linked list
void Supprimer_Liste(Maillon *tete) {
    Maillon *temp;
    while (tete != NULL) {
        temp = tete;
        tete = tete->suivant;
        free(temp);
    }
}

int main() {
    // Add some sample people to the linked list
    tete = Ajouter_Personne(tete, Saisir_Personne());
    tete = Ajouter_Personne(tete, Saisir_Personne());
    tete = Ajouter_Personne(tete, Saisir_Personne());
    tete = Ajouter_Personne(tete, Saisir_Personne());
    tete = Ajouter_Personne(tete, Saisir_Personne());
    tete = Ajouter_Personne(tete, Saisir_Personne());

    // Display the list
    printf("\nList of people:\n");
    Affiche_Liste(tete);

    // Clean up and free memory
    Supprimer_Liste(tete);

    return 0;
}

