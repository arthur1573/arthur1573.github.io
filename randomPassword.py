
import random


# combine all letter, number, signes 
# delete something I do not like: i l o, I L O, 1 0, ! ( ) - = + [ ] \ ; ' , . /
all = "abcdefghjkmnpkrstuvwxyz" + "ABCDEFGHJKMNPKRSTUVWXYZ" + "23456789" + "@#$%^*_" 


# 16 length
password_list = random.choices(all, k=16)


# delete something I do not like: i l o
username = "abcdefghjkmnpkrstuvwxyz"
username_list = random.choices(username, k=4)

# convert list to string
password_str = "".join(password_list)
username_str = "".join(username_list)

# setup dependencies
# pip install -r requirements.txt



# if the module is not install or 
# Pyperclip could not find a copy/paste mechanism for your system
# this program needs continual running
try:
    import pyperclip
    pyperclip.copy(password_str)
    print("user name: ", username_str)
    print("password: ", password_str)
    print('Well done, the password has been copied to the clipboard.')
except:
    print("user name: ", username_str)
    print("password: ", password_str)
    print('Well done, you need to copy the password above manually.')







# how to use:
#### for windows system:
#install python3+

#download this repositories

#run cmd.exe(in the folder path: F4 + cmd)

#python rp.py

#done

