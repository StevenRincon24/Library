//
// Created by Steven on 22/11/2020.
//

#ifndef LIBRERIA_SERVICELIBRARY_H
#define LIBRERIA_SERVICELIBRARY_H


#include "Book.h"
#include "Author.h"

class ServiceLibrary {
public:
    ServiceLibrary();
    Book* findBook(std::string);
    Author* findAuthor(std::string);
    bool addBook( std::string, std::string, std::string, short int );
    bool addAuthor( std::string, std::string, std::string );
    std::vector<Book*> getBooks();
    std::vector<Author*> getAuthors();
    std::string showAuthor();
    virtual ~ServiceLibrary();
    std::string showBook();
    std::string showBookAuthor(std::string IdAuthor);

private:
    std::vector<Book*> books;
    std::vector<Author*> authors;


};


#endif //BOOKS_SERVICELIBRARY_H
