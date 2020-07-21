#include <iostream>

using namespace std;

int main() {
	cout << "-------Tri par insertion-----------\n\n";
	int nombre_elements = 0;
	// Récupération du nombre d'éléments à trier
	cout << "Saisissez le nombre d'entiers à trier : ";
	cin >> nombre_elements;
	cout << "\n"; 
	// Création de l'ensemble d'entiers à trier
	int* ensemble_elements = NULL;
	ensemble_elements = (int*) malloc(nombre_elements*sizeof(int));
	// Si l'ensemble est vide
	if(ensemble_elements == NULL){
		printf("ERREUR : ensemble vide\n");
		return 0;
	}
	// Récupérations des valeurs de l'ensemble avec l'ordre souhaité par l'utilisateur 
	for (int i=0; i< nombre_elements; i++){
		cout <<" entier numéro " << i+1 << " :  ";
		cin >> ensemble_elements[i];
	}
	// Affichage de l'ensemble
	cout << "\n___Affichage de l'ensemble avant le tri : ___\n\n";
	for (int i=0; i< nombre_elements; i++){
		cout << "|" <<ensemble_elements[i]<< "|" <<"  ";
	}
	cout <<"\n";
	// Tri par insertion
	int intermediaire;
	int j;
	for( int i=1; i< nombre_elements; i++){
		intermediaire = ensemble_elements[i];
		j = i - 1;
		while(j>=0 && ensemble_elements[j]> intermediaire){
			ensemble_elements[j+1] = ensemble_elements[j];
			j--;
		}
		ensemble_elements[j+1] = intermediaire;
	}
	// Affichage de l'ensemble
	cout << "\n___Affichage de l'ensemble après le tri : ___\n\n";
	for (int i=0; i< nombre_elements; i++){
		cout << "|" <<ensemble_elements[i]<< "|" <<"  ";
	}
	// Libération de la mémoire allouée
	free(ensemble_elements);
	cout <<"\n\n";
	return 0;
}
