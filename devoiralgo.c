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

//procédure facture par étudiantAmina

//mainAmina

