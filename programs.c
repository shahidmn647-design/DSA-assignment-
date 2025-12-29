#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *temp, *newnode;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        newnode = malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
 
 


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *temp, *newnode;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        newnode = malloc(sizeof(struct node));

        printf("Enter value: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
 
 

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *temp, *newnode, *prev;
    int n, i, del;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        newnode = malloc(sizeof(struct node));
        printf("Enter value: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    printf("Enter value to delete: ");
    scanf("%d", &del);

    temp = head;
    prev = NULL;

    while (temp != NULL)
    {
        if (temp->data == del)
        {
            if (prev == NULL)
                head = temp->next;
            else
                prev->next = temp->next;

            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
 
 

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *top = NULL, *temp;
    int ch, x;

    while (1)
    {
        printf("\n1 Push\n2 Pop\n3 Display\n4 Exit\n");
        scanf("%d", &ch);

        if (ch == 1)
        {
            temp = malloc(sizeof(struct node));
            printf("Enter value: ");
            scanf("%d", &temp->data);
            temp->next = top;
            top = temp;
        }
        else if (ch == 2)
        {
            if (top == NULL)
                printf("Stack Empty");
            else
            {
                temp = top;
                printf("Popped: %d", temp->data);
                top = top->next;
                free(temp);
            }
        }
        else if (ch == 3)
        {
            temp = top;
            if (temp == NULL)
                printf("Stack Empty");
            else
                while (temp != NULL)
                {
                    printf("%d ", temp->data);
                    temp = temp->next;
                }
        }
        else
            break;
    }

    return 0;
}
 

 


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *front = NULL, *rear = NULL, *temp;
    int ch, x;

    while (1)
    {
        printf("\n1 Insert\n2 Delete\n3 Display\n4 Exit\n");
        scanf("%d", &ch);

        if (ch == 1)
        {
            temp = malloc(sizeof(struct node));
            printf("Enter value: ");
            scanf("%d", &temp->data);
            temp->next = NULL;

            if (rear == NULL)
            {
                front = rear = temp;
            }
            else
            {
                rear->next = temp;
                rear = temp;
            }
        }
        else if (ch == 2)
        {
            if (front == NULL)
                printf("Queue Empty");
            else
            {
                temp = front;
                printf("Deleted: %d", temp->data);
                front = front->next;
                if (front == NULL)
                    rear = NULL;
                free(temp);
            }
        }
        else if (ch == 3)
        {
            temp = front;
            if (temp == NULL)
                printf("Queue Empty");
            else
                while (temp != NULL)
                {
                    printf("%d ", temp->data);
                    temp = temp->next;
                }
        }
        else
            break;
    }

    return 0;
}
 
 


#include <stdio.h>
#include <time.h>

int main()
{
    int a[50], n, i, pos;
    clock_t t1, t2;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to insert: ");
    scanf("%d", &pos);

    t1 = clock();
    for (i = n; i >= pos; i--)
        a[i] = a[i - 1];
    n++;
    t2 = clock();

    printf("Insertion time: %f\n", (double)(t2 - t1) / CLOCKS_PER_SEC);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    t1 = clock();
    for (i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
    t2 = clock();

    printf("Deletion time: %f\n", (double)(t2 - t1) / CLOCKS_PER_SEC);

    return 0;
}
 
 


#include <stdio.h>
#include <time.h>

int main()
{
    int a[100], n, i, pos, val;
    clock_t start, end;
    double time;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to insert: ");
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &val);

    start = clock();
    for (i = n; i >= pos; i--)
        a[i] = a[i - 1];
    a[pos - 1] = val;
    n++;
    end = clock();

    time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken for insertion: %f seconds\n", time);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    start = clock();
    for (i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
    end = clock();

    time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken for deletion: %f seconds\n", time);

    return 0;
}
 
 

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int row, col, val;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *temp, *newnode;
    int r, c, i, j, x;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &x);
            if (x != 0)
            {
                newnode = malloc(sizeof(struct node));
                newnode->row = i;
                newnode->col = j;
                newnode->val = x;
                newnode->next = NULL;

                if (head == NULL)
                {
                    head = newnode;
                    temp = newnode;
                }
                else
                {
                    temp->next = newnode;
                    temp = newnode;
                }
            }
        }
    }

    temp = head;
    while (temp != NULL)
    {
        printf("%d %d %d\n", temp->row, temp->col, temp->val);
        temp = temp->next;
    }

    return 0;
}
 
 

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coeff;
    int exp;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *temp, *newnode;
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        newnode = malloc(sizeof(struct node));

        printf("Enter coefficient: ");
        scanf("%d", &newnode->coeff);

        printf("Enter exponent: ");
        scanf("%d", &newnode->exp);

        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    temp = head;
    while (temp != NULL)
    {
        printf("%dx^%d", temp->coeff, temp->exp);
        if (temp->next != NULL)
            printf(" + ");
        temp = temp->next;
    }

    return 0;
}
 
 


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int main()
{
    struct node *root, *l, *r;

    root = malloc(sizeof(struct node));
    l = malloc(sizeof(struct node));
    r = malloc(sizeof(struct node));

    printf("Enter root value: ");
    scanf("%d", &root->data);

    printf("Enter left child value: ");
    scanf("%d", &l->data);

    printf("Enter right child value: ");
    scanf("%d", &r->data);

    root->left = l;
    root->right = r;
    l->left = l->right = NULL;
    r->left = r->right = NULL;

    printf("%d %d %d", root->data, root->left->data, root->right->data);

    return 0;
}

 
 



