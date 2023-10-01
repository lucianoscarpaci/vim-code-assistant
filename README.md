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
# 3. Move chpt to the /usr/local/bin directory:

   ```
   mv chpt /usr/local/bin
   
   ```

# 4. Edit bash, zsh, or other terminal config with an alias to md.

   ```
   alias md='/path/to/the/md'
   
   ```

# 5. Create a .md file enter your question and hit the ctrl+[ key for vim and type `:%!chpt` to get your answer.
