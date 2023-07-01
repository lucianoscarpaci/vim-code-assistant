# vim-code-assistant
code assistant in vim that reads the contents of the buffer and sends a response back in vim
# 1. compile the `chpt.c` file with gcc:

   ```
   gcc -o chpt chpt.c
   ```

# 2. compile the `chptvim.c` file with gcc:

   ```
   gcc -o chptvim chptvim.c
   ```

# 3. Make the `chptvim`  and `chpt` file executable using the `chmod` command:

   ```
   chmod +x chptvim && chmod +x chpt

   ```
# 3. Move both files to the /usr/local/bin directory:

   ```
   mv chptvim /usr/local/bin && mv chpt /usr/local/bin
   
   ```

# 4. When inside vim, go into insert mode and type your question to chatgpt, hit the ESC key and type `:!%chpt` to get the response.
