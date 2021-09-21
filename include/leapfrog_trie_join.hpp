// #ifndef LEAPFROG_TRIE_JOIN_H
// #define LEAPFROG_TRIE_JOIN_H

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// class LTJ{
    
//     vector<*Iterator> iterators;
//     bool at_end = false;
//     uint64_t p = 0;
//     uint64_t xp,x;
//     uint64_t k = iterators.size();
//     uint64_t key;

//     void leapfrog_init(){
//         for(auto it:iterators){
//             if(it.atEnd()) at_end = true;
//         }
//         if(!at_end){
//             sort(iterators.begin(), iterators.end());
//             leapfrog_search();
//         }   
//     }

//     void leapfrog_search(){
//         xp = iterators[(p-1) % k].key();
//         while(true){
//             x = iterators[p].key();
//             if(x==xp){
//                 key = x;
//                 return;
//             }
//             else{
//                 iterators[p].seek(xp);
//                 if(iterators[p].atEnd()){
//                     at_end = true;
//                     return;
//                 }
//                 else{
//                     xp = iter[p].key();
//                     p = (p + 1) % k; 
//                 }
//             }
//         }
//     }

//     void leapfrog_next(){
//         iterators[p].next();
//         if(iter[p].atEnd()) at_end = true;
//         else{
//             p = (p+1)%k;
//             leapfrog_search();
//         }
//     }

//     void leapfrog_seek(uint64_t seekKey){
//         iterators[p].seek(seekKey);
//         if(iterators[p].atEnd()) at_end = true;
//         else{
//             p = (p+1)%k;
//             leapfrog_search();
//         }
//     }

// };

// #endif


// /*
// * Iterator debe ser ordenable en base a la key en la que están parados
// */