#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* create()
{
    int x;
    struct node *n;

    scanf("%d", &x);

    if (x == -1)
        return NULL;

    n = malloc(sizeof(struct node));
    n->data = x;
    n->left = create();
    n->right = create();

    return n;
}

int main()
{
    struct node *root;

    printf("Enter values (-1 for no node): ");
    root = create();

    return 0;
}
 
 

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* create()
{
    int x;
    struct node *n;

    printf("Enter value (-1 for no node): ");
    scanf("%d", &x);

    if (x == -1)
        return NULL;

    n = malloc(sizeof(struct node));
    n->data = x;

    n->left = create();
    n->right = create();

    return n;
}

int main()
{
    struct node *root;

    root = create();

    return 0;
} 
 

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int main()
{
    struct node *root, *l, *r;

    root = malloc(sizeof(struct node));
    l = malloc(sizeof(struct node));
    r = malloc(sizeof(struct node));

    printf("Enter root value: ");
    scanf("%d", &root->data);

    printf("Enter left child value: ");
    scanf("%d", &l->data);

    printf("Enter right child value: ");
    scanf("%d", &r->data);

    root->left = l;
    root->right = r;
    l->left = l->right = NULL;
    r->left = r->right = NULL;

    printf("\n    %d\n", root->data);
    printf("   / \\\n");
    printf("  %d   %d\n", root->left->data, root->right->data);

    return 0;
}
 
 

#include <stdio.h>

int main()
{
    int tree[20], n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter value for node %d: ", i);
        scanf("%d", &tree[i]);
    }

    printf("\nTree stored in array:\n");
    for (i = 1; i <= n; i++)
        printf("%d ", tree[i]);

    return 0;
}
 
 
#include <stdio.h>

int main()
{
    int tree[20], n, i;

    printf("Enter number of nodes (max 7): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter value for node %d: ", i);
        scanf("%d", &tree[i]);
    }

    if (n >= 1)
        printf("\n        %d\n", tree[1]);

    if (n >= 3)
    {
        printf("      /   \\\n");
        printf("     %d     %d\n", tree[2], tree[3]);
    }

    if (n >= 7)
    {
        printf("    / \\   / \\\n");
        printf("   %d   %d %d   %d\n",
               tree[4], tree[5], tree[6], tree[7]);
    }

    return 0;
}
 
 


#include <stdio.h>

