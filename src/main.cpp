#include<iostream>
#include<stdlib.h>  //librairie pour quitter le programme

using namespace std;


//------------------------------------------------------------------------------------//
//-----------------------------------Class Menu---------------------------------------//
//------------------------------------------------------------------------------------//

class Menu{
    public:
        int choix;

    Menu(){
        choix=0;
    }

    void display(){
        cout<<"1. Gestion des adhérents\n2. Gestion des entrainneurs\n3. Gestion des équipes\n4. Gestion des séances d'entrainements \n5. Gestion des équipements\n0. Quitter\n\n";
        cout<<"Queceque vous voullez ?";
        cin>>choix;
        cout<<"\n----------------------------------------------------------------------------------------\n\n";
    }

    int getChoix(){
        return choix;
    }
};


//------------------------------------------------------------------------------------//
//---------------------------------Class Adherent-------------------------------------//
//------------------------------------------------------------------------------------//

class Adherent{
    private:
        int Id[100] = {1,2}, choix_modifier=0;
        string Tel[100] = {"0611223344", "0660313525"};
        string Prenom[100] = {"Abderrahman","Mohamed"},Nom[100] = {"BENIFFOU","WASSUP"},Date_de_naissance[100] = {"01/01/2002","01/02/2002"},Date_dhadetion[100] = {"01/02/2023","15/12/2023"};
        string n_Prenom;
    public: 
        static int size;
    Adherent(){
        
    }
    void show_adherent(){
        for(int i=0;i<size;i++){
            cout<<"\n"<<Id[i]<<"/\n\tPrénom: "<<Prenom[i]<<"\n\tNom: "<<Nom[i]<<"\n\tTel: "<<Tel[i]<<"\n\tDate de naissance: "<<Date_de_naissance[i]<<"\n\tDate d'adhésion: "<<Date_dhadetion[i]<<endl;
        }
    }
    void modifer_adherent(){
        show_adherent();
        cout<<"\n-------------------------------------------\n\n";                    
        cout<<"Quel adhérent vous voullez modifier ?";
        cin>>choix_modifier;
        do
        {
            cout<<"Saisir un adhérent dans la liste ";
            cin>>choix_modifier;
        } while (choix_modifier<size);
        cout<<"\n\nSaisir ce que vous voulez modifier:\n1. Prénom\n2. Nom\n3. Tel\n4. Date de naissaince\n5. Sports pratiquées\n6. Retour\n0. Quitter";
        cin>>choix_modifier;
        do{
            cout<<"\n\nSaisir ce que vous voulez modifier:\n1. Prénom\n2. Nom\n3. Tel\n4. Date de naissaince\n5. Sports pratiquées\n6. Retour\n0. Quitter";
            cin>>choix_modifier;
            do{
                int choix_modifier1;
                switch (choix_modifier1)
                {
                case 0:
                    exit(0);
                case1:
                    cout<<"Saisir le nouveau prénom: ";
                    cin>>Prenom[choix_modifier1];

                default:
                    break;
                }
            }while(choix_modifier=!6);
        }while(choix_modifier=!6);    
    }
    
};

//------------------------------------------------------------------------------------//
//--------------------------------Class Entrainneur-----------------------------------//
//------------------------------------------------------------------------------------//



//------------------------------------------------------------------------------------//
//-------------------------------Fonction Principale----------------------------------//                         
//------------------------------------------------------------------------------------//

int Adherent::size=2;
int main(){

    int choix_adherents;

    Menu menu = Menu();//objet menu
    Adherent adherent = Adherent();


    cout<<"                    ________________________________________\n";
    cout<<"                  _/_                                      _\\_\n";
    cout<<"               __/__/        Gestion du club de sport        \\__\\__\n";
    cout<<"              | « « |                 GEMI                   | » » |\n";
    cout<<"               ¯¯\\¯¯\\       Abderrahman BENIFFOU             /¯¯/¯¯\n";
    cout<<"                  ¯\\¯                                      ¯/¯\n";
    cout<<"                    ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n\n\n";

    menu.display();
    if(menu.getChoix()!=0){

    do{
        switch (menu.getChoix())
        {
        case 1:
            do{                
                cout<<"1. Nouvelle inscription\n2. Recherche\n3. Modifier\n4. Supprimer \n5. Retour\n0. Quitter\n\n";
                cout<<"Queceque vous voullez ?";
                cin>>choix_adherents;
                switch (choix_adherents)
                {
                case 1:
                    cout<<"La fonction Nouvelle inscription\n\n";
                    break;
                case 2://La fonction Recherche adherent
                    adherent.show_adherent();
                    cout<<"\n-----------------------------------------------------------------------------------\n\n";
                    break;
                case 3:
                    adherent.modifer_adherent();
                    //int choix_modifier;
                    
                    break;
                case 4:
                    cout<<"La foction Supprimer\n\n";
                    break;
                case 0:
                    exit(0);
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
        menu.display();
    
    }while (menu.getChoix()!=0);
    }else{exit(0);}
    
}

