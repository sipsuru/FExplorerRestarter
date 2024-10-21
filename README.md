# FExplorerRestarter

## What's & How?
Explorer Restarter is a simple extremely lightweight non-customizable console application written in C++ for Restart File Explorer on a predefined key combination.

## Purpose?
I've faced to a huge problem back then, sometimes my Windows 11 Enterprise [Latest]'s taskbar stucked. There were no time updates, opened-closed apps didn't stated on taskbar, no hover. But I could click it. 
After some workarounds, the only way I found to solve this is just restarting File Explorer. But to do so I hav to open `Task Manager`, then restart FExplorer. ``

With this simple cli app, you can restart FExplorer with just a key combination.

## The Key Combination?
The default Key Combination is `Ctrl + Alt + R`

> [!TIP]
> If you wanna your own key combination, you need to edit the source, but the predefined key combination is the most unique and uncommon key combination I could found. (Of course may not valid for you.)

## How to Build
You can import the project to Visual Studio, but the easy way is to built using GitHub Action Workflow

## Additional
We can add the application to `Startup Apps`, so more hassle free.
