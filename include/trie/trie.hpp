#ifndef TRIE_TRIE_HPP_
#define TRIE_TRIE_HPP_

#include "trie/base_trie.hpp"
#include "trie/node.hpp"

namespace eda {

namespace trie {

template <typename T>
class Trie : public BaseTrie<T, Node<T> > { };

} // namespace trie 

} // namespace eda

#endif // TRIE_TRIE_HPP_
