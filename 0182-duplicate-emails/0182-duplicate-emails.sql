# Write your MySQL query statement below
Select email as Email 
from Person
Group by Email
Having Count(Email)>1