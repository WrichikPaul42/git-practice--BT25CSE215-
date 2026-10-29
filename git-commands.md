# Git Practice Record

## Commands Used

- `git init -b main`: Initializes a local repository with `main` as its default branch.
- `git config`: Sets Git configuration values such as the user name and email.
- `git status`: Displays the state of the working directory and staging area.
- `git add <file>`: Stages file contents for the next commit.
- `git commit -m "<message>"`: Records staged changes with a descriptive message.
- `git log --oneline`: Shows a compact commit history.
- `git diff`: Shows unstaged changes.
- `git branch`: Lists, creates, or deletes branches.
- `git switch -c <branch>`: Creates and switches to a branch.
- `git merge <branch>`: Integrates changes from another branch.
- `git restore <file>`: Restores a file in the working tree from the index.
- `git stash`: Temporarily shelves working-tree changes.
- `git revert <commit>`: Creates a commit that reverses an earlier commit.
- `git remote add <name> <url>`: Adds a remote repository.
- `git push -u origin main`: Pushes `main` and sets its upstream.
- `git fetch origin`: Downloads refs and objects from the remote.
- `git pull --ff-only origin main`: Fetches and integrates remote changes only when a fast-forward is possible.

## Merge Conflict Experience

The reference materials describe creating a conflict by changing the same line in `mode.txt` on `main` and `feature/conflict-test`. Git marks the conflicting sections with `<<<<<<<`, `=======`, and `>>>>>>>`. Resolve the conflict by choosing the intended final text, removing the markers, staging the file, and committing the resolution.

This note records the sample workflow; update it with the actual branch names and result if your own conflict-resolution exercise differs.