#ifndef ALGO_H
#define ALGO_H

#include <vector>
#include <list>

/**
 * Sorts the elements from the input container in-place.
 *
 * By default, the container is sorted in ascending order, unless the reverse parameter reverse
 * is set to true.
 *
 * The elements are compared using the cmp function.
 * cmp(A, B) should return true if A < B.
 */
template<class T>
void sort(std::vector<T>& input, bool (*cmp)(const T&, const T&), const bool reverse=false);

/**
 * Sorts the elements from the input container in-place.
 *
 * By default, the container is sorted in ascending order, unless the reverse parameter reverse
 * is set to true.
 *
 * The elements are compared using the cmp function.
 * cmp(A, B) should return true if A < B.
 */
template<class T>
void sort(std::list<T>& input, bool (*cmp)(const T&, const T&), const bool reverse=false);

#endif