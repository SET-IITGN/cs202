import os
def execute_command(user_input):
    command = "echo " + user_input
    os.system(command)

user_input = "this can be anything..."
execute_command(user_input)
