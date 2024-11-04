struct couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct liste_couleurs {
    struct couleur *couleur;
    struct liste_couleurs *suivant;
};

void insertion(struct couleur *couleur, struct liste_couleurs *liste);
void parcours(struct liste_couleurs *liste);