#include <iostream>
#include <unordered_map>

struct Node {
    char data;
    bool isTerminal;
    std::unordered_map<char, Node*> children;

    Node(char ch) {
        this->data = ch;
        this->isTerminal = false; 
    }
};

struct Trie {
    Node* root;
    Trie() {
        this->root = new Node('\0');
    }
    void insert(std::string str) {
        /**
         * Time: O(length of str)
        */
        Node* temp = this->root;
        for(int i = 0; i < str.size(); i++) { // go over every single char
            if(temp->children.count(str[i]) == 0) {
                // whether curr char is not present as a child of temp node
                Node* newCharNode = new Node(str[i]);
                temp->children[str[i]] = newCharNode;
            }
            temp = temp->children[str[i]];
        }
        // after travelling the whole string
        // temp will point to a node who has the last char
        temp->isTerminal = true;
    }

    bool search(std::string str) {
        /**
         * Time: O(length of string)
        */
        Node* temp = this->root;
        for(int i = 0; i < str.size(); i++) {
            if(not temp->children.count(str[i])) {
                // curr char is not present as a child node in the parent
                return false;
            } else {
                temp = temp->children[str[i]];
            }
        }
        return temp->isTerminal;
    }

    void helper(Node* root, std::string pre, std::string output) {
        if(root == NULL) return;
        if(root->isTerminal) {
            std::cout<<(pre + output)<<"\n";
        }
        for(auto ch : root->children) { // ch ->key:value {{"s": 10k}, {"e": 20k}}
            helper(ch.second, pre, output + ch.first);
        }
    }

    void print_all_strings_with_prefix(std::string pre) {
        // 1. check if the prefix is even present or not
        Node* temp = this->root;
        for(int i = 0; i < pre.size(); i++) {
            if(not temp->children.count(pre[i])) {
                // the curr char of the pre is not present in the trie
                // that means the whole prefix pre is not present in the trie
                std::cout<<"Prefix not present in the trie\n";
                return;
            }
            temp = temp->children[pre[i]];
        }
        // when the loop ends, temp points to the last node of the prefix string pre
        helper(temp, pre, "");
    }
};

int main() {
    Trie t;
    t.insert("sam");
    t.insert("sanket");
    t.insert("sameer");
    t.insert("sarthak");
    t.insert("jagdish");
    t.insert("jashn");

    // std::cout<<t.search("sam")<<"\n";
    // std::cout<<t.search("jd")<<"\n";
    // std::cout<<t.search("sanket")<<"\n";
    // std::cout<<t.search("jashnn")<<"\n";
    t.print_all_strings_with_prefix("san");
    return 0;
}