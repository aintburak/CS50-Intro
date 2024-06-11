# CS50 Week 7 Movies SQL Exercise

## Introduction
This project is part of the CS50 course provided by Harvard University, focusing on the application of SQL queries to manipulate and retrieve data from a movies database. This README outlines the structure of the database and provides details on the SQL queries used in this exercise.

## Database Structure
The database consists of several tables which are interconnected to represent various aspects of movie data:

- `movies`: Contains movie titles and the year of release.
- `people`: Lists the names of actors, actresses, and directors.
- `stars`: Represents the association between movies and the actors who star in them.
- `directors`: Represents the association between movies and their directors.
- `ratings`: Contains IMDb rating data for the movies.

## Sample Terminal Output

```
SQLite version 3.40.1 2024-06-11 09:51:47                                                           
Enter ".help" for usage hints.                                                                      
sqlite> .tables                                                                                     
directors  movies     people     ratings    stars                                                   

sqlite> .schema movies                                                                              
CREATE TABLE movies (                                                                               
                    id INTEGER,                                                                     
                    title TEXT NOT NULL,                                                            
                    year NUMERIC,                                                                   
                    PRIMARY KEY(id)                                                                 
                );         

sqlite> SELECT * FROM movies LIMIT 5;                                                               
+-------+-----------------------------+------+                                                      
|  id   |            title            | year |                                                      
+-------+-----------------------------+------+                                                      
| 11801 | Tötet nicht mehr            | 2019 |                                                      
| 13274 | Istoriya grazhdanskoy voyny | 2021 |                                                      
| 15414 | La tierra de los toros      | 2000 |                                                      
| 15724 | Dama de noche               | 1993 |                                                      
| 31458 | El huésped del sevillano    | 1970 |                                                      
+-------+-----------------------------+------+

sqlite> SELECT * FROM people LIMIT 5;                                                               
+----+-----------------+-------+                                                                    
| id |      name       | birth |                                                                    
+----+-----------------+-------+                                                                    
| 1  | Fred Astaire    | 1899  |                                                                    
| 2  | Lauren Bacall   | 1924  |                                                                    
| 3  | Brigitte Bardot | 1934  |                                                                    
| 4  | John Belushi    | 1949  |                                                                    
| 5  | Ingmar Bergman  | 1918  |                                                                    
+----+-----------------+-------+    

sqlite> SELECT * FROM stars LIMIT 5;                                                                
+----------+-----------+                                                                            
| movie_id | person_id |                                                                            
+----------+-----------+                                                                            
| 11801    | 459029    |                                                                            
| 11801    | 681726    |                                                                            
| 11801    | 692612    |                                                                            
| 11801    | 726256    |                                                                            
| 11801    | 776458    |                                                                            
+----------+-----------+ 

sqlite> .quit  
```