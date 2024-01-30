<div align="center">
    <h1>In this repository, We will learn all About data structure</h1> 
    <i>If you like it then hit the star btn and follow my page, By the way </i></br> 
    <span">I'm Ritik! 👋</span></br>
    <h2>Social links</h2>

<div align="center">

[![https://www.linkedin.com/in/kr-ritik](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/)

</div>
</div>

<div align="center">
    <h2>Email</h2>
    kr.ritik1510@gmail.com
</div>

<br />

---

<br />

<div align="center">

## Index 

- [LISTS](#lists)
  
</div>

<div>
    <h2>Data Structure</h2>
    <p>
        Data structures are building blocks of a program. They are like pillars of a huge structure. If a program is built using improper data structures, then the program may not work as expected always. It is very much important to use right data structures for a program.
    </p>
</div>

<div>
    <h2>Time Complexity-</h2>
    <p> 
        When the software is developed, it is very important to consider space and time complexities as essential parameters that are to be met by it. Software may be developed, but, it may take a longer time to produce output and hence, it may not be used. The same is the case with respect to space. A program should not occupy more than a specific amount of memory. Both these parameters ar technically termed as Time and Space complexities. A program/algorithm is analyse for its space and time complexities. 
    </p>
</div>

<div>
    <h2>Arrays-</h2>
    <p>
        The most common basic data structure is Array. Arrays can store the elements which are of same data type. Arrays can be single or multi-dimensional. The representations of arrays inside the memory are not uniform.
    </p> 
</div>

<div>
    <h2>Lists-</h2>
    <p>
        The other data structure is lists. A list can be represented using Arrays or Pointers. if pointers are used, then, the operations on the list such as insertion, deletion etc. will become easy. Also, the time complexity of such programs is less when compared to programs which represent lists using arrays. 
    </p> 
</div>

<div>
    <h3>Types of lists</h3>
</div>
<div align="center">

| No. | Types | 
| ----- | ----- |
| 1> | Linked List/Singly Linked List </p> |
| 2> | Doubly Linked List </p> |
| 3> | Circular Linked List </p> |
| 4> | Doubly circular Linked List </p> |

</div>

<p>
    Different types of lists are exists. Data structures enable a programmer to structure a program in such a way that the data are represented in the same way as they are represented in real life. <br>
</p>

<div>
    <h2>Stack-</h2>
    <p>
        A Stack is a last-in-first-out data structure. It means tha the latest element which entered the Stack will be the first to leave. A Stack can be represented using Arrays or Linked lists.
    </p>
</div>

<div>
    <h2>Queue-</h2>
    <p>
        A queue is a first-in-first-out data structure. It means that the first element that entered th queue will be the first to leave it. A queue can be implemented using arrays or pointers However, a lot of flexibility is associated with a queue implemented using pointers. Also the topic of Dequeue is
    </p>
</div>

<div>
    <h2>Trees-</h2>
    <p> 
        The most important data structure is Tree. A Tree  having a large number of applications in real life. Both Binary Trees and Trees are discussed.<br>
    </p>
</div>

<div>
    <h2>Types of Binary Trees-</h2>
</div>

<div align="center">

| No. | Types |
| ------ | ------ |
| 1> | Binary search Trees |
| 2> | AVL Trees |
| 3> | B-Trees |

</div>

<div>
    <h2>Graphs-</h2>
    </p> 
        Basically A graph is a data structure that consists of a set of nodes (or vertices) and a set of edges connecting these nodes. Graphs are versatile structures that can model a wide range of relationships and connections between entities.
    <p>
</div>

<div>
    <h2>Searching-</h2>
    <p>
        The most frequent operation that is performed in most of the software is Searching.<br> i.e. A search algorithm is an algorithm which accepts a argument ‘a’ and tries to find the corresponding data where the match of ‘a occurs in a file or in a table.
    </p>
</div>

<div>
    <h2>Sorting-</h2>
    </p> 
        Another frequent operation that is performed in most of the software is Sorting. Different sorting algorithms such as Quick sort, Heap Sort Bubble Sort and Merge Sort. 
    </p>
</div>

<div>
    <h2>ABOUT course-</h2>
    <p>
        In this course, the topic of File structures is also discussed. Different types of File organizations are discussed. Finally, some of the advanced data structures such as Splay Trees, Red-black Trees and AA Trees are also discussed in this course.
    </p>
</div>

TODO

## `Inheritance:` 
## `Polymorphism:`

## `Constructor:`
## `Destructor:`

***

# `LISTS`
---

<div align="center">

<b>Index</b>

| No. | Topic                   |
| --- | ----------------------- |
| 1   | [Linked List](#Linked-List) |
| 2   | [Doubly Linked List](#doubly-linked-list) |
| 3   | [Circular Linked List](#circular-linked-list) |
| 4   | [Doubly Circular Linked List](#doubly-circular-linked-list) |

---

</div>

### Linked List-

<div>
    <P>
        The linked list is a chain of structures in which each structure consists of data as well as pointer, which
        stores the address (link) of the next logical structure in the list. it is also called "singly linked list".
    </P>
    <div align="center">
        <img src="images/singly-linkedlist.png" alt="singly-linkedlist">
    </div>
    <p><b>--do not confuse in between linked list and singly linked list--</b></p>

</div>

<div align="center">

**[⬆ Back to Lists](#lists)**

</div>

### `Doubly linked list-` 

<div>
    <p>
        In a dingly linked list, each element contains a pointer to the next element. We have seen this before. In
        single linked list, traversing is possible only in one direction. Sometimes, we have to traverse the list in
        both directions to improve performance of algorithms. To enable this, we require links in both the directions,
        that is, the element should have pointers to the right element as well as to its left element. This type of list
        is called doubly linked list.
    </p>
    <div align="center">
        <img src="images/doubly linked list.png">
    </div>
</div>

<div align="center">

**[⬆ Back to Lists](#lists)**

</div>

### `circular linked list-`

<div>
    <p> 
        As we seen before in linked list, the last node of singly linked list contain the null address/link. But in case of <b>'circular linked list' </b> the last element points the frist element.<br> i.e. 'a linked list in which the last element points to the first element is called circular linked list. The chains do not indicate first or last element; last element does not contain the null pointer. The external pointer provides a reference to starting element'.
    </p>

`possible opertaion on circular linked list :-`

| No. | Types |
| ----- | ----- |
| 1> | Insertion, |
| 2> | deletion, and |
| 3> | traversing |

</div>

<div align="center">

**[⬆ Back to Lists](#lists)**

</div>

### `doubly circular linked list-`

<div>
    <p>
        A doubly circular linked list have both the features of <b>circular linked list </b>and<b>doubly linked list </b><br /> i.e. a doubly circular linked list is a type of linked list in which each node in the list contains data andtwo pointers, similar to a doubly linked list. the key difference is that in doubly circular linked list, the last node in the list points back to the first node, creating a circula structure. additionally, the first node's previous pointer points to the last node, completing the circular link.<br>
    </p>
    <div align="center">
        <img src="images/doubly-circular-linked -list.jpg" alt="doubly-circular-linked">
    </div>
</div>

<div align="center">

**[⬆ Back to Index](#index)**

</div>



<!-- ------------------------------end------------------------------------------- -->

#    `Trees`

## Why do we use tree data structures?
* Have you ever thought how does the operating system manage our files? Why do we have a hierarchical file system? How do files get saved and deleted under hierarchical directories? Well, we have answers to all these questions in this section through a hierarchical data structure called Trees! Although most general form of a tree can be defined as an acyclic graph. 
 
## what do you mean by Tree in computer science ?

* Tree is a data structure which allows you to associate a parent-child relationship between various pieces of data and thus allows us to arrange our records, data and files in a hierarchical fashion. Consider a Tree representing your family structure. Let us say that we start with your grand parent; then come to your parent and finally, you and your brothers and sisters.
  
* i.e. A tree is a hierarchical data structure that consists of nodes connected by edges. It is a type of acyclic graph where each node has a parent-child relationship with other nodes. The topmost node in a tree is called the "root," and each node in the tree has zero or more child nodes. Nodes with no children are called "leaves.".

* Basically it does not contain any cycles (circuits, or closed paths), which would imply the existence of more than one path between 2 nodes.

# `Types Of Trees`
### -Types of tree in DSA on the basis of number of childrens.

| No. | Types |
| --- | --- |
| 1. | Binary Tree |
| 2. | Ternary Tree |
| 3. | N-ary Tree |

### `1. Binary Tree: ` 
* A binary tree is a special tree where each non-leaf node can have atmost two child
nodes, we typically name them the left and right child. 

### -Types of tree in DSA on the basis of number of nodes.

| No. | Types |
| --- | --- |
| 1. | Binary Search Tree |
| 2. | AVL tree |
| 3. | Red-Black Tree |
| 4. | B-Tree |
| 5. | B+ Tree |
| 6. | Tri Tree |
| 7. | Segment Tree |
| 8. | Quadtree Tree |
| 9. | Octree Tree |

# `Stack`


* One of the most usefull concepts in computer science is ` STACK `, Basically the stack is linear data structure in which items may be inserted or removed only at one end called the top of the stack.
* the concept `STACK` may be seen in our daily life, for example : 
    * `Stack of dishes`, in this example we can observe easily the any dish may be added or removed only from the top of the dish's stack.
    * `Browser history`, in this example the webpage you are visited is pushed onto the stack and the user can navigate back by popping the stack. This is essential for the "Back" button functionality.
    * `Memory management`, in most of the `OS` operating system, stacks are used for managing memory. Each process typically has its own stack to store local variables and function call information. The stack grows and shrinks as functions are called and return.
    * `Expression Parsing and Syntax Checking`, Stacks are used in parsing and syntax checking during the compilation of programming code. They help to keep track of nested structures like parentheses, braces, and brackets.
      * `For the parentheses`, stacks help in checking the proper nesting of brackets ([ ]) and braces ({ }). Each opening bracket or brace is pushed onto the stack, and the corresponding closing symbol should match the top of the stack when encountered.
    * `Operator Precedence and Associativity`, Stacks are useful for maintaining the correct order of operators based on their precedence and associativity. When parsing an expression, operators are pushed onto the stack. Before pushing a new operator, the stack is checked to ensure that the top operator has lower precedence or the same precedence with left-to-right associativity.
  
    * `Checking for Well-Formed Expressions`, Stacks are used for ensuring that expressions are well-formed and follow the rules of the programming language. For example, each opening symbol (parenthesis, bracket, brace) should have a corresponding closing symbol, and operators should be used with the correct number of operands.

    * `Infix to Postfix/Prefix Conversion`

    * Example of expression :- Consider the infix expression `((a + b) * c) - d`
      * `(a + b)` is enclosed in parentheses, so it's pushed onto the stack. 
      * `*` is the next operator, and its precedence is lower than the top of the stack `(+)`. The stack remains unchanged.
      * `c` is encountered, and the stack now contains `((a + b)`.
      * `)` is encountered, so `(a + b)` is popped from the stack.
      * `*` is pushed onto the stack, and `c` is added, resulting in `((a + b) * c)`.
      * `-` is encountered, and it has lower precedence than `*`, so the stack remains unchanged.
      * `d`is encountered, and the stack now contains `((a + b) * c) - `. 
      * This process continues, ensuring that the expression is well-formed and adheres to the correct syntax.
     
## `Implemntation of stack` 
  * In **[`C`](stack.c)**
  * In **[`C++`](#lists)**

