# Eduonix Build Tools Series

## Build Tools for the C Programming Language

### Basic C Tools Examples
- <project root>/basic
- <project root>/basic/gnucomplete gnu toolchain development
- <project root>/basic/debian  intro C environment on debain
- <project root>/basic/redhat  intro C environment on redhat
-
### Embedded Programming Tools Example
- <project root>/advanced
- embedded code development for AOSP  https://source.android.com/
-

### Basic Docker
- If you are building in the gnucomplete directory

- Build
- docker build -t="eduonix/ctoolsgnu:1.0.0" .

- Run
- docker run -t -i  eduonix/ctoolsgnu:1.0.0

- You can mount additional source directorys like
- docker run -t -i -v <path to src directory>:/mnt/share  eduonix/ctoolsgnu:1.0.0

#### WARNING make sure you unmount the attached directory as it will delete the <path to src directory>/* if you delete the container with <path to src directory> still mounted