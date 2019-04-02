#include "node.h"
#include <stdlib.h>

struct node
{
 struct node* left;
 struct node* right;
 int key;
 int height;
};


int 	get_key (Node node)
{
 return node->key;
}
Node 	get_left (Node node)
{
  return node->left;
}
void 	set_left (Node node, Node left_node)
{
 node->left = left_node;
}
Node 	get_right (Node node)
{
 return node->left;
}
void 	set_right (Node node, Node right_node)
{
  node->left = left_node;
}
int 	get_height (Node node)
{
 return node->height;
}
void 	set_height (Node node, int height)
{
  node->height = height;
}
Node 	create_node (int key)
{
 Node node = (Node)malloc(sizeof(struct node));
 node->left =0;
 node->right = 0;
 node->key = key;
 node->height = height;
}
