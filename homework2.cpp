/*
 Name: Girwan Dhakal
 Email: gdhakal@crimson.ua.edu
 Course Section: Fall 2023 CS 201
 Homework #:2
 To Compile: g++ homework2.cpp
 To Run: .\a.exe < input.txt > output.txt
*/

#include<iostream>
#include<vector>
#include<regex>
#include<map> 
#include<algorithm>
#include<chrono>


using namespace std;

int main(int argc, char* argv[])
{
    // auto start = chrono::system_clock::now();
    std::string text;
    map<string,int> tokens; 
    vector<pair<string,int>> items;
    const std::regex delim("\\s+"); 
    int wordCount = 0; // count of words

    while (std::cin >> text) {
        auto begin = std::sregex_token_iterator(text.begin(), text.end(), delim, -1);
        auto end = std::sregex_token_iterator();
        for (std::sregex_token_iterator word = begin; word != end; word++) {
            tokens[*word]++; // put the parsed word into the map, the word is used as key
            wordCount++; // increment count
        }
    }
    for(auto start = tokens.begin(); start != tokens.end(); start++)
    {
        items.push_back(*start);//put the contents of map into vector
    }

    sort(items.begin(), items.end(), [](pair<string, int> a, pair<string, int> b){
        if(a.second > b.second) // lambda expression to sort and break a tie
        {
            return true;
        }
        else if(a.second == b.second) // if the number of words is the same
        {
            return (a.first < b.first); // sorts alphabetically
        }
        return false;
    });
    for(auto x:items)
    {
        cout << x.first << ": " << x.second << endl; // outputs the contents of the sorted array
    }
    // auto end = chrono::system_clock::now();
    // auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    // cout << "Time Taken: " << duration.count() << endl;
    // cout << "Number of words: " << wordCount << endl;
}
