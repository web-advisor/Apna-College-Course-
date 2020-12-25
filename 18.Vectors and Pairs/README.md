# Vectors And Pairs 
## Vectors
*Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes there may be a need of extending the array. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.*

### Syntax
vector < type > variable (elements)

### Some Functions :: 
- begin() – Returns an iterator pointing to the first element in the vector
- end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
- rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
- rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
- cbegin() – Returns a constant iterator pointing to the first element in the vector.
- cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
- crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
- crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
- size() – Returns the number of elements in the vector.
- max_size() – Returns the maximum number of elements that the vector can hold.
- capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
- resize(n) – Resizes the container so that it contains ‘n’ elements.
- empty() – Returns whether the container is empty.
- shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
- reserve() – Requests that the vector capacity be at least enough to contain n elements.
- push_back() – It push the elements into a vector from the back
- assign() – It assigns new value to the vector elements by replacing old ones
- pop_back() – It is used to pop or remove elements from a vector from the back.
- insert() – It inserts new elements before the element at the specified position
- erase() – It is used to remove elements from a container from the specified position or range.
- swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
- clear() – It is used to remove all the elements of the vector container
- emplace() – It extends the container by inserting new element at position
- emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector

## Pairs 
*The pair container is a simple container defined in \<utility\> header consisting of two data elements or objects.* 

*The first element is referenced as ‘first’ and the second element as ‘second’ and the order is fixed (first, second).
Pair is used to combine together two values which may be different in type. Pair provides a way to store two heterogeneous objects as a single unit.
Pair can be assigned, copied and compared. The array of objects allocated in a map or hash_map are of type ‘pair’ by default in which all the ‘first’ elements are unique keys associated with their ‘second’ value objects.
To access the elements, we use variable name followed by dot operator followed by the keyword first or second.*

### Syntax
pair (data_type1, data_type2) Pair_name

## [Link for Notes](https://drive.google.com/file/d/1nUEkGmqG0KLMLzsDN_JDwXj9ZPFT4d74/view)

