// But: Comprendre la base d'un programme C++ en affichant un message à l'écran
// Auteur: Christophe
// Date: 2020-09-03

// Pour commencer un programme, il faut créer une première fonction qui porte toujours le même nom: main
// Une fonction a 3 parties:
// 1. Son nom commençant par une lettre minuscule et pas d'espace et pas de cacractère accentué
// 2. Des parenthèses obligatoires et pour le main, elles seront vides car on n'utilisera pas de paramètres
// 3. Le type de valeur de retour: pour le main deux possibilités: void pour vide ou rien et int pour integer qui veut dire valeur entière et dans ce cas main retourne un code d'érreur, 0 si tout va bien


#include <iostream>		// Bibliothèque pour les outils de communications en entrée (i = imput) et de sortir (o = output) pour utiliser la commande cout et cin
						// #include est la directive pour inclure les outils de la bibliothèque dans notre programme

// void main()
int main()
{					// Une aclade ouvre un bloc d'instructions. Dans mon cours. les accolades doivent rester sur une ligne toute seul

	// Pour communiquer entre l'utilisateur et le programme, il existe trois canaux standards: c pour canal et in pour input --> cin
	//																						   c pour canal et out pour output --> cout
	//																						   c pour canal et err pour error --> cerr

	// Afficher un message èa l'écran pour souhaiter la bienvenue

	// << bec de canard, caractères de redirection le texte du côté large des becs est redirigé vers l'écran cout
	// Le texte ou message doit toujours être mis entre guillemets ""
	// Chaque instruction doit se terminer par un point-virgule ;
	std::cout << "Bienvenue a tous!";

	// On retourne le code pour dire que tout a bien fonctionné
	return 0;


}					// Ferme le bloc d'instructions

// Ici on ne peut pas écrire une instruction car elle n'est pas dans un bloc