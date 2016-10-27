#ifndef _QUADTREE
#define _QUADTREE

#include <vector>
#include "point.h"


template <class T>
class QuadTree
{
    public:
         // Initialize QuadTree to empty state, representing the specified region.
        QuadTree(long xmin, long xMax, long yMin, long yMax);
        
        // Pre: elem != null
        // Post: If elem lies within the tree's region, and elem is not already
        // present in the tree, elem has been inserted into the tree.
        // Return true iff elem is inserted into the tree. 
        bool insert(T elem);


        // Pre: elem != null
        // Returns reference to an element x within the tree such that
        // elem.equals(x)is true, provided such a matching element occurs within
        // the tree; returns null otherwise.
        T find(T elem);

        // Pre: elem != null
        // Post: If elem lies in the tree's region, and a matching element occurs
        // in the tree, then that element has been removed.
        // Returns true iff a matching element has been removed from the tree. 
        bool remove(T elem);


        // Pre: xLo, xHi, yLo and yHi define a rectangular region
        // Returns a collection of (references to) all elements x such that x is
        //in the tree and x lies at coordinates within the defined rectangular
        // region, including the boundary of the region.
        std::vector<T> find(long xLo, long xHi, long yLo, long yHi);

    private:
        Point root;
        long xMin;
        long xMax;
        long yMin;
        long yMax;
};

#endif
