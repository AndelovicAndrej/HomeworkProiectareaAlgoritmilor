#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
    struct book *book_list = (struct book*)malloc(sizeof(struct book));
    book_list->next = NULL;

    struct biblioteca *biblioteca_collection = (struct biblioteca*)malloc(sizeof(struct biblioteca));
    biblioteca_collection->next = NULL;

    ///Add
    add_new_book(book_list, "The Lord of The Ring", "JRR Tolkien");
    add_new_book(book_list, "Harry potter","J K Rowling" );
    add_new_book(book_list, "Moby Dick", "Hermana Melvila");
    add_new_book(book_list, "Tom Sawyer","	Mark Twain" );





    add_new_biblioteca(biblioteca_collection, 1, 10,0);
    add_new_biblioteca(biblioteca_collection, 2, 10,0);
    show_biblioteca_details(biblioteca_collection);

    struct book *book_iterator;
    struct biblioteca *biblioteca_iterator;

    for(biblioteca_iterator = biblioteca_collection->next; biblioteca_iterator != NULL; biblioteca_iterator = biblioteca->next)
    {
        for(book_iterator = book_list->next; book_iterator != NULL; book_iterator = book_iterator->next)
        {
            if(book_iterator->biblioteca_id == 0)
            {
                if(book_iterator->autor )
                    book_iterator->biblioteca_id = biblioteca_iterator->ID;


            }
        }
    }

    show_biblioteca_details(biblioteca_collection);
    show_book_list(book_list);
    int pause;
    scanf("%d", &pause);
    return 0;

