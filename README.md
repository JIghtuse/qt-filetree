qt-filetree
===========

Let's see how can we make updating filetree.

# Plan

Just use QFileTree and QFileSystemModel to show a tree. What can go wrong?

# Version 1

Isn't it finished? We have a nice QFileTree with QFileSystemModel. The model
keeps a cache with file information. The cache is automatically kept up to date
using the QFileSystemWatcher.

What's wrong? The answer is mounting. Try to open some directory and then mount
something to it. What will you see? Right, the empty directory. Well, that's
not really right. After application restart we can see contents of a directory.
What can we do to fix that?

# Plan

We would watch for /etc/mtab for new entries and redraw tree if some new mount
appears/disappears.
