Enter password: **********
Welcome to the MySQL monitor.  Commands end with ; or \g.
Your MySQL connection id is 14
Server version: 8.0.11 MySQL Community Server - GPL

Copyright (c) 2000, 2018, Oracle and/or its affiliates. All rights reserved.

Oracle is a registered trademark of Oracle Corporation and/or its
affiliates. Other names may be trademarks of their respective
owners.

Type 'help;' or '\h' for help. Type '\c' to clear the current input statement.

mysql>
mysql> show databases;
+--------------------+
| Database           |
+--------------------+
| information_schema |
| mysql              |
| performance_schema |
| sakila             |
| sys                |
| world              |
+--------------------+
6 rows in set (0.15 sec)

mysql> create database apurva;
Query OK, 1 row affected (0.18 sec)

mysql> show databases;
+--------------------+
| Database           |
+--------------------+
| apurva             |
| information_schema |
| mysql              |
| performance_schema |
| sakila             |
| sys                |
| world              |
+--------------------+
7 rows in set (0.00 sec)

mysql> use apurva
Database changed
mysql> create table student(sname varchar(20),sroll int ,smarks int)
    -> ;
Query OK, 0 rows affected (0.99 sec)

mysql> desc student;
+--------+-------------+------+-----+---------+-------+
| Field  | Type        | Null | Key | Default | Extra |
+--------+-------------+------+-----+---------+-------+
| sname  | varchar(20) | YES  |     | NULL    |       |
| sroll  | int(11)     | YES  |     | NULL    |       |
| smarks | int(11)     | YES  |     | NULL    |       |
+--------+-------------+------+-----+---------+-------+
3 rows in set (0.23 sec)

mysql> insert into student(sname, sroll, smarks)values('apurva',25,100)
    -> ;
Query OK, 1 row affected (0.15 sec)

mysql> select*from student
    -> ;
+--------+-------+--------+
| sname  | sroll | smarks |
+--------+-------+--------+
| apurva |    25 |    100 |
+--------+-------+--------+
1 row in set (0.00 sec)

mysql> exit()