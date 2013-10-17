//
//  main.cpp
//  a*
//
//  Created by Fateev on 17.10.13.
//  Copyright (c) 2013 Fateev. All rights reserved.
//

#include <iostream>
#include <list>
#include <vector>
#include <memory>
#include <unordered_set>

const std::vector< std::vector<int> > map = {
    { 0,  0,  0,  0,  0,  0,  0},
    { 0,  0,  0,  1,  0,  0,  0},
    { 0,  0,  0,  1,  0,  0,  0},
    { 0,  0,  0,  1,  0,  0,  0},
    { 0,  0,  0,  0,  0,  0,  0},
};


std::ostream& operator<< (std::ostream& stream, const std::vector< std::vector<int> >& vec) {
    auto size1 = vec.size();
    auto size2 = vec.at(0).size();
    for (int row = 0; row < size1; ++row) {
        for (int col = 0; col < size2; ++col) {
            stream << vec.at(row).at(col) << " ";
        }
        stream << std::endl;
    }

    return stream;
}

struct Coord {
    int row;
    int col;
};

class Node {
public:
    Node* parendNode;
    Coord coord;
    unsigned g;
    unsigned h;
    unsigned f;
};


class AStarPathFinder {
public:
    // cross
    static const std::vector<Coord> lookupCoords;

    std::list<Node*> find(Coord start, Coord end) {
        std::list<Node*> path;

        auto endPoint = std::shared_ptr<Node>(new Node());
        endPoint->coord = end;

        auto startPoint = std::shared_ptr<Node>(new Node());
        startPoint->coord = start;

        opened.insert(startPoint);

        while (opened.size()) {

        }


        return path;
    }
protected:
    std::unordered_set< std::shared_ptr<Node> > opened;
    std::unordered_set< std::shared_ptr<Node> > closed;
};

const std::vector<Coord> AStarPathFinder::lookupCoords = {
        {0, 1},
        {1, 0},
        {0, -1},
        {-1, 0},
 };

int main(int argc, const char * argv[])
{

    std::cout << map;
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

