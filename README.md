# vim-code-assistant
code assistant in vim that reads the contents of the buffer and sends a response back in vim
# 1. compile the `chpt.c` file with gcc:

   ```
   gcc -o chpt chpt.c
   ```

# 2. compile the `md.c` file with gcc:

   ```
   gcc -o md md.c
   ```

# 3. Make the `md`  and `chpt` file executable using the `chmod` command:

   ```
   chmod +x md && chmod +x chpt

   ```
# 3. Move both files to the /usr/local/bin directory:

   ```
   mv md /usr/local/bin && mv chpt /usr/local/bin
   
   ```

# 4. When inside vim, hit the ESC key and type `:%!md` to create a .md file.

# 5. after you have created the .md file, enter your question and hit the ESC key and type 
# `:%!chpt` to get your answer.
