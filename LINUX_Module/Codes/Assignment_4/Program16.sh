#Create a script to Create user , Delete user , Create group , delete Group using case
show_user() {
	echo "--------User List--------------"
	cat /etc/passwd
}
show_group() {
        echo "--------Group List--------------"
        cat /etc/group
}
create_user() {
        read -p "Enter username : " username
	sudo adduser $username
        echo "User Added Successfully";
}
delete_user() {
        read -p "Enter username : " username
        sudo deluser $username
        echo "User Deleted Successfully";
}
create_group() {
        read -p "Enter groupname : " groupname
        sudo addgroup $groupname
        echo "Group Added Successfully";
}
delete_group() {
        read -p "Enter groupname : " groupname
        sudo delgroup $groupname
        echo "Group Deleted Successfully";

}

while true;
do
	echo "Welcome"
	echo "1. Show Users."
	echo "2. Show Groups."  
	echo "3. Create User."
	echo "4. Delete User."
	echo "5. Create Group."
	echo "6. Delete Group."
	echo "7. Exit"  
	echo "Enter choice : "
	read choice

	case $choice in
		1)
			show_user
			;;
		2)
			show_group
			;;
		3)
			create_user
			;;
		4)
			delete_user
			;;
		5)
			create_group
			;;
		6)
			delete_group
			;;
		7)
			echo "Exiting..."
			exit 0;
			;;
		*)
			echo "Invalid Choice"
			;;
	esac
done
