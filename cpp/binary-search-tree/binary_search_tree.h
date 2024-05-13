// #if !defined(BINARY_SEARCH_TREE_H)
// #define BINARY_SEARCH_TREE_H
// #include <memory>
// #include <vector>
// #include <stdexcept>

// namespace binary_search_tree {

//     template<typename T>
//     struct Node {
//         T data;
//         std::unique_ptr<Node> left;
//         std::unique_ptr<Node> right;

//         Node(const T& data) : data(data), left(nullptr), right(nullptr) {}
//     };

//     template<typename T>
//     class binary_tree {
//     private:
//         std::unique_ptr<Node<T>> root;

//         void insert(std::unique_ptr<Node<T>>& node, const T& data) {
//             if (!node) {
//                 node = std::make_unique<Node<T>>(data);
//             } else if (data < node->data) {
//                 insert(node->left, data);
//             } else {
//                 insert(node->right, data);
//             }
//         }

//     public:
//         binary_tree() : root(nullptr) {}

//         void insert(const T& data) {
//             insert(root, data);
//         }

//         Node<T>* get_root() const {
//             return root.get();
//         }
//     };

//     template<typename T>
//     using tree_ptr = typename std::unique_ptr<binary_tree<T>>;

//     template<typename T>
//     static tree_ptr<T> make_tree(const std::vector<T>& data)
//     {
//         auto tree = std::make_unique<binary_search_tree::binary_tree<T>>();
//         for (const auto& item : data) {
//             tree->insert(item);
//         }
//         return tree;
//     }

// }  // namespace binary_search_tree

// #endif // BINARY_SEARCH_TREE_H


#if !defined(BINARY_SEARCH_TREE_H)
#define BINARY_SEARCH_TREE_H

#include <list>
#include <memory>

namespace binary_search_tree {

template<typename T>
class binary_tree;

// Iterator for `binary_tree`.
// This is an input iterator only.
template<typename T>
class binary_tree_iterator {
  public:
    // default constructor is `end` iterator
    binary_tree_iterator() noexcept {}

    binary_tree_iterator(const binary_tree<T>* tree) {
      go_to_first_element(tree);
    }

    binary_tree_iterator& operator++() {
      auto back = list.back(); // copy current pointer as we will pop it

       // We can always pop the current value as the iterator only goes forward.
       // This simplify the case where we have no right branch and would need to
       // go up until a lesser value is met. Here we can just pop the value.
      list.pop_back();

      if( back->right() ) {
        go_to_first_element(back->right().get());
      }
      return *this;
    }

    const T& operator*() const {
      return list.back()->data();
    }

    bool operator==(const binary_tree_iterator<T>& other) {
      return list == other.list;
    }

    bool operator!=(const binary_tree_iterator<T>& other) {
      return list != other.list;
    }

  private:
    std::list<const binary_tree<T>*> list;

    void go_to_first_element(const binary_tree<T>* tree) {
      for(; tree; tree = tree->left().get()) {
        list.push_back(tree);
      }
    }
};

// `binary_tree` implementation
template<typename T>
class binary_tree {
  public:
    using const_iterator = binary_tree_iterator<T>;

    explicit binary_tree(const T& data) noexcept : value(data) {}
    explicit binary_tree(T&& data) noexcept : value(std::move(data)) {}

    template<typename U>
    void insert(U&& data) {
      binary_tree<T>* t = this;

      while(true) {
        std::unique_ptr<binary_tree<T>>& subtree = (data <= t->value ? t->subleft : t->subright);

        if( subtree ) {
          t = subtree.get();
        } else {
          subtree = std::make_unique<binary_tree<T>>(std::forward<U>(data));
          break;
        }
      }
    }

    const T& data() const noexcept {
      return value;
    }

    const std::unique_ptr<binary_tree<T>>& left() const noexcept {
      return subleft;
    }

    const std::unique_ptr<binary_tree<T>>& right() const noexcept {
      return subright;
    }

    const_iterator begin() const {
      return const_iterator(this);
    }

    const_iterator end() const noexcept {
      return const_iterator{};
    }

  private:
    T value;
    std::unique_ptr<binary_tree<T>> subleft;
    std::unique_ptr<binary_tree<T>> subright;
};

}  // namespace binary_search_tree

#endif // BINARY_SEARCH_TREE_H