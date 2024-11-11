# Version Control Systems Questions

## Engine Architecture and Design - FHTW

## Question Set 1 (11.11.2024)

1. **What is the difference between git and github?**
   
   + Git: Distributed version control system (LOCAL)
   
   + GitHub: Web-based hosting service for Git repositories (LOCAL GIT Repository is saved on Github.com)

1. **Name 3 benefits of a version control system:**
   
   * Track changes/history, i.e. Code is malfunctioning but luckily you made a commit when it worked, thus you can revert the changes. 
   * Multiple Devs can work on the same project simultaneously, best practice: create a branch for one feature and once its finished merge it with the main branch
   * Documentation and Collaboration
     * Commits server as documentation, that highlight why changes were made
     * Pull/Merge requests allow for code reviews in team structures
     * Makes it easier for new developers to understand the project history 

2. **Name 3 alternatives to git:**
   
   - Mercurial
   - SVN (Subversion)
   - Perforce

3. **Name 2 differences between git and other version control systems:**
   
   1. **Repository Structure**
      
      - Git: Distributed system - each developer has a complete copy of the repository with full history
      - Others (like SVN): Centralized system - single server holds the main repository, developers only have working copies
   
   2. **Branching System**
      
      - Git: Lightweight branching (just pointers) and fast merging, encouraging feature branch workflow
      - Others: Branches are typically more resource-intensive and slower to create/merge

4. **Name known issues related to game engines (Unreal, Unity) and version control systems:**
   
   + Large binary files handling
   
   + Merge conflicts with scene files (mentioned by teacher in first unit)

## Question Set 2 (11.11.2024)

1. **Describe a logging system with your own words:**

A system which records events, errors and activities during program execution. Used for debugging and monitoring purposes. 

1. **What is the difference between git submodules and git subtrees?**
   
   + Submodules: References to specific commits of external repos
   - Subtrees: Full copy of external repo merged into main project

2. **What is a build system in C++? Name 3 build systems:**
   
   - CMake
   - Make
   - Ninja

3. **What is a package manager in C++?**
   
   A package manager in C++ automates these steps for the user:
   
   + installing, updating, configuring, removing dependencies that a C++ project needs (i.e. a package manager lets you install dependencies with simple cli commands -> ```Conan install <dependency>```)
   
   + Also ensures consistent builds across different platforms/machines
   
   + Handles version conflicts
   
   + etc.
   
   **Name 3 package manager:**
   
   - Conan
   - vcpkg
   - Hunter
