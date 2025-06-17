//remplirtab Aida
const int N=10;
void remplirtabp(struct facture tabf[N]){
	printf("saisir lenumero du facture");
	scanf("%d",&tabf[i].numero);
	printf("saisir le montant");
	scanf("%d",&tabf[i].montant);
    printf("saisir l'objet de la facture");
    scanf("%d", tabf[i].objet);
	printf("saisir l'id de l'étudiant");
	scanf("%d",&tabf[i].id);
}

//affichertabAida
void afficherTab(struct facture tabf[N]) {
    printf("\nListe des factures :\n");
    for( i = 0; i < n; i++) {
        printf("Facture %d : Numéro=%d, Montant=%d, Objet=%d, ID étudiant=%d\n",
             tab[i].numero, tab[i].montant, tab[i].objet, tab[i].id_etudiant);
    }
}



//sommetab Aida
int sommeTab(struct facture tabf[N]) {
    int somme = 0;
    for(int i = 0; i < N; i++) {
        somme = somme +tabf[i].montant;
    }
    return somme;
}


// Définir la structure Ange
struct facture{
int montant;
char [20];
int idetudiant;
int numero;
char objet[21];
};
struct facture tabf[N];


//minTabAnge
int Mintab(struct facture tabf[N]){
    int Min=0;
    int i;
    int N;
    for(i=0;i<n;i++){
        if(tabf[i].mont<Min){
            Min=tabF[i].mont;



        }
        return Min;
    }

}


// maxtabange
int Maxtab(struct facture tabf[N]){
    int Max=0;
    int i;
    int n;
    for(i=0;i<n;i++){
        if(tabf[i].mont>Max){
            Max=tabf[i].mont;


        }
        return Max;
    }

}


//Fonction somme par objetAmina
Fonction sommeParObjet(F: tableau de Facture, N: entier, obj: chaîne): réel
    total ← 0
    Pour i de 1 à N faire
        Si F[i].objet = obj Alors
            total ← total + F[i].montant
        FinSi
    FinPour
    Retourner total
FinFonction


//procédure facture par étudiantAmina
Procédure factureParEtudiant(F: tableau de Facture, N: entier, id: entier)
    Pour i de 1 à N faire
        Si F[i].id_etudiant = id Alors
            Écrire("Numéro: ", F[i].numero)
            Écrire("Montant: ", F[i].montant)
            Écrire("Objet: ", F[i].objet)
            Écrire("Inscription: ", F[i].inscription)
            Écrire("Scolarité: ", F[i].scolarité)
        FinSi
    FinPour
FinProcédure

//mainAmina
Début
    Déclarer F[100] comme tableau de Facture
    Déclarer N, choix, id: entier
    Déclarer obj: chaîne
    Écrire("Nombre de factures : ") Lire(N)
    Appeler remplirTab(F, N)

    Répéter
        Écrire("Menu :")
        Écrire("1. Afficher les factures")
        Écrire("2. Somme totale des factures")
        Écrire("3. Montant minimum")
        Écrire("4. Montant maximum")
        Écrire("5. Somme par objet")
        Écrire("6. Factures par étudiant")
        Écrire("0. Quitter")
        Lire(choix)

        Selon choix faire
            Cas 1:
                Appeler afficheTab(F, N)
            Cas 2:
                Écrire("Somme: ", sommeTab(F, N))
            Cas 3:
                Écrire("Minimum: ", minTab(F, N))
            Cas 4:
                Écrire("Maximum: ", maxTab(F, N))
            Cas 5:
                Écrire("Objet à rechercher: ") Lire(obj)
                Écrire("Somme pour ", obj, " : ", sommeParObjet(F, N, obj))
            Cas 6:
                Écrire("ID étudiant: ") Lire(id)
                Appeler factureParEtudiant(F, N, id)
        FinSelon
    Jusqu’à choix = 0
Fin

