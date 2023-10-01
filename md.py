import os
import subprocess

# Get the home directory from the environment variables
homeDir = os.getenv("HOME")

# Create a command to touch a new .md file with the current timestamp
create_md = 'touch "{}/Library/Application Support/Sublime Text/Packages/User/Chpt/$(date +%Y-%m-%d-%I.%M.%S-%p).md"'.format(homeDir)
subprocess.call(create_md, shell=True)

# Open the latest .md file using the subl command
open_subl = 'cd "{}/Library/Application Support/Sublime Text/Packages/User/Chpt/" && subl "$(ls -t *.md | head -1)"'.format(homeDir)
subprocess.call(open_subl, shell=True)