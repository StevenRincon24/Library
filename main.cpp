//
// Created by Steven on 22/11/2020.
//

#include <iostream>
#include "Author.h"
#include "Book.h"
#include "ServiceLibrary.h"

using namespace std;
ServiceLibrary* library = new ServiceLibrary();

void addAuthor() {
    string idAuthor , nationality;
    string name;
    cout<<"Author Id "<<endl;
    cin>>idAuthor;

    cout<<"Author Name"<<endl;
    cin.ignore();
    getline(cin, name);
    cout<<"Author Nationality"<<endl;
    cin>> nationality;
    if (library->addAuthor(idAuthor, name , nationality) == true){
        cout<<"Author add successfully"<<endl;
    }else if (library->addAuthor(idAuthor, name , nationality) != true){
        cout<<"Error add author"<<endl;
    }
}

void  addBook(){
    string IdAuthor, IdBook, name;
    short int pages;
    cout<<"Author Id "<<endl;
    cin>> IdAuthor;
    cout<<"Book Id "<<endl;
    cin>> IdBook;
    getline(cin, name);
    cout<<"Book Name "<<endl;
    getline(cin, name);
    cout<<"Book Pages "<<endl;
    cin>> pages;
    if (library->addBook(IdAuthor,IdBook, name, pages)==true){
        cout<<"Book add successfully"<<endl;
    }else if (library->addBook(IdAuthor,IdBook, name, pages)!=true){
        cout<<"Error add book"<<endl;
    }
}


std::string showAuthor() {
    return library->showAuthor();
}

std::string showBooks(){
    return library->showBook();
}

std::string showBooksAuthor() {
    string AuthorId;
    cout<<"Author Id "<<endl;
    cin>>AuthorId;
    return library->showBookAuthor(AuthorId);
}

void menu(){
    int option;
    cout<<"Enter a option"<<endl<<"1. Add author"<<endl<<"2. Show authors"<<endl<<"3. Add book"
        <<endl<<"4. Show book"<<endl<<"5. Author Books"<<endl<<"6. Exit"<<endl;
    cin>>option;

    do{
        if (option == 1){
            cout<<"Add Author"<<endl;
            addAuthor();
            menu();
        }else if ( option == 2 ){
            cout<<showAuthor()<<endl;
            menu();
        }else if ( option == 3 ){
            addBook();
            menu();
            cout<<"Add book"<<endl;
        }else if ( option == 4 ){
            cout<<showBooks()<<endl;
            menu();
        }else if( option == 5 ){
            cout<<showBooksAuthor();
            menu();
        }

        else if ( option == 6 ){
            cout<<"Thank for use the system"<<endl;
            exit(0);
        }
    }while (option < 7);
}

int main() {
    /*cout << "Escribe tu nombre : ";
    string nombre;
    getline(cin, nombre);

    cout << "Escribe tu nombre : ";
    string departamento;
    getline(cin, departamento);


    cout << "Hola " << nombre << endl;
    int num = nombre.size();
    cout << "Tu nombre tiene " << num << " caracteres" << endl;*/
    menu();
}
