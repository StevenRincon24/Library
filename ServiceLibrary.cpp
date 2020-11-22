//
// Created by Steven on 22/11/2020.
//

#include "ServiceLibrary.h"

ServiceLibrary::ServiceLibrary() {

}

Book *ServiceLibrary::findBook(std::string id) {
    for ( Book *book : books ){
        if( book->getIdBook().compare( id ) == 0  ){

            return book;
        }
    }
    return NULL;
}

Author *ServiceLibrary::findAuthor(std::string id) {
    for ( Author *author : authors ){
        if( author->getIdAuthor().compare( id ) == 0  ){
            return author;
        }
    }
    return NULL;
}

bool ServiceLibrary::addAuthor(std::string id, std::string name, std::string nationality) {
    if(findAuthor(id)  == NULL) {
        authors.push_back(new Author(id, name, nationality));

        return  true;
    }
    return false;
}

std::string ServiceLibrary::showAuthor(){
    std::string  authorsMessage;
    authorsMessage ="";
    for ( Author *author: authors ){
        authorsMessage +=  "Id author: " + author->getIdAuthor()+ "\n"  + "Name author: " + author->getName()+ "\n" + "Nationality: " + author->getNationality()+ "\n"
                           + "-------------------------------------------------------------"+ "\n";
    }
    return  authorsMessage;
}

std::string ServiceLibrary::showBook(){
    std::string BooksList;
    BooksList="";
    for (Book *books: books){
        BooksList += "Book Id: " + books->getIdBook() + "\n"  + "Book Title: " + books->getTitle() + "\n"
                     + "Pages book: " + std::to_string(books->getPages()) +"\n"
                     + "-------------------------------------------------------------"+ "\n";

    }
    return  BooksList;
}

std::string ServiceLibrary::showBookAuthor(std::string IdAuthor){
    Author *author = findAuthor(IdAuthor);
    std::string BooksAuthor;
    BooksAuthor ="";
    if (author){
        for ( Book *book:author->getBooks() ){
            BooksAuthor += "Id: " + book->getIdBook() + "\n"
                           + "Book name: "+ book->getTitle() + "\n"
                           + "Book pages: " + std::to_string(book->getPages()) +"\n"
                           + "-------------------------------------------------------------" + "\n";
        }
        return BooksAuthor;
    }else {
        return "AUTHOR DOES NOT HAVE A BOOK";
    }


}

bool ServiceLibrary::addBook(std::string idAuthor, std::string idBook, std::string title, short int pages ) {
    Author* author = findAuthor( idAuthor);
    if (author){
        if ( !findBook(idBook) ){
            Book* book  = new Book(idBook , title , pages);
            books.push_back(book);
            author->addBook(book);
            return true;
        }else{
            return false;
        }

    }else {
        return false;
    }
}

std::vector<Book *> ServiceLibrary::getBooks() {
    return std::vector<Book *>();
}

std::vector<Author *> ServiceLibrary::getAuthors() {
    return std::vector<Author *>();
}

ServiceLibrary::~ServiceLibrary() {

}
