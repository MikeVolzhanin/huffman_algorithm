#pragma once

#include "defines.h"
#include "priority_queue.h"
#include "nodes.h"

node* huffmanTree(priority_queue* q, int len);

void trip(node* tree, Alphabet* abc, int size);