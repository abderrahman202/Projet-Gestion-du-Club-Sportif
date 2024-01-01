#include <iostream>
#include <cstdlib>  //librairie pour quitter le programme
#include <string>

using namespace std;


//------------------------------------------------------------------------------------//
//---------------------------------Class Adherent-------------------------------------//
//------------------------------------------------------------------------------------//
class Adherent{
private:
    int Numero[1000] = {1, 2, 3, 4}, choix_modifier = 0,choix_modifier1=0, choix_supprimer=0, New_id=1026;
    string Tel[1000] = {"0611223344", "0660313525","0612345678","0645486935"}, Id[1000]={"AD1023","AD1024","AD1025","AD1026"}, AD="AD", New_Id;
    string Prenom[1000] = {"Abderrahman", "Mohamed","Youssef","Oussama"}, Nom[1000] = {"BENIFFOU", "WASSUP","HOUARI","MESBAHI"};
    string Date_de_naissance[1000] = {"01/01/2002", "01/02/2002","05/04/1981","21/01/1999"}, Date_adhetion[1000] = {"01/02/2023", "15/12/2023","16/12/2023","15/12/2023"};

public:
    static int size_adherent;  
    Adherent() {
    }

    void new_adherent(){
        if (size_adherent < 1000) {
        Prenom[size_adherent]=size_adherent;
        cout<<"Saisir le prénom: ";
        cin>>Prenom[size_adherent];
        cout<<"\nSaisir le nom: ";
        cin>>Nom[size_adherent];
        cout<<"\nSaisir le Telephone: ";
        cin>>Tel[size_adherent];
        cout<<"Saisir la date de naissance: ";
        cin>>Date_de_naissance[size_adherent];
        cout<<"Saisir la date d'adhésion: ";
        cin>>Date_adhetion[size_adherent];
        Numero[size_adherent]=size_adherent+1;
        New_Id=AD + to_string (++New_id);
        Id[size_adherent] = New_Id;
        size_adherent++;
        } else {
            cout << "Nombre maximum d'adhérents atteint." << endl;
        }
        cout<<"\n---------------------------------------------------------------------\n\n";
    }
    void show_adherent() {
        for (int i = 0; i < size_adherent; i++) {
            cout << "\n" << Numero[i] << "/\n\t"<< "\n\tNuméro: " << Id[i]<<"\n\tPrénom: " << Prenom[i] << "\n\tNom: " << Nom[i] << "\n\tTel: " << Tel[i] << "\n\tDate de naissance: " << Date_de_naissance[i] << "\n\tDate d'adhésion: " << Date_adhetion[i] << endl;
        }
    }

    void modifer_adherent() {
        show_adherent();
        cout << "\n---------------------------------------------------------------------\n\n";
        cout << "Quel adhérent vous voullez modifier ?";
        cin >> choix_modifier;
        cout << "\n----------------------------------------------------------------------\n\n";
        while (choix_modifier > size_adherent+1 || choix_modifier<1){//Je sais pas pourquoi do while loop ne fonctionne pas !!!
            cout << "Saisir un adhérent dans la liste ";
            cin >> choix_modifier;
            cout << "\n----------------------------------------------------------------------\n\n";
            }
        cout << "\n\nSaisir le numéro d'information ce que vous voulez modifier:\n";
        cout << "1. Prénom\n";
        cout << "2. Nom\n";
        cout << "3. Tel\n";
        cout << "4. Date de naissance\n";
        cout << "5. Sports pratiquées\n";// N'est pas encore faite, parsqu'il faut avoir une listes des sports pratiquées dans le club
        cout << "6. Retour\n";
        cout << "0. Quitter\n";
        cout << "Queceque voullez-vous modifier ?";
        cin >> choix_modifier1;
        do {
            do {
                switch (choix_modifier1) {
                    case 0:
                        exit(0);
                    case 1:
                        cout << "Saisir le nouveau prénom: ";
                        cin >> Prenom[choix_modifier-1];
                        choix_modifier1++;
                        break;
                    case 2:
                        cout << "Saisir le nouveau nom: ";
                        cin >> Nom[choix_modifier-1];
                        choix_modifier1++;
                        break;
                    case 3:
                        cout << "Saisir le nouveau Tel: ";
                        cin >> Tel[choix_modifier-1];
                        choix_modifier1++;
                        break;
                    case 4:
                        cout << "Saisir le nouveau prénom: ";
                        cin >> Date_de_naissance[choix_modifier-1];
                        choix_modifier1++;
                        break;
                    default:
                        break;
                        
                }
                cout << "\n\nSaisir le numéro de ce que vous voulez modifier:\n";
                cout << "1. Prénom\n";
                cout << "2. Nom\n";
                cout << "3. Tel\n";
                cout << "4. Date de naissaince\n";
                cout << "5. Sports pratiquées\n";
                cout << "6. Retour\n";
                cout << "0. Quitter\n";
                cout << "Queceque voullez-vous modifier ?";
                cin >> choix_modifier1;

            } while (choix_modifier1 != 6);
        } while (choix_modifier1 != 6);
    }
    
