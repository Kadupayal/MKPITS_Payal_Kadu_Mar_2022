create table student(
rollnumber int,
name varchar(30),
class varchar(30),
section varchar(1),
mobile varchar(10),
primary key(rollnumber,mobile));

insert into student
values(1,'amit','dotnet','i','1234567890')
insert into student
values(1,'amit','dotnet','i','1234567891')

select * from student

create table order_items (order_id int,
item_id int,product_id int,quantity int,
list_price int, discount int, primary
key(order_id,item_id))

insert into order_items
values(1,11,101,2,20,5)

insert into order_items
values(1,12,102,2,20,5)

insert into order_items
values(2,11,102,2,20,5)

select * from order_items

