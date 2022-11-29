#include <stdio.h>

#include <iostream>

//#include "avl.hpp"

#include "SplayTree.hpp"

using namespace std;

int main(int argc, char *argv[]) {

//  Node *root = NULL;

  SplayTree splay;

    clock_t start, diff;

double timeAmount;

    // Capture the start clock

    start = clock();

    for (int i = 1; i < 10000; i += 1) {

        //function to test

        //AVL Insert

  //      root = deleteNode(root, i);

        splay.deleteNode(i);

        // Capture the clock and subtract the start to get the total time elapsed.

diff = clock() - start;

// Convert clock_t into seconds as a floating point number.

timeAmount = diff * 1.0 / CLOCKS_PER_SEC;

// Print out first the size (i) and then the elapsed time.

std::cout << i << " " << timeAmount << "\n";

// We flush to ensure the timings is printed out.

std::cout << std::flush;

    }

return 0;

}