int main()
{
    int tree[8];

    printf("Enter root: ");
    scanf("%d", &tree[1]);

    printf("Enter left child of root: ");
    scanf("%d", &tree[2]);

    printf("Enter right child of root: ");
    scanf("%d", &tree[3]);

    printf("Enter left child of %d: ", tree[2]);
    scanf("%d", &tree[4]);

    printf("Enter right child of %d: ", tree[2]);
    scanf("%d", &tree[5]);

    printf("Enter left child of %d: ", tree[3]);
    scanf("%d", &tree[6]);

    printf("Enter right child of %d: ", tree[3]);
    scanf("%d", &tree[7]);

    printf("\nTree stored successfully\n");

    return 0;
}
 
 
#include <stdio.h>

int main()
{
    int tree[20], n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter value for node %d: ", i);
        scanf("%d", &tree[i]);
    }

    printf("\nRoot Node: %d\n", tree[1]);

    for (i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
            printf("Left Child of %d: %d\n", tree[i / 2], tree[i]);
        else
            printf("Right Child of %d: %d\n", tree[i / 2], tree[i]);
    }

    return 0;
}
 
 
#include <stdio.h>

int main()
{
    int tree[8];

    printf("Enter root: ");
    scanf("%d", &tree[1]);

    printf("Enter left child of root: ");
    scanf("%d", &tree[2]);

    printf("Enter right child of root: ");
    scanf("%d", &tree[3]);

    printf("Enter left child of %d: ", tree[2]);
    scanf("%d", &tree[4]);

    printf("Enter right child of %d: ", tree[2]);
    scanf("%d", &tree[5]);

    printf("Enter left child of %d: ", tree[3]);
    scanf("%d", &tree[6]);

    printf("Enter right child of %d: ", tree[3]);
    scanf("%d", &tree[7]);

    printf("\nTree stored successfully\n");

    return 0;
} 
 

#include <stdio.h>

int main()
{
    int tree[50] = {0};
    int n, value, i, k;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter root value: ");
    scanf("%d", &tree[1]);

    for(k = 2; k <= n; k++)
    {
        printf("Enter value %d: ", k);
        scanf("%d", &value);

        i = 1;
        while(tree[i] != 0)
        {
            if(value < tree[i])
                i = 2 * i;
            else
                i = 2 * i + 1;
        }
        tree[i] = value;
    }

    printf("\nTree Display:\n");

    for(i = 1; i < 25; i++)
    {
        if(tree[i] != 0)
        {
            if(tree[2*i] != 0)
                printf("Left child of %d is %d\n", tree[i], tree[2*i]);

            if(tree[2*i + 1] != 0)
                printf("Right child of %d is %d\n", tree[i], tree[2*i + 1]);
        }
    }

    return 0;
}
 
 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* queue[20];
int front = -1, rear = -1;

void enqueue(struct node *temp)
{
    queue[++rear] = temp;
}

struct node* dequeue()
{
    return queue[++front];
}

int isEmpty()
{
    return front == rear;
}

int main()
{
    int n, value;
    struct node *root, *temp, *current;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter root value: ");
    scanf("%d", &value);

    root = (struct node*)malloc(sizeof(struct node));
    root->data = value;
    root->left = root->right = NULL;

    enqueue(root);

    for(int i = 2; i <= n; i++)
    {
        current = dequeue();

        printf("Enter left child of %d: ", current->data);
        scanf("%d", &value);

        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = value;
        temp->left = temp->right = NULL;
        current->left = temp;
        enqueue(temp);

        if(i++ >= n) break;

        printf("Enter right child of %d: ", current->data);
        scanf("%d", &value);

        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = value;
        temp->left = temp->right = NULL;
        current->right = temp;
        enqueue(temp);
    }

    printf("\nBinary Tree constructed successfully\n");

    return 0;
}
 
 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* queue[20];
int front = -1, rear = -1;

void enqueue(struct node *temp)
{
    queue[++rear] = temp;
}

struct node* dequeue()
{
    return queue[++front];
}

int isEmpty()
{
    return front == rear;
}