    void supprimer_adherent(){
        show_adherent();
        cout << "\n---------------------------------------------------------------------\n\n";
        cout << "Quel adhérent voullez-vous supprimer ?";
        cin >> choix_supprimer;
        cout << "\n---------------------------------------------------------------------\n\n";

        for(int i=choix_supprimer-1;i<size_adherent;i++){
            Id[i]=Id[i+1];
            Prenom[i]=Prenom[i+1];
            Nom[i]=Nom[i+1];
            Tel[i]=Tel[i+1];
            Date_de_naissance[i]=Date_de_naissance[i+1];
            Date_adhetion[i]=Date_adhetion[i+1];
            size_adherent=size_adherent-1;
        }
    }
};


//------------------------------------------------------------------------------------//
//---------------------------------Class Entrainneur-------------------------------------//
//------------------------------------------------------------------------------------//

class Entrainneur{
private:
    string Numero[1000]={"EPZ3215","EP3215","EV3248"}, nom[1000]={"Ahmed MOUDEN","Amine NASSIRI","Samir "},Telephone[1000]={"0612548736","0751248963","0762045918"}, Date_de_naissance[1000]={"09/12/1982","15/05/1991","23/04/1993"}, Date_embauche[20]={"16/12/2023"};
    bool Permanent[1000]={true,true,false};
    double Salaire[50]={4000,4500}, Prix_heure[20]={50};
public:
    static int size_entrainneur;  
    Entrainneur(){

    }
    void new_entrainneur(){
        cout<<"\nSaisir le nom: ";
        cin>>nom[size_entrainneur];
        cout<<"\nSaisir le Telephone: ";
        cin>>Telephone[size_entrainneur];
        cout<<"Saisir la date de naissance: ";
        cin>>Date_de_naissance[size_entrainneur];

        cout<<"Saisir la date d'adhésion: ";
        cin>>Date_embauche[size_entrainneur];
        Numero[size_entrainneur]=size_entrainneur+1;
        size_entrainneur++;
        cout<<"\n---------------------------------------------------------------------\n\n";
    }
};


//------------------------------------------------------------------------------------//
//-----------------------------------Class Menu---------------------------------------//
//------------------------------------------------------------------------------------//

class Menu :public Adherent {
public:
    int choix = 0, choix_gestion_adherent=1;

    Menu() {
    }

    void logo(){
            cout << "                    ________________________________________\n";
            cout << "                  _/_                                      _\\_\n";
            cout << "               __/__/        Gestion du club de sport        \\__\\__\n";
            cout << "              | « « |                 GEMI                   | » » |\n";
            cout << "               ¯¯\\¯¯\\       Abderrahman BENIFFOU           /¯¯/¯¯\n";
            cout << "                  ¯\\¯                                     ¯/¯\n";
            cout << "                    ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n\n\n";
    }
    void display_menu() {
        cout << "1. Gestion des adhérents\n2. Gestion des entrainneurs\n3. Gestion des équipes\n4. Gestion des séances d'entrainements \n5. Gestion des équipements\n0. Quitter\n\n";
        cout << "Queceque vous voullez ?";
        cin >> choix;
        cout << "\n----------------------------------------------------------------------\n\n";
    }

    void display_Gestion_des_adherents() {
        do {
            cout << "1. Nouvelle inscription\n";
            cout << "2. Recherche\n";
            cout << "3. Modifier\n";
            cout << "4. Supprimer \n";
            cout << "5. Retour\n";
            cout << "0. Quitter\n\n";
            cout << "Queceque vous voullez ?";
            cin >> choix_gestion_adherent;
            cout << "\n----------------------------------------------------------------------\n\n";
            switch (choix_gestion_adherent) {
                case 1:
                    cout << "La fonction Nouvelle inscription\n\n";
                    new_adherent();
                    break;
                case 2:
                    show_adherent();
                    cout << "\n----------------------------------------------------------------------\n\n";
                    break;
                case 3:
                    modifer_adherent();
                    cout << "\n----------------------------------------------------------------------\n\n";
                    break;
                case 4:
                    cout << "La foction Supprimer\n\n";
                    supprimer_adherent();
                    cout << "\n---------------------------------------------------------------------\n\n";
                    break;
                case 0:
                    exit(0);
            }
        } while (choix_gestion_adherent != 5);
    }

    int getChoix() {
        return choix;
    }
    void display_gestion_adherent(){
        do {
                cout << "1. Nouvelle inscription\n";
                cout << "2. Recherche\n";
                cout << "3. Modifier\n";
                cout << "4. Supprimer \n";
                cout << "5. Retour\n";
                cout << "0. Quitter\n\n";
                cin >>choix_adherents;
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
    }
};


int Adherent::size_adherent = 4;
int Entrainneur::size_entrainneur=2;

//------------------------------------------------------------------------------------//
//-------------------------------Fonction Principale----------------------------------//
//------------------------------------------------------------------------------------//

int main() {
    int choix_adherents;

    Menu menu = Menu();
    Adherent adherent = Adherent();
    menu.logo();

    menu.display_menu();
    if (menu.getChoix() != 0) {

        do {
            switch (menu.getChoix()) {
                case 1:
                    menu.display_Gestion_des_adherents();
                    break;
                case 2:
                    
                    
                    break;

                default:
                    break;
                }
                menu.display_menu();
            
            }while (menu.getChoix()!=0);
            }else{exit(0);}
}
