#include <iostream>
#include <cstdlib>  //librairie pour quitter le programme
#include <string>

using namespace std;


//------------------------------------------------------------------------------------//
//---------------------------------Class Adherent-------------------------------------//
//------------------------------------------------------------------------------------//
class Adherent{
private:
    int Id[100] = {1, 2,3,4}, choix_modifier = 0,choix_modifier1=0, choix_supprimer=0;
    string Tel[100] = {"0611223344", "0660313525","0612345678","0645486935"};
    string Prenom[100] = {"Abderrahman", "Mohamed","Youssef","Oussama"}, Nom[100] = {"BENIFFOU", "WASSUP","HOUARI","MESBAHI"}, Date_de_naissance[100] = {"01/01/2002", "01/02/2002","05/04/1981","21/01/1999"}, Date_adhetion[100] = {"01/02/2023", "15/12/2023","16/12/2023","15/12/2023"};
    
public:
    static int size;  
    Adherent() {
    }

    void new_adherent(){
        Prenom[size]=size;
        cout<<"Saisir le prénom: ";
        cin>>Prenom[size];
        cout<<"\nSaisir le nom: ";
        cin>>Nom[size];
        cout<<"\nSaisir le Telephone: ";
        cin>>Tel[size];
        cout<<"Saisir la date de naissance: ";
        cin>>Date_de_naissance[size];
        cout<<"Saisir la date d'adhésion: ";
        cin>>Date_adhetion[size];
        Id[size]=size+1;
        size++;
        cout<<"\n---------------------------------------------------------------------\n\n";
    }
    void show_adherent() {
        for (int i = 0; i < size; i++) {
            cout << "\n" << Id[i] << "/\n\tPrénom: " << Prenom[i] << "\n\tNom: " << Nom[i] << "\n\tTel: " << Tel[i] << "\n\tDate de naissance: " << Date_de_naissance[i] << "\n\tDate d'adhésion: " << Date_adhetion[i] << endl;
        }
    }

    void modifer_adherent() {
        show_adherent();
        cout << "\n---------------------------------------------------------------------\n\n";
        cout << "Quel adhérent vous voullez modifier ?";
        cin >> choix_modifier;
        cout << "\n----------------------------------------------------------------------\n\n";
        while (choix_modifier > size+1 || choix_modifier<1){//Je sais pas pourquoi do while loop ne fonctionne pas !!!
            cout << "Saisir un adhérent dans la liste ";
            cin >> choix_modifier;
            cout << "\n----------------------------------------------------------------------\n\n";
            }
        cout << "\n\nSaisir le numéro d'information ce que vous voulez modifier:\n";
        cout << "1. Prénom\n";
        cout << "2. Nom\n";
        cout << "3. Tel\n";
        cout << "4. Date de naissaince\n";
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
        /*
        do{
            cout << "Saisir un adhérent dans la liste ";
            cin >> choix_supprimer;
            cout << "\n---------------------------------------------------------------------\n\n";
        }
        while(choix_modifier > size+1 || choix_modifier<1);*/

        for(int i=choix_supprimer-1;i<size;i++){
            Prenom[i]=Prenom[i+1];
            Nom[i]=Nom[i+1];
            Tel[i]=Tel[i+1];
            Date_de_naissance[i]=Date_de_naissance[i+1];
            Date_adhetion[i]=Date_adhetion[i+1];
            size=size-1;
        }
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
};


int Adherent::size = 4;

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
                    
                    break;

                default:
                    break;
                }
                menu.display_menu();
            
            }while (menu.getChoix()!=0);
            }else{exit(0);}
}
