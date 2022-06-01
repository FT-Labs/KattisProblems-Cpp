#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node Node;
struct Node
{
    char name[21];
    Node *next;
};

void cut(char *node_val, char *before, Node **head)
{
    Node *new_node = malloc(sizeof(Node));
    strcpy(new_node->name, node_val);
    Node **indirect = head;

    while (strcmp((*indirect)->name, before))
        indirect = &(*indirect)->next;

    new_node->next = (*indirect);
    (*indirect) = new_node;
}

void erase(char *to_erase, Node **head)
{
    Node **indirect = head;
    while (strcmp((*indirect)->name, to_erase))
        indirect = &(*indirect)->next;
    *indirect = (*indirect)->next;
}

int main ()
{
    int n;
    scanf("%d", &n);
    Node *head = malloc(sizeof(Node));
    Node *tmp = head;
    for (int i = 0; i < n; i++)
    {
        char name[21];
        scanf("%s", name);
        strcpy(tmp->name, name);
        if (i == n-1)
            break;
        Node *new = malloc(sizeof(Node));
        tmp->next = new;
        tmp = tmp->next;
    }

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char opt[21];
        scanf("%s", opt);

        if (opt[0] == 'l')
        {
            char name[21];
            scanf("%s", name);
            erase(name, &head);
        }
        else
        {
            char name1[21], name2[21];
            scanf("%s %s", name1, name2);
            cut(name1, name2, &head);
        }
    }

    while (head)
    {
        printf("%s\n", head->name);
        head = head->next;
    }

    return 0;
}
