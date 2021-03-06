#ifndef TRIE_NODE_HPP_
#define TRIE_NODE_HPP_

#include "trie/base_node.hpp"

namespace eda {

namespace trie {

template <typename T>
class Node : public BaseNode<T, Node<T> > {
public:
	Node(char);
};

} // namespace trie 

} // namespace eda

#include "trie/impl/node.ipp"

#endif // TRIE_NODE_HPP_
