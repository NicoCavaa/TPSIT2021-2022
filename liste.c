#define Max_Len 63

struct list_node{
    struct list_node * next;
    int age;
    char user_id[Max_Len+1];
    
}