int main()
{
    int n, value;
    struct node *root, *temp, *current;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter root value: ");
    scanf("%d", &value);

    root = (struct node*)malloc(sizeof(struct node));
    root->data = value;
    root->left = root->right = NULL;

    enqueue(root);

    for(int i = 2; i <= n; i++)
    {
        current = dequeue();

        printf("Enter left child of %d: ", current->data);
        scanf("%d", &value);

        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = value;
        temp->left = temp->right = NULL;
        current->left = temp;
        enqueue(temp);

        if(i++ >= n) break;

        printf("Enter right child of %d: ", current->data);
        scanf("%d", &value);

        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = value;
        temp->left = temp->right = NULL;
        current->right = temp;
        enqueue(temp);
    }

    printf("\nBinary Tree constructed successfully\n");

    return 0;
}
 

 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

/* create new node */
struct node* newNode(int val)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = val;
    temp->left = temp->right = NULL;
    return temp;
}

/* insert by comparison */
struct node* insert(struct node* root, int val)
{
    if(root == NULL)
        return newNode(val);

    if(val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

/* queue for level order display */
void levelOrder(struct node* root)
{
    struct node* q[20];
    int front = 0, rear = 0;

    q[rear++] = root;

    printf("\nLevel Order Display:\n");

    while(front < rear)
    {
        struct node* temp = q[front++];
        printf("%d ", temp->data);

        if(temp->left != NULL)
            q[rear++] = temp->left;

        if(temp->right != NULL)
            q[rear++] = temp->right;
    }
}

int main()
{
    int n, val;
    struct node* root = NULL;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("Enter value %d: ", i);
        scanf("%d", &val);
        root = insert(root, val);
    }

    levelOrder(root);

    return 0;
}
 
 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *temp, *newnode, *prev;
    int ch, x;

    while (1)
    {
        printf("\n1 Insert\n2 Delete\n3 Display\n4 Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                newnode = malloc(sizeof(struct node));
                printf("Enter value: ");
                scanf("%d", &newnode->data);
                newnode->next = NULL;

                if (head == NULL)
                    head = newnode;
                else
                {
                    temp = head;
                    while (temp->next != NULL)
                        temp = temp->next;
                    temp->next = newnode;
                }
                break;

            case 2:
                if (head == NULL)
                {
                    printf("List Empty");
                    break;
                }

                printf("Enter value to delete: ");
                scanf("%d", &x);

                temp = head;
                prev = NULL;

                while (temp != NULL && temp->data != x)
                {
                    prev = temp;
                    temp = temp->next;
                }

                if (temp == NULL)
                    printf("Value not found");
                else
                {
                    if (prev == NULL)
                        head = temp->next;
                    else
                        prev->next = temp->next;

                    free(temp);
                    printf("Deleted");
                }
                break;

            case 3:
                if (head == NULL)
                    printf("List Empty");
                else
                {
                    temp = head;
                    while (temp != NULL)
                    {
                        printf("%d ", temp->data);
                        temp = temp->next;
                    }
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice");
        }
    }
} 
 
#include <stdio.h>

int a[10][10], visited[10], n;

void dfs(int v)
{
    int i;
    printf("%d ", v);
    visited[v] = 1;

    for (i = 1; i <= n; i++)
    {
        if (a[v][i] == 1 && visited[i] == 0)
            dfs(i);
    }
}

int main()
{
    int i, j, start;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);

    for (i = 1; i <= n; i++)
        visited[i] = 0;

    printf("Enter starting node: ");
    scanf("%d", &start);

    printf("DFS traversal: ");
    dfs(start);

    return 0;
}
 
 

#include <stdio.h>

int a[10][10], visited[10], q[10];
int n, front = 0, rear = -1;

