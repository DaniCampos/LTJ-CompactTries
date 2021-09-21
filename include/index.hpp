#ifndef INDEX_H
#define INDEX_H

#include <iostream>

using namespace std;

class Index{
    private:
        uint64_t dim;
        string name;
        vector<string> orders;
        vector<Iterator*> iterators;
    public:
        
        Index(vector<string> orders, vector<Iterator*> compactTries, string file_name){
            orders = orders;
            iterators = compactTries;
            name = file_name;
        }

        /*
            Hay que implementar algo que le permita elegir que iterador ocupará, de momento siempre el primero
        */


       /*
            Hay que implementar un save, que sea como order_1_test
            El índice tendra varios ordenes 
       */
      void save(){
            for(int i=0; i<orders.size(); i++){
                ofstream stream("../data/order" + to_string(i) + name);
                // 1. guardar orden que es
                // 2. guardar trie iterator
            }
          
      }

};
#endif

