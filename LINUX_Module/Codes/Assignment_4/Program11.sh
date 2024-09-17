#Write a shell script to create a menu driven program for adding, deletion or finding a record in a database. Database should have the field like rollno, name, semester and marks of three subjects. Last option of the menu should be to exit the menu.

#!/bin/bash

db_file="student_database.txt"

add_record() {
    read -p "Enter Roll No: " rollno
    read -p "Enter Name: " name
    read -p "Enter Semester: " semester
    read -p "Enter Marks for Subject 1: " marks1
    read -p "Enter Marks for Subject 2: " marks2
    read -p "Enter Marks for Subject 3: " marks3
    
    echo "$rollno:$name:$semester:$marks1:$marks2:$marks3" >> "$db_file"
    echo "Record added successfully!"
}

delete_record() {
    read -p "Enter Roll No of the record to delete: " rollno
    if grep -q "^$rollno:" "$db_file"; 
    then
        grep -v "^$rollno:" "$db_file" > temp_file && mv temp_file "$db_file" 
	#-v in grep means invert match. This tells grep to print all the lines that do not match the given pattern.
        echo "Record with Roll No $rollno deleted successfully!"
    else
        echo "Record not found!"
    fi
}


find_record() {
    read -p "Enter Roll No to find: " rollno
    
    if grep -q "^$rollno:" "$db_file"; then 
	    #-q : quiet :  it prevents grep from printing any matching lines to the output. Instead, it simply returns an exit status
        grep "^$rollno:" "$db_file"
    else
        echo "Record not found!"
    fi
}

show_record(){
	if [[ -s $db_file ]];
	then
		echo "rollno : name : semester : marks1 : marks2 : marks3"
		cat $db_file
	else
		echo "No Record Found!!"
	fi

}

while true; do
    echo "Menu:"
    echo "1. Add Record"
    echo "2. Delete Record"
    echo "3. Find Record"
    echo "4. Show Record"
    echo "5. Exit"
    read -p "Enter your choice [1-5]: " choice

    case $choice in
        1)
            add_record
            ;;
        2)
            delete_record
            ;;
        3)
            find_record
            ;;
	4)
            show_record
            ;;

        5)
            echo "Exiting..."
            exit 0
            ;;
        *)
            echo "Invalid option, please choose between 1-4."
            ;;
    esac
done

