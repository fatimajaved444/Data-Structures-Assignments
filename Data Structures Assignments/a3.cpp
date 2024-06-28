#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

class HashTable {
private:
    static const int INITIAL_CAPACITY = 11;
    static constexpr double THRESHOLD = 0.75;
    int capacity;
    int size;
    pair<string, int>* table;

    int hash(const string& key)
    {
        std::hash<std::string> hash_fn;
        return hash_fn(key) % capacity;
    }

    void resize() {
        capacity *= 2;
        auto new_table = new pair<string, int>[capacity]();
        for (int i = 0; i < capacity / 2; ++i)
        {
            if (!table[i].first.empty())
            {
                int new_hash = hash(table[i].first);
                while (!new_table[new_hash].first.empty())
                {
                    new_hash = (new_hash + 1) % capacity;
                }
                new_table[new_hash] = table[i];
            }
        }
        delete[] table;
        table = new_table;
    }

public:
    HashTable()
    {
        capacity = INITIAL_CAPACITY;
        size = 0;
        table = new pair<string, int>[capacity]();
    }


    ~HashTable()
    {
        delete[] table;
    }

    void put(const string& key, int value)
    {
        if ((double)size / capacity >= THRESHOLD)
        {
            resize();
        }
        int hash_value = hash(key);
        while (!table[hash_value].first.empty())
        {
            if (table[hash_value].first == key)
            {
                table[hash_value].second = value;
                return;
            }
            hash_value = (hash_value + 1) % capacity;
        }
        table[hash_value] = make_pair(key, value);
        size++;
    }

    int get(const string& key)
    {
        int hash_value = hash(key);
        while (!table[hash_value].first.empty())
        {
            if (table[hash_value].first == key)
            {
                return table[hash_value].second;
            }
            hash_value = (hash_value + 1) % capacity;
        }
        return 0;
    }

    bool contains(const string& key)
    {
        int hash_value = hash(key);
        while (!table[hash_value].first.empty())
        {
            if (table[hash_value].first == key)
            {
                return true;
            }
            hash_value = (hash_value + 1) % capacity;
        }
        return false;
    }

    void remove(const string& key)
    {
        int hash_value = hash(key);
        int original_hash = hash_value;
        while (!table[hash_value].first.empty())
        {
            if (table[hash_value].first == key)
            {
                table[hash_value].first.clear();
                size--;

                hash_value = (hash_value + 1) % capacity;
                while (!table[hash_value].first.empty())
                {
                    int new_hash = hash(table[hash_value].first);
                    if (new_hash != hash_value)
                    {
                        table[original_hash] = table[hash_value];
                        table[hash_value].first.clear();
                        original_hash = hash_value;
                    }
                    hash_value = (hash_value + 1) % capacity;
                }
                return;
            }
            hash_value = (hash_value + 1) % capacity;
        }
    }



    int getSize() {
        return size;
    }
};

void preprocessAndPut(const string& word, HashTable& word_count)
{
    string current_word;
    bool has_apostrophe = false;
    for (char c : word) {
        if (isalnum(c) || c == '_')
        {
            current_word += tolower(c);
            has_apostrophe = false;
        }
        else if (c == '\'')
        {
            if (!current_word.empty() && !has_apostrophe)
            {
                current_word += c;
                has_apostrophe = true;
            }
        }
        else if (!current_word.empty()) {
            word_count.put(current_word, word_count.get(current_word) + 1);
            current_word.clear();
            has_apostrophe = false;
        }
    }
    if (!current_word.empty()) {
        if (current_word.back() == '\'') {
            current_word.pop_back();
        }
        word_count.put(current_word, word_count.get(current_word) + 1);
    }
}

void processTextFile(const string& file_path, HashTable& word_count)
{
    ifstream file(file_path);
    if (!file.is_open())
    {
        cout << "Error: Unable to open file\n";
        return;
    }

    string word;
    while (file >> word)
    {
        preprocessAndPut(word, word_count);
    }

    file.close();
}

int main() {
    string file_path = "file.txt";
    HashTable word_count;
    processTextFile(file_path, word_count);
    cout << "This text contains " << word_count.getSize() << " distinct words.\n";

    string query;
    while (true) {
        cout << "Please enter a word to get its frequency, or hit enter to leave.\n> ";
        getline(cin, query);
        if (query.empty()) {
            break;
        }
        if (!query.empty()) {
            if (query[0] == '-') {
                string word_to_delete = query.substr(1);
                if (word_count.contains(word_to_delete)) {
                    word_count.remove(word_to_delete);
                    cout << "\"" << word_to_delete << "\" has been deleted.\n";
                }
                else {
                    cout << "\"" << word_to_delete << "\" was not found.\n";
                }
            }
            else {
                if (word_count.contains(query)) {
                    cout << "\"" << query << "\" appears " << word_count.get(query) << " times.\n";
                }
                else {
                    cout << "\"" << query << "\" does not appear.\n";
                }
            }
        }
    }

    cout << "Goodbye!\n";
    return 0;
}