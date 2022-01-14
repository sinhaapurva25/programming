-- https://www.youtube.com/watch?v=p3qvj9hO_Bo&t=2445s
CREATE DATABASE record_company;
USE record_company;
CREATE TABLE bands(
	id INT NOT NULL auto_increment,
    name VARCHAR(255) NOT NULL,
    primary key (id)
);
CREATE TABLE albums(
	id INT NOT NULL auto_increment,
    name VARCHAR(255) NOT NULL,
    release_year INT,
    band_id INT NOT NULL,
    primary key (id),
    foreign key (band_id) references bands(id)
);

INSERT INTO bands (name)
VALUES ('Iron Maiden');

INSERT INTO bands (name)
VALUES ('Deuece'),('AS'),('AK');

select * from bands;
select * from bands limit 2;
select name from bands;
select id AS 'ID', name as 'BAND NAME' from bands;
select * from bands order by name asc;
select * from bands order by name desc;

INSERT INTO albums (name,release_year,band_id)
VALUES ('GoT',2011,1),
	   ('interstellar',2014,1),
       ('Witcher',2019,2),
       ('WoT',2021,3),
       ('LotR',NULL,1);
select * from albums;
 
select distinct name from albums;
 
update albums set release_year = 2024 where id = 1;

SELECT * from albums where release_year < 2021;

SELECT * from albums where name like '%er%' OR band_id=3;

SELECT * from albums where name like '%er%' and band_id=2;

select * from albums where release_year between 2011 and 2018;

select * from albums where release_year IS null;

delete from albums where id=5;

select * from albums;
select * from bands
inner join albums on bands.id = albums.band_id;

select * from albums;
select * from albums
right join bands on bands.id = albums.band_id;

select sum(release_year) from albums;

select band_id, COUNT(band_id) from albums
group by band_id;

select b.name AS band_name, COUNT(a.id) AS num_albums FROM bands as b
left join albums as a ON b.id = a.band_id
where b.name = 'Deuece'
group by b.id
having  num_albums=1;
