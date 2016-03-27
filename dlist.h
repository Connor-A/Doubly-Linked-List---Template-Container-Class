/***************************************************************************************
	This is the header file for the dlist class. It allows the user to control a double linked list

	Author: Connor Abla
****************************************************************************************/


#ifndef DLIST_H
#define DLIST_H


#include "DNode.h"
#include "iterator.h"

template <class T> 
class DNode;
template <class T>
class List_Iterator;

template <class T>
class dlist
{
	public:
		dlist()
		{
			head = NULL;
			tail = NULL;

			count = 0;
		}

		~dlist();
		dlist(const dlist<T> &other);
		dlist<T>& operator = (const dlist<T> &other);

		typedef List_Iterator<T> iterator;
		typedef List_Iterator<T> r_iterator;


		void front_insert(T item);
		void rear_insert(T item);
		void front_remove();
		void rear_remove();

		void insert_before(iterator it, T item);
		void insert_after(iterator it, T item);
		void remove(iterator it);
		
		
		iterator begin() 
			{return iterator(head);}
		iterator end()
			{return iterator(NULL);}

		iterator r_begin()
			{return iterator(tail);}
		iterator r_end()
			{return iterator(head -> getPrevious());}


		int size();
	

	private:
		DNode<T> *head, *tail;

		int count;
};

#include "dlist.template"

#endif