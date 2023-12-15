#include<iostream>
#include<stdlib.h>  //librairie pour quitter le programme
#include<vector> //librairie comme les tableaux
using namespace std;

//------------------------------------------------------------------------------------//
//--------------------------------Class Adherent--------------------------------------//
//------------------------------------------------------------------------------------//

class adherent{
    int id_adherent,tel_adherent, size;
    string nom_adherent,prenom_adherent, date_de_naissance,date_adhesion;
    bool inscription,cotisation;
    public :
        adherent(){
                
        }
        int ajouter_adherent(vector<adherent>&users, adherent adherent){
            for(int i=0;i<users.size();i++){
                
                    return i;
                }
            }
        
};

//------------------------------------------------------------------------------------//
//--------------------------------Class Entrainneur-----------------------------------//
//------------------------------------------------------------------------------------//



//------------------------------------------------------------------------------------//
//-------------------------------Fonction Principale----------------------------------//                         
//------------------------------------------------------------------------------------//

int main(){
    vector<int> capacite_adherents;
    int choix;
    int choix_adherents;
    cout<<"------------------------------Gestion du club de sport GEMI-------------------------------------\n\n";
    cout<<"1. Gestion des adhérents\n2. Gestion des entrainneurs\n3. Gestion des équipes\n4. Gestion des séances d'entrainements \n5. Gestion des équipements\n0. Quitter\n\n";
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
                case 0:
                    exit(0);//Quitter le programme
                }
            }while(choix_adherents!=5);
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
                case 0:
                    exit(0);
                }
            }while(choix_adherents!=5);
            
            break;

        default:
            break;
        }
    cout<<"1. Gestion des adhérents\n2. Gestion des entrainneurs\n3. Gestion des équipes\n4. Gestion desséances d'entrainements \n5. Gestion des équipements\n0. Quitter\n\n";
    cout<<"Queceque vous voullez ?";
    cin>>choix;
    }while (choix!=0);
    exit(0);
    
}
