#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node Node;
struct Node
{
    char name[21];
    Node *next;
};

void erase(char *to_erase, char *name, Node **head)
{
    Node **indirect = head;
    while (strcmp((*indirect)->name, to_erase))
        indirect = &(*indirect)->next;

    if (name)
    {
        Node *new_node = malloc(sizeof(Node));
        strcpy(new_node->name, name);
        new_node->next = *indirect;
        *indirect = new_node;
    }
    else
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
            erase(name, NULL, &head);
        }
        else
        {
            char name1[21], name2[21];
            scanf("%s %s", name1, name2);
            erase(name2, name1, &head);
        }
    }

    while (head)
    {
        printf("%s\n", head->name);
        head = head->next;
    }

    return 0;
}
