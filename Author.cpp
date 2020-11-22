//
// Created by Steven on 22/11/2020.
//

#include "Author.h"

Author::Author() {


}

Author::Author(const std::string &idAuthor, const std::string &name, const std::string &nationality) {
    this-> idAuthor = idAuthor;
    this-> name = name;
    this-> nationality = nationality;
}

const std::string &Author::getIdAuthor() const {
    return idAuthor;
}

void Author::setIdAuthor(const std::string &idAuthor) {
    Author::idAuthor = idAuthor;
}

const std::string &Author::getName() const {
    return name;
}

void Author::setName(const std::string &name) {
    Author::name = name;
}

const std::string &Author::getNationality() const {
    return nationality;
}

void Author::setNationality(const std::string &nationality) {
    Author::nationality = nationality;
}

void Author::addBook(Book *book) {
    books.push_back(book);
}

Book *Author::findBook( std::string id ) {

    for ( Book *book : books ){
        if( book->getIdBook().compare( id ) == 0  ){
            return book;
        }
    }

    return NULL;
}


std::ostream &operator<<(std::ostream &os, const Author &author) {
    os << "idAuthor: " << author.idAuthor << " name: " << author.name << " nationality: " << author.nationality;
    return os;
}


const std::vector<Book *> &Author::getBooks() const {
    return books;
}

void Author::setBooks(const std::vector<Book *> &books) {
    Author::books = books;
}

Author::~Author() {
    for( Book *book : books ){
        delete( book );
    }
}
