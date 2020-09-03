// But: Comprendre la base d'un programme C++ en affichant un message � l'�cran
// Auteur: Christophe
// Date: 2020-09-03

// Pour commencer un programme, il faut cr�er une premi�re fonction qui porte toujours le m�me nom: main
// Une fonction a 3 parties:
// 1. Son nom commen�ant par une lettre minuscule et pas d'espace et pas de cacract�re accentu�
// 2. Des parenth�ses obligatoires et pour le main, elles seront vides car on n'utilisera pas de param�tres
// 3. Le type de valeur de retour: pour le main deux possibilit�s: void pour vide ou rien et int pour integer qui veut dire valeur enti�re et dans ce cas main retourne un code d'�rreur, 0 si tout va bien


#include <iostream>		// Biblioth�que pour les outils de communications en entr�e (i = imput) et de sortir (o = output) pour utiliser la commande cout et cin
						// #include est la directive pour inclure les outils de la biblioth�que dans notre programme

// void main()
int main()
{					// Une aclade ouvre un bloc d'instructions. Dans mon cours. les accolades doivent rester sur une ligne toute seul

	// Pour communiquer entre l'utilisateur et le programme, il existe trois canaux standards: c pour canal et in pour input --> cin
	//																						   c pour canal et out pour output --> cout
	//																						   c pour canal et err pour error --> cerr

	// Afficher un message �a l'�cran pour souhaiter la bienvenue

	// << bec de canard, caract�res de redirection le texte du c�t� large des becs est redirig� vers l'�cran cout
	// Le texte ou message doit toujours �tre mis entre guillemets ""
	// Chaque instruction doit se terminer par un point-virgule ;
	std::cout << "Bienvenue a tous!";

	// On retourne le code pour dire que tout a bien fonctionn�
	return 0;


}					// Ferme le bloc d'instructions

// Ici on ne peut pas �crire une instruction car elle n'est pas dans un bloc