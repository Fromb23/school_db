CREATE DATABASE school;
USE school;

CREATE TABLE Students (
	studentID INT,
	firstName VARCHAR(30),
	lastName VARCHAR(30),
	age INT,
	date_of_birth DATE
);

CREATE TABLE Teachers (
	tscNO INT,
	firstName VARCHAR(30),
	lastName VARCHAR(30),
	age INT,
	date_hired DATE
);

CREATE TABLE Attendance (
	attendanceID INT,
	studentID INT,
	classID VARCHAR(3),
	date DATE,
	status VARCHAR(100)
);

CREATE TABLE Subject (
	subjectID VARCHAR(5),
	subjectName VARCHAR(60),
	Description VARCHAR(100)
);

CREATE TABLE Grades (
	gradeID INT,
	studentID INT,
	subjectID VARCHAR(5),
	grade VARCHAR(4),
	dateAssigned DATE
);
