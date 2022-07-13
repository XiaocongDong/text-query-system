# Query Program Design
## Query Program Interface Classes and Operations
### TextQuery
Class that reads a given file and builds a lookup map. This class has a query operation that takes a string argument and return a QueryResult representing the lines on which that string appears.
### QueryResult
Class that holds the results of a query operation.
### Query
Interface class that points to an object of a type derived from Query_base.
### Query q(s)
Binds the Query q to a new WordQuery holding the string s
### q1 & q2
Returns a Query bound to a new AndQuery object holding q1 and q2
### q1 | q2
Returns a Query bound to a new OrQuery object holding q1 or q2
### ~q
Returns a Query bound to a new NotQuery object holding q

## Query Program Implementation Classes
### Query_base
Abstract base class for the query class
### WordQuery
Class derived from Query_base that looks for a given word
### NotQuery
Class derived from Query_base that represents the set of lines in which its Query operand does not appear
### BinaryQuery
Abstract base class derived from Query_base that represents queries with two Query operands
### OrQuery
Class derived from BinaryQuery that returns the union of the line numbers in which its two operands appear
### AndQuery
Class derived from BinaryQuery that returns the intersection of the line numbers in which its two operands appear

