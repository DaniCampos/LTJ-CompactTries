#include <iostream>
#include <fstream>
#include "table_indexing.hpp"
#include "index.hpp"
#include "iterator.hpp"

using namespace std::chrono;
using timer = std::chrono::high_resolution_clock;
using namespace std;

int main(int argc, char **argv)
{
    try{
        if(argc <= 1){
            cout<<"No extra command line argument passed other that program name"<<endl;
            return 0;
        }
        string file_name;
        file_name = argv[1];
        /*
            Aqui llamar a table indexer que luego retornará un index
            Se podrían indexar varias tablas al mismo tiempo
            todos los archivos que acompañen a ./build_index
        */

       TableIndexer ti = TableIndexer();

        Index ind = ti.indexNewTable(file_name);
        ind.save();
    }
    catch(const char* msg)
    {
        cerr<<msg<<endl;
    }
    
}
