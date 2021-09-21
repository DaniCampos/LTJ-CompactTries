#ifndef ITERATOR_H
#define ITERATOR_H

#include <iostream>

using namespace std;

class Iterator{
    private:

    public:
        Iterator();
        ~Iterator();
        virtual bool atEnd() = 0;
        virtual uint64_t key() = 0;
        virtual void seek(uint64_t seekKey) = 0;
        virtual void next() = 0;
        bool operator < (Iterator& it) {
            return (key() < it.key());
        }


        /*
        bool operator < (const MyStruct& str) const
        {
            return (key < str.key);
        }
        */
};
#endif