void bfs(int start)
{
    int v, i;

    q[++rear] = start;
    visited[start] = 1;

    while (front <= rear)
    {
        v = q[front++];
        printf("%d ", v);

        for (i = 1; i <= n; i++)
        {
            if (a[v][i] == 1 && visited[i] == 0)
            {
                q[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}

int main()
{
    int i, j, start;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);

    for (i = 1; i <= n; i++)
        visited[i] = 0;

    printf("Enter starting node: ");
    scanf("%d", &start);

    printf("BFS traversal: ");
    bfs(start);

    return 0;
}


 
 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int v;
    struct node *next;
};

struct node *adj[10];
int visited[10], stack[10];
int top = -1, n;

void addEdge(int u, int v)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->v = v;
    temp->next = adj[u];
    adj[u] = temp;
}

void dfs(int start)
{
    struct node *p;

    stack[++top] = start;

    while (top != -1)
    {
        start = stack[top--];

        if (visited[start] == 0)
        {
            printf("%d ", start);
            visited[start] = 1;
        }

        p = adj[start];
        while (p != NULL)
        {
            if (visited[p->v] == 0)
                stack[++top] = p->v;
            p = p->next;
        }
    }
}

int main()
{
    int i, e, u, v, start;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        adj[i] = NULL;
        visited[i] = 0;
    }

    printf("Enter number of edges: ");
    scanf("%d", &e);

    for (i = 0; i < e; i++)
    {
        scanf("%d %d", &u, &v);
        addEdge(u, v);
        addEdge(v, u);
    }

    printf("Enter starting node: ");
    scanf("%d", &start);

    printf("DFS traversal: ");
    dfs(start);

    return 0;
}
 
 



#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *adj[10];
int stack[10], top = -1, visited[10], n;

void dfs(int start)
{
    struct node *p;
    stack[++top] = start;

    while (top != -1)
    {
        start = stack[top--];

        if (!visited[start])
        {
            printf("%d ", start);
            visited[start] = 1;
        }

        p = adj[start];
        while (p != NULL)
        {
            if (!visited[p->data])
                stack[++top] = p->data;
            p = p->next;
        }
    }
}

int main()
{
    int i, e, u, v, start;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        adj[i] = NULL;
        visited[i] = 0;
    }

    printf("Enter number of edges: ");
    scanf("%d", &e);

    for (i = 0; i < e; i++)
    {
        scanf("%d %d", &u, &v);

        struct node *t = malloc(sizeof(struct node));
        t->data = v;
        t->next = adj[u];
        adj[u] = t;
    }

    printf("Enter starting node: ");
    scanf("%d", &start);

    printf("DFS: ");
    dfs(start);

    return 0;
}
 
 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *adj[10];
int visited[10], queue[10];
int front = 0, rear = -1, n;

void bfs(int start)
{
    struct node *p;

    queue[++rear] = start;
    visited[start] = 1;

    while (front <= rear)
    {
        start = queue[front++];
        printf("%d ", start);

        p = adj[start];
        while (p != NULL)
        {
            if (!visited[p->data])
            {
                queue[++rear] = p->data;
                visited[p->data] = 1;
            }
            p = p->next;
        }
    }
}

