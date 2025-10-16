use aditya_unversity;
create table student (id varchar(20),Name varchar(20),Department Varchar(5));
create table course (std_id varchar(20),course_id int,course Varchar(5)) ;
insert into student values ( "dbms1","Takur","Aiml"),
							( "dbms2","Tarun","Aiml"),
                            ( "dbms3","Charan","Cse"),
                            ( "dbms4","Takur","Cse"),
                            ( "Os1","Takur","Aiml"),
							( "Os2","Tarun","Aiml"),
                            ( "Os3","vikram","Cse"),
                            ( "Os4","Rajesh","Cse");
insert into course values ( "dbms1",1,"Aiml"),
							( "dbms2",2,"Aiml"),
                            ( "dbms3",3,"Cse"),
                            ( "dbms4",4,"Cse"),
                            ( "Os1",1,"Aiml"),
							( "Os2",2,"Aiml"),
                            ( "Os3",3,"Cse"),
                            ( "Os4",4,"Cse");
select *from student;8
select *from course;
select student.id,student.Name,course.course name from student INNER JOIN course on student.id=course.std_id;
insert into student values ("ps-1","Vikarath","Aiml"),
							("ps-1","siva","Cse");
insert into course values ("ps-1",3,"ps");
select student.id,student.Name,course.course name from student INNER JOIN course on student.id=course.std_id;
insert into course values("dbms1",4,"Ai");
drop table course;
insert into course values ("ps-3",5,"TT");
select student.id,student.Name,course.course name from student LEFT JOIN course on student.id=course.std_id;
select student.id,student.Name,course.course name from student RIGHT JOIN course on student.id=course.std_id;
select student.id,student.Name,course.course name from student FULL JOIN course on student.id=course.std_id;
drop table student;
select student.id,student.Name,course.course name from student LEFT JOIN course on student.id=course.std_id union select student.id,student.Name,course.course name from student RIGHT JOIN course on student.id=course.std_id;

