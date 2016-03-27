

#include "DNode.h"

#ifndef DITERATOR_H
#define DITERATOR_H

template <class T>
class dlist;

template <class T>
class List_Iterator
{
	public:
		friend class dlist<T>;

		List_Iterator(DNode<T>* NEW = NULL) 
			{current = NEW;}
		
		const T operator *() const 
			{return current -> getData();}


		List_Iterator operator ++() 
		{
			current = current -> getNext(); 
			return *this;
		}

		List_Iterator operator ++(int)
		{
			List_Iterator original(*this);
			current = current -> getNext();
			return original;
		}

		List_Iterator operator --() 
		{
			current = current -> getPrevious(); 
			return *this;
		}

		List_Iterator operator --(int)
		{
			List_Iterator original(*this);
			current = current -> getPrevious();
			return original;
		}

		bool operator == (const List_Iterator other) const {return current == other.current;}
		bool operator != (const List_Iterator other) const {return current != other.current;}

	private:
		DNode<T> *current;

};

#endif