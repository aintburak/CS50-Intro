
# Week 7 - SQL: CS50

## Overview

Welcome to Week 7 of CS50! This week, we dive into SQL (Structured Query Language), a powerful tool for managing and manipulating relational databases. Understanding SQL is crucial for efficiently handling data in various applications, from web development to data analysis.

## Learning Objectives

By the end of this week, you should be able to:

1. Understand the basics of relational databases and SQL.
2. Perform common SQL operations such as selecting, inserting, updating, and deleting data.
3. Use advanced SQL features like joins, group by, and having clauses.
4. Apply SQL to solve real-world problems.

## Lecture Notes

### Introduction to SQL

- **Relational Databases**: Organized collections of data with predefined relationships.
- **SQL**: A standard language for interacting with relational databases.

### Basic SQL Commands

- **SELECT**: Retrieve data from a database.
  ```sql
  SELECT column1, column2 FROM table_name;
  ```
- **INSERT**: Add new data to a database.
  ```sql
  INSERT INTO table_name (column1, column2) VALUES (value1, value2);
  ```
- **UPDATE**: Modify existing data.
  ```sql
  UPDATE table_name SET column1 = value1 WHERE condition;
  ```
- **DELETE**: Remove data from a database.
  ```sql
  DELETE FROM table_name WHERE condition;
  ```

### Advanced SQL Concepts

- **Joins**: Combine rows from two or more tables.
  - **INNER JOIN**: Returns records with matching values in both tables.
    ```sql
    SELECT columns FROM table1 INNER JOIN table2 ON table1.column = table2.column;
    ```
  - **LEFT JOIN**: Returns all records from the left table and matched records from the right table.
    ```sql
    SELECT columns FROM table1 LEFT JOIN table2 ON table1.column = table2.column;
    ```
- **Grouping and Aggregation**: Summarize data.
  - **GROUP BY**: Group rows sharing a property.
    ```sql
    SELECT column, COUNT(*) FROM table_name GROUP BY column;
    ```
  - **HAVING**: Filter groups based on conditions.
    ```sql
    SELECT column, COUNT(*) FROM table_name GROUP BY column HAVING COUNT(*) > 1;
    ```

## Problem Set

### Problem 1: World
Write SQL queries to answer questions about a database of world countries and cities.

### Problem 2: Movies
Work with a database of movies to find specific information using SQL queries.

### Problem 3: Students
Query a database of student data to extract meaningful insights.

### Problem 4: Fiftyville
Investigate a fictional crime by querying a database to find clues.

## Resources

- [CS50 Lecture on SQL](https://cs50.harvard.edu/x/2021/weeks/7/)
- [SQL Tutorial](https://www.w3schools.com/sql/)
- [SQL Cheat Sheet](https://www.sqltutorial.org/sql-cheat-sheet/)

## References

1. Malan, D. J. (n.d.). CS50's Introduction to Computer Science. Retrieved from https://cs50.harvard.edu/x/
2. W3Schools. (n.d.). SQL Tutorial. Retrieved from https://www.w3schools.com/sql/
3. SQL Tutorial. (n.d.). SQL Cheat Sheet. Retrieved from https://www.sqltutorial.org/sql-cheat-sheet/

## Tips

- Practice writing SQL queries in an interactive environment like [SQLite Online](https://sqliteonline.com/).
- Break down complex queries into smaller parts to understand and debug them.
- Use comments to document your SQL code for better readability.


