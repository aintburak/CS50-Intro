.tables

/*
.schema bakery_security_logs

.schema bank_accounts

.schema atm_transactions
*/




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
/*

SELECT * FROM interviews AS i
WHERE year = 2023 AND day = 28 AND month = 07;

*/
-- Here are notable moments from the interview results
/*
+-----+---------+------+-------+-----+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| id  |  name   | year | month | day |                                                                                                                                                     transcript                                                                                                                                                      |
+-----+---------+------+-------+-----+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| 161 | Ruth    | 2023 | 7     | 28  | Sometime within ten minutes of the theft, I saw the thief get into a car in the bakery parking lot and drive away. If you have security footage from the bakery parking lot, you might want to look for cars that left the parking lot in that time frame.                                                          |
| 162 | Eugene  | 2023 | 7     | 28  | I don't know the thief's name, but it was someone I recognized. Earlier this morning, before I arrived at Emma's bakery, I was walking by the ATM on Leggett Street and saw the thief there withdrawing some money.
| 163 | Raymond | 2023 | 7     | 28  | As the thief was leaving the bakery, they called someone who talked to them for less than a minute. In the call, I heard the thief say that they were planning to take the earliest flight out of Fiftyville tomorrow. The thief then asked the person on the other end of the phone to purchase the flight ticket. |
+-----+---------+------+-------+-----+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
*/




/*

-- To check plates according to interviews with 3 withnesses

SELECT * FROM bakery_security_logs AS bs
WHERE day = 28 AND month = 07 AND hour = 10 AND minute BETWEEN 10 AND 30 ;


*/

-- Check atm withdrawals on 28.07.2023

/*

SELECT * FROM atm_transactions AS atm
WHERE atm.atm_location = 'Leggett Street' AND transaction_type = 'withdraw'
AND day = 28 AND month = 07;

*/
-- output of atm withdrawals on 28.07.2023

/*
+-----+----------------+------+-------+-----+----------------+------------------+--------+
| id  | account_number | year | month | day |  atm_location  | transaction_type | amount |
+-----+----------------+------+-------+-----+----------------+------------------+--------+
| 246 | 28500762       | 2023 | 7     | 28  | Leggett Street | withdraw         | 48     |
| 264 | 28296815       | 2023 | 7     | 28  | Leggett Street | withdraw         | 20     |
| 266 | 76054385       | 2023 | 7     | 28  | Leggett Street | withdraw         | 60     |
| 267 | 49610011       | 2023 | 7     | 28  | Leggett Street | withdraw         | 50     |
| 269 | 16153065       | 2023 | 7     | 28  | Leggett Street | withdraw         | 80     |
| 288 | 25506511       | 2023 | 7     | 28  | Leggett Street | withdraw         | 20     |
| 313 | 81061156       | 2023 | 7     | 28  | Leggett Street | withdraw         | 30     |
| 336 | 26013199       | 2023 | 7     | 28  | Leggett Street | withdraw         | 35     |
+-----+----------------+------+-------+-----+----------------+------------------+--------+
*/





-- Bank Account

/*
SELECT * FROM bank_accounts LIMIT 5;

+----------------+-----------+---------------+
| account_number | person_id | creation_year |
+----------------+-----------+---------------+
| 52833142       | 677560    | 2010          |
| 50665819       | 893762    | 2010          |
| 49610011       | 686048    | 2010          |
| 79758906       | 279793    | 2010          |
| 36709431       | 486361    | 2010          |
+----------------+-----------+---------------+

*/


/*

SELECT * FROM  people;

+--------+---------+----------------+-----------------+---------------+
|   id   |  name   |  phone_number  | passport_number | license_plate |
+--------+---------+----------------+-----------------+---------------+
| 205082 | Pamela  | (113) 555-7544 | 1050247273      | 5CIO816       |
| 210245 | Jordan  | (328) 555-9658 | 7951366683      | HW0488P       |
| 210641 | Heather | (502) 555-6712 | 4356447308      | NULL          |
| 221103 | Vanessa | (725) 555-4692 | 2963008352      | 5P2BI95       |
| 222194 | Ronald  | (321) 555-6083 | 4959515588      | 9XPY28H       |
+--------+---------+----------------+-----------------+---------------+


*/

/*
-- ATM WİTHDRAWALS --> ACCOUNT_NUMB ---> PERSON ID
SELECT * FROM atm_transactions AS atm
JOIN bank_accounts AS ba ON ba.account_number = atm.account_number
WHERE atm.atm_location = 'Leggett Street' AND transaction_type = 'withdraw'
AND day = 28 AND month = 07;
*/




/*
------- ! PLAN ! -------


ATM WİTHDRAWALS --> ACCOUNT_NUMB ---> PERSON ID --> PEOPLE  TABLE --> NAME >>> DONE!


PEOPLE --> PHONE CALL > 1 MINUTE (60) ON day = 28 AND month = 07;

SELECT * FROM people AS ppl
JOIN phone_calls AS pc ON pc.caller = ppl.phone_number
WHERE pc.duration <= 60
AND day = 28 AND month = 7;



CHECK THIS NAME IS INCLUDED FIRST FLIGHT ON 29th of JULY !

--> find thefts name

--> find city

AND THEN FIND PHONE CALLS SHE/HE made ---> find partner

*/






----------------------

/*
----------------------
-- Checkpoint v.1.2 --
----------------------

SELECT * FROM atm_transactions AS atm
JOIN bank_accounts AS ba ON ba.account_number = atm.account_number
JOIN people as ppl ON ppl.id = ba.person_id
WHERE day = 28 AND month = 7
AND atm.atm_location = 'Leggett Street' AND transaction_type = 'withdraw'
AND ppl.license_plate IN ( SELECT license_plate FROM bakery_security_logs WHERE day = 28 AND month = 07 );



SELECT * FROM people LIMIT 5;


SELECT * FROM phone_calls LIMIT 5;


SELECT * FROM passengers LIMIT 5;

*/

------------------
/*
checkpoint v1.3

We know People withdrawn and phone numbers and licence plates found on day = 28 AND month = 7

SELECT * FROM atm_transactions AS atm
JOIN bank_accounts AS ba ON ba.account_number = atm.account_number
JOIN people as ppl ON ppl.id = ba.person_id
WHERE atm.atm_location = 'Leggett Street' AND transaction_type = 'withdraw'
AND day = 28 AND month = 7
AND ppl.license_plate IN ( SELECT license_plate FROM bakery_security_logs WHERE day = 28 AND month = 7 )
AND ppl.phone_number IN ( SELECT pc.caller FROM phone_calls AS pc WHERE pc.duration <= 60 AND day = 28 AND month = 7 );


-----+----------------+------+-------+-----+----------------+------------------+--------+----------------+-----------+---------------+--------+--------+----------------+-----------------+---------------+
| id  | account_number | year | month | day |  atm_location  | transaction_type | amount | account_number | person_id | creation_year |   id   |  name  |  phone_number  | passport_number | license_plate |
+-----+----------------+------+-------+-----+----------------+------------------+--------+----------------+-----------+---------------+--------+--------+----------------+-----------------+---------------+
| 267 | 49610011       | 2023 | 7     | 28  | Leggett Street | withdraw         | 50     | 49610011       | 686048    | 2010          | 686048 | Bruce  | (367) 555-5533 | 5773159633      | 94KL13X       |
| 336 | 26013199       | 2023 | 7     | 28  | Leggett Street | withdraw         | 35     | 26013199       | 514354    | 2012          | 514354 | Diana  | (770) 555-1861 | 3592750733      | 322W7JE       |
| 266 | 76054385       | 2023 | 7     | 28  | Leggett Street | withdraw         | 60     | 76054385       | 449774    | 2015          | 449774 | Taylor | (286) 555-6063 | 1988161715      | 1106N58       |
+-----+----------------+------+-------+-----+----------------+------------------+--------+----------------+-----------+---------------+--------+--------+----------------+-----------------+---------

*/



SELECT * FROM people LIMIT 5;
.schema people

SELECT * FROM flights LIMIT 5;
.schema flights

SELECT * FROM passengers LIMIT 5;
.schema passengers

SELECT * FROM airports LIMIT 5;
.schema airports


SELECT * FROM airports as air
JOIN flights AS f ON f.origin_airport_id = air.id
WHERE air.id = 8
AND day = 29 AND month = 7
ORDER BY hour ASC;


SELECT * FROM airports WHERE id = 4;
