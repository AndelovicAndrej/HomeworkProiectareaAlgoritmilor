#ifndef FUNCTIONS_FILE
#define FUNCTIONS_FILE

struct book {
    struct book *next;
    char name[50];
    char autor[50];
    int book_id;
} book;

struct biblioteca {
    struct biblioteca *next;
    int ID;

} biblioteca;

struct book *add_new_book(struct book *book_list,char name[],char autor);
struct book *show_book_list(struct book *book_list);
struct biblioteca *add_new_biblioteca(struct biblioteca *biblioteca_collection, int ID);
struct biblioteca *show_biblioteca_details(struct biblioteca *biblioteca_collection);

#endif
