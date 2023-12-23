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
        int Id[100] = {1,2};
        string Tel[100] = {"0611223344", "0660313525"};
        string Prenom[100] = {"Abderrahman","Mohamed"},Nom[100] = {"BENIFFOU","WASSUP"},Date_de_naissance[100] = {"01/01/2002","01/02/2002"},Date_dhadetion[100] = {"01/02/2023","15/12/2023"};
    public: 
        static int size;
    Adherent(){
        
    }
    void show_adherent(){
        for(int i=0;i<size;i++){
            cout<<"\n"<<Id[i]<<"/\n\tPrénom: "<<Prenom[i]<<"\n\tNom: "<<Nom[i]<<"\n\tTel: "<<Tel[i]<<"\n\tDate de naissance: "<<Date_de_naissance[i]<<"\n\tDate d'adhésion: "<<Date_dhadetion[i]<<endl;
        }
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


    cout<<"------------------------------Gestion du club de sport GEMI-------------------------------------\n\n";
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
                    cout<<"La fonction Modifier\n\n";
                    adherent.show_adherent();
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

