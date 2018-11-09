my_var=$(ifconfig | grep broadcast | grep inet | cut -d ' ' -f 2)
if [ -z "$my_var" ]
then
	echo "I am lost!"
else
	echo $my_var
fi
