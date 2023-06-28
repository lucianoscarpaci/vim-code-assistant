# vim-code-assistant
code assistant in vim that reads the contents of the buffer and sends a response back in vim
# 1. Navigate to your home directory using the `cd` command in the terminal:

   ```
   cd ~
   ```

# 2. Create a new directory called `.local/bin` if it doesn't already exist:

   ```
   mkdir -p ~/.local/bin
   ```

# 3. Navigate to the `.local/bin` directory:

   ```
   cd ~/.local/bin
   ```

# 4. Create a symbolic link to the `turbo.py` file using the `ln` command:

   ```
   ln -s /path/to/turbo.py turbo
   ```

   # Replace `/path/to/turbo.py` with the actual path to the `turbo.py` file.

# 5. Make the `turbo` file executable using the `chmod` command:

   ```
   chmod +x turbo
   ```

# 6. Add the `.local/bin` directory to your PATH by adding the following line to your `.zshrc` file:

   ```
   export PATH=$HOME/.local/bin:$PATH
   ```
# 7. Restart your terminal by running 
   ```
   source ~/.zshrc
   ```
