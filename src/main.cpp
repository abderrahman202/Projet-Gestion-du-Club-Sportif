#include<iostream>
#include<stdlib.h>  //librairie pour quitter le programme
using namespace std;



int main(){
    int choix;
    int choix_adherents;
    cout<<"------------------------------Gestion d'un club de sport-------------------------------------\n\n";
    cout<<"1. Gestion des adhérents\n2. Gestion des entrainneurs\n3. Gestion des équipes\n4. Gestion desséances d'entrainements \n5. Gestion des équipements\n0. Quitter\n\n";
    cout<<"Queceque vous voullez ?";
    cin>>choix;
    do{
        switch (choix)
        {
        case 1:
            do{                
                cout<<"1. Nouvelle inscription\n2. Recherche\n3. Modifier\n4. Supprimer \n5. Retour\n0. Quitter\n\n";
                cin>>choix_adherents;
                switch (choix_adherents)
                {
                case 1:
                    cout<<"La fonction Nouvelle inscription\n\n";
                    break;
                case 2:
                    cout<<"La fonction Recherche\n\n";
                    break;
                case 3:
                    cout<<"La fonction Modifier\n\n";
                    break;
                case 4:
                    cout<<"La foction Supprimer\n\n";
                    break;
                }
            }while(choix_adherents!=0);
            exit(0);//Quitter le programme
            break;
        case 2:
            do{
                
                cout<<"1. Nouvelle inscription\n2. Recherche\n3. Modifier\n4. Supprimer \n5. Retour\n0. Quitter\n\n";
                cin>>choix_adherents;
                switch (choix_adherents)
                {
                case 1:
                    cout<<"La fonction Nouvelle inscription\n\n";
                    break;
                case 2:
                    cout<<"La fonction Recherche\n\n";
                    break;
                case 3:
                    cout<<"La fonction Modifier\n\n";
                    break;
                case 4:
                    cout<<"La foction Supprimer\n\n";
                    break;
                }
            }while(choix_adherents!=0);
            exit(0);
            break;
        }

    }while (choix!=0);
    
    
}
