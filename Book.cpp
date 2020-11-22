//
// Created by Steven on 22/11/2020.
//


#include "Book.h"

Book::Book() {}

Book::Book(const std::string &idBook, const std::string &title, short pages) : idBook(idBook), title(title), pages(pages) {}

const std::string &Book::getIdBook() const {
    return idBook;
}

void Book::setIdBook(const std::string &idBook) {
    Book::idBook = idBook;
}

const std::string &Book::getTitle() const {
    return title;
}

void Book::setTitle(const std::string &title) {
    Book::title = title;
}

short Book::getPages() const {
    return pages;
}

void Book::setPages(short pages) {
    Book::pages = pages;
}

std::ostream &operator<<(std::ostream &os, const Book &book) {
    os << "idBook: " << book.idBook << " title: " << book.title << " pages: " << book.pages;
    return os;
}

Book::~Book() {

}
