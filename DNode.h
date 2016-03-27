/**********************************************************************************
	This is the DNode template class. It is to be used in a double linked list.

	Author:Connor Abla

************************************************************************************/


#ifndef DNODE_H
#define DNODE_H
#include <cstdlib>
#include <string>
#include <iostream>
#include <iterator>

template <class T>
class DNode
{
	public:
		DNode(T startingData = T(), DNode<T>* prevLink = NULL, DNode<T>* nextLink = NULL)
			{Data = startingData; previous = prevLink; next = nextLink;
			}
		void setData(T item)
			{Data = item;}

		void setNext(DNode<T> *l)
			{next = l;}
		void setPrevious(DNode<T> *l)
			{previous = l;}

		DNode<T>* getPrevious() {return previous;}
		DNode<T>* getNext() {return next;}

		T getData()
			{return Data;}

	private:
		DNode<T> *previous, *next;
		T Data;
};

#endif