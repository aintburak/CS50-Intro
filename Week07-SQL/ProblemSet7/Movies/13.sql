SELECT DISTINCT other_people.name
FROM people AS kevin_bacon
JOIN stars AS kevin_bacon_stars ON kevin_bacon_stars.person_id = kevin_bacon.id
JOIN stars AS other_stars ON other_stars.movie_id = kevin_bacon_stars.movie_id
JOIN people AS other_people ON other_people.id = other_stars.person_id
WHERE kevin_bacon.name = 'Kevin Bacon' AND kevin_bacon.birth = 1958 AND other_people.name != 'Kevin Bacon';
