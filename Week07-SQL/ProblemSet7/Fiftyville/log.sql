.tables

.schema crime_scene_reports

.schema bakery_security_logs

.schema interviews




-- To find crime scene report on  July 28, 2023 and that it took place on Humphrey Street.

/*

SELECT * FROM crime_scene_reports
WHERE day = 28 AND month = 07 AND street = 'Humphrey Street';


-- output of the query:

+-----+------+-------+-----+-----------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| id  | year | month | day |     street      |                                                                                                       description                                                                                                        |
+-----+------+-------+-----+-----------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| 295 | 2023 | 7     | 28  | Humphrey Street | Theft of the CS50 duck took place at 10:15am at the Humphrey Street bakery. Interviews were conducted today with three witnesses who were present at the time – each of their interview transcripts mentions the bakery. |
| 297 | 2023 | 7     | 28  | Humphrey Street | Littering took place at 16:36. No known witnesses.                                                                                                                                                                       |
+-----+------+-------+-----+-----------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
*/



-- Check Interviews

SELECT * FROM interviews AS i
WHERE year = 2023 AND day = 28 AND month = 07;

-- Here are notable moments from the interview results
/*
+-----+---------+------+-------+-----+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| id  |  name   | year | month | day |                                                                                                                                                     transcript                                                                                                                                                      |
+-----+---------+------+-------+-----+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| 161 | Ruth    | 2023 | 7     | 28  | Sometime within ten minutes of the theft, I saw the thief get into a car in the bakery parking lot and drive away. If you have security footage from the bakery parking lot, you might want to look for cars that left the parking lot in that time frame.                                                          |
| 162 | Eugene  | 2023 | 7     | 28  | I don't know the thief's name, but it was someone I recognized. Earlier this morning, before I arrived at Emma's bakery, I was walking by the ATM on Leggett Street and saw the thief there withdrawing some money.

*/





/*
-- To check interviews with 3 withnesses

SELECT * FROM bakery_security_logs AS bs
WHERE day = 28 AND month = 07 AND hour = 10;

*/








/*
SELECT * FROM airports;
*/


/*

SELECT * FROM atm_transactions;
*/


/*

SELECT * FROM bakery_security_logs;
*/


/*

SELECT * FROM bank_accounts;
*/


/*

SELECT * FROM phone_calls;
*/


/*

SELECT * FROM flights;
*/



/*

SELECT * FROM interviews;
*/


/*

SELECT * FROM passengers;
*/


/*

SELECT * FROM  people;

*/


/*

SELECT * FROM crime_scene_reports;
*/
