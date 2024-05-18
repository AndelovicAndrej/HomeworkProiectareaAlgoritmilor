#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "functions.h"

struct book *add_new_book(struct book *book_list,char name[],char autor){
   struct book *new_book =(struct book*)malloc(sizeof(struct book));
   strcpy(new_book->name, name);
   new_book->autor = autor;
   new_book->biblioteca_id = 0;
   new_book->next = book_list->next;
   book_list->next = new_book;
};

struct book *show_book_list(struct book *book_list){
    struct book *iterator;
    iterator = book_list->next;
    while(iterator != NULL){
        printf("Name: %s \nAutor: %s \nBiblioteca ID:%d \n\n", iterator->name, iterator->autor,iterator->biblioteca_id);
        iterator = iterator->next;
    }
};

struct biblioteca *add_new_biblioteca(struct biblioteca *biblioteca_collection, int ID){
    struct biblioteca *new_biblioteca = (struct biblioteca*)malloc(sizeof(struct biblioteca));
    new_biblioteca->ID = ID;
    new_biblioteca->next = biblioteca_collection->next;
    biblioteca_collection->next = new_biblioteca;
};

struct biblioteca*show_biblioteca_details(struct biblioteca *biblioteca_collection){
    struct biblioteca *iterator;
    iterator = biblioteca_collection->next;
    while(iterator != NULL){
        printf("biblioteca ID: %d ", iterator->ID);
    }
};