int main()
{
    int i, e, u, v, start;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        adj[i] = NULL;
        visited[i] = 0;
    }

    printf("Enter number of edges: ");
    scanf("%d", &e);

    for (i = 0; i < e; i++)
    {
        scanf("%d %d", &u, &v);

        struct node *t = malloc(sizeof(struct node));
        t->data = v;
        t->next = adj[u];
        adj[u] = t;
    }

    printf("Enter starting node: ");
    scanf("%d", &start);

    printf("BFS: ");
    bfs(start);

    return 0;
}
 
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *m, *c;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    m = (int *)malloc(n * sizeof(int));
    c = (int *)calloc(n, sizeof(int));

    printf("\nValues after malloc:\n");
    for (i = 0; i < n; i++)
        printf("%d ", m[i]);

    printf("\n\nValues after calloc:\n");
    for (i = 0; i < n; i++)
        printf("%d ", c[i]);

    return 0;
}
 
 


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *tail = NULL, *temp, *newnode;
    int ch, x;

    while (1)
    {
        printf("\n1 Insert\n2 Delete\n3 Display\n4 Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                newnode = malloc(sizeof(struct node));
                printf("Enter value: ");
                scanf("%d", &newnode->data);

                if (head == NULL)
                {
                    head = tail = newnode;
                    newnode->next = head;
                }
                else
                {
                    tail->next = newnode;
                    newnode->next = head;
                    tail = newnode;
                }
                break;

            case 2:
                if (head == NULL)
                {
                    printf("List Empty");
                }
                else if (head == tail)
                {
                    free(head);
                    head = tail = NULL;
                }
                else
                {
                    temp = head;
                    head = head->next;
                    tail->next = head;
                    free(temp);
                }
                break;

            case 3:
                if (head == NULL)
                {
                    printf("List Empty");
                }
                else
                {
                    temp = head;
                    do
                    {
                        printf("%d ", temp->data);
                        temp = temp->next;
                    } while (temp != head);
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice");
        }
    }
}
 
 

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *tail = NULL, *temp, *newnode;
    int ch;

    printf("\nCIRCULAR LINKED LIST OPERATIONS\n");

    while (1)
    {
        printf("\n1 Insert\n2 Delete\n3 Display\n4 Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                newnode = malloc(sizeof(struct node));
                printf("Enter value: ");
                scanf("%d", &newnode->data);

                if (head == NULL)
                {
                    head = tail = newnode;
                    newnode->next = head;
                }
                else
                {
                    tail->next = newnode;
                    newnode->next = head;
                    tail = newnode;
                }
                break;

            case 2:
                if (head == NULL)
                {
                    printf("List Empty");
                }
                else if (head == tail)
                {
                    free(head);
                    head = tail = NULL;
                }
                else
                {
                    temp = head;
                    head = head->next;
                    tail->next = head;
                    free(temp);
                }
                break;

            case 3:
                if (head == NULL)
                {
                    printf("List Empty");
                }
                else
                {
                    temp = head;
                    do
                    {
                        printf("%d ", temp->data);
                        temp = temp->next;
                    } while (temp != head);
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice");
        }
    }
}

 
 
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[50], s2[50];
    int result;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    result = strcmp(s1, s2);

    if (result == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
 
 

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *temp, *newnode, *prev;
    int n, i, pos, x;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        newnode = malloc(sizeof(struct node));
        printf("Enter value: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
            head = temp = newnode;
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    printf("Enter position to insert: ");
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &x);

    newnode = malloc(sizeof(struct node));
    newnode->data = x;

    temp = head;
    for (i = 1; i < pos - 1; i++)
        temp = temp->next;

    newnode->next = temp->next;
    temp->next = newnode;

    printf("List after insertion:\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\nEnter position to delete: ");
    scanf("%d", &pos);

    temp = head;
    for (i = 1; i < pos; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    free(temp);

    printf("List after deletion:\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
 
 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* create()
{
    int x;
    struct node *n;

    printf("Enter data (-1 for no node): ");
    scanf("%d", &x);

    if (x == -1)
        return NULL;

    n = malloc(sizeof(struct node));
    n->data = x;

    printf("Enter left child of %d\n", x);
    n->left = create();

    printf("Enter right child of %d\n", x);
    n->right = create();

    return n;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    struct node *root;

    printf("Create Binary Tree\n");
    root = create();

    printf("\nInorder traversal: ");
    inorder(root);

    printf("\nPreorder traversal: ");
    preorder(root);

    printf("\nPostorder traversal: ");
    postorder(root);

    return 0;
} 
 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* create()
{
    int x;
    struct node *n;

    printf("Enter data (-1 for no node): ");
    scanf("%d", &x);

    if (x == -1)
        return NULL;

    n = malloc(sizeof(struct node));
    n->data = x;

    printf("Enter left child of %d\n", x);
    n->left = create();

    printf("Enter right child of %d\n", x);
    n->right = create();

    return n;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    struct node *root;

    printf("Create Binary Tree\n");
    root = create();

    printf("\nInorder traversal: ");
    inorder(root);

    printf("\nPreorder traversal: ");
    preorder(root);

    printf("\nPostorder traversal: ");
    postorder(root);

    return 0;
}
 
 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* create()
{
    int x;
    struct node *n;

    printf("Enter data (-1 for no node): ");
    scanf("%d", &x);

    if (x == -1)
        return NULL;

    n = malloc(sizeof(struct node));
    n->data = x;

    n->left = create();
    n->right = create();

    return n;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main()
{
    struct node *root;

    printf("Create Binary Tree\n");
    root = create();

    printf("\nInorder Traversal: ");
    inorder(root);

    return 0;
}
 
 

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* create()
{
    int x;

    printf("Enter the data (-1 for no node): ");
    scanf("%d", &x);

    if (x == -1)
        return NULL;

    struct node *n = malloc(sizeof(struct node));
    n->data = x;

    printf("Enter left child of %d\n", x);
    n->left = create();

    printf("Enter right child of %d\n", x);
    n->right = create();

    return n;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    struct node *root;

    printf("Create Binary Tree\n");
    root = create();

    printf("\nInorder Traversal: ");
    inorder(root);

    printf("\nPreorder Traversal: ");
    preorder(root);

    printf("\nPostorder Traversal: ");
    postorder(root);

    return 0;
}
 

 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* create()
{
    int x;
    printf("Enter the data (-1 for no node): ");
    scanf("%d", &x);

    if (x == -1)
        return NULL;

    struct node *n = (struct node*)malloc(sizeof(struct node));
    n->data = x;

    printf("Enter left child of %d\n", x);
    n->left = create();

    printf("Enter right child of %d\n", x);
    n->right = create();

    return n;
}

void inorder(struct node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void preorder(struct node *root)
{
    if (root == NULL)
        return;

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main()
{
    struct node *root;

    printf("\nCREATE BINARY TREE\n");
    root = create();

    printf("\n\nInorder Traversal: ");
    inorder(root);

    printf("\nPreorder Traversal: ");
    preorder(root);

    printf("\nPostorder Traversal: ");
    postorder(root);

    return 0;
} 
 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

struct node* insert(struct node *root, int x)
{
    if (root == NULL)
    {
        struct node *n = malloc(sizeof(struct node));
        n->data = x;
        n->left = n->right = NULL;
        return n;
    }
    if (x < root->data)
        root->left = insert(root->left, x);
    else if (x > root->data)
        root->right = insert(root->right, x);

    return root;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void search(struct node *root, int key)
{
    if (root == NULL)
        printf("Element not found\n");
    else if (key == root->data)
        printf("Element found\n");
    else if (key < root->data)
        search(root->left, key);
    else
        search(root->right, key);
}

int main()
{
    int ch, x, n, i;

    while (1)
    {
        printf("\n1.Create");
        printf("\n2.Search");
        printf("\n3.Recursive Traversals");
        printf("\n4.Exit");
        printf("\nEnter your choice=");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("Enter number of nodes: ");
                scanf("%d", &n);
                for (i = 0; i < n; i++)
                {
                    scanf("%d", &x);
                    root = insert(root, x);
                }
                break;

            case 2:
                printf("Enter element to search: ");
                scanf("%d", &x);
                search(root, x);
                break;

            case 3:
                printf("The inorder display=");
                inorder(root);

                printf("\nThe preorder display=");
                preorder(root);

                printf("\nThe postorder display=");
                postorder(root);
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice");
        }
    }
} 
 
#include <stdio.h>
#define SIZE 5

int q[SIZE];
int front = -1, rear = -1;

void insert()
{
    int x;
    if ((rear + 1) % SIZE == front)
    {
        printf("Queue Full\n");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &x);

    if (front == -1)
        front = 0;

    rear = (rear + 1) % SIZE;
    q[rear] = x;
}

void delete()
{
    if (front == -1)
    {
        printf("Queue Empty\n");
        return;
    }

    printf("Deleted element: %d\n", q[front]);

    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % SIZE;
}

void display()
{
    int i;
    if (front == -1)
    {
        printf("Queue Empty\n");
        return;
    }

    i = front;
    while (1)
    {
        printf("%d ", q[i]);
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main()
{
    int ch;

    while (1)
    {
        printf("\n1 Insert\n2 Delete\n3 Display\n4 Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
    }
} 
 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *a = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        a[i] = 0;

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    free(a);
    return 0;
} 
 
#include <stdio.h>
#include <stdint.h>

int main()
{
    int a = 10;
    uintptr_t addr;
    int count = 0;

    addr = (uintptr_t)&a;   // store address as integer

    while (addr != 0)
    {
        count++;
        addr = addr / 10;
    }

    printf("Number of digits in memory address = %d\n", count);

    return 0;
} 
