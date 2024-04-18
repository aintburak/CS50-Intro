# Problem Set 1 - CS50

## Introduction
This problem set serves as your introduction to the basic workflow for submitting assignments using GitHub and CS50's unique development environment. You will also tackle your first coding challenges.

## Setup Instructions
1. **GitHub Authentication**:
    - Visit [submit.cs50.io](https://submit.cs50.io) and authenticate using your GitHub account. Authorize `cs50` when prompted and then close the tab.
    - Log into [cs50.dev](https://cs50.dev) with your GitHub account. Follow the on-screen prompts to prepare your personal codespace.

2. **Update Your Codespace**:
    - Once in your codespace, execute `update50` in the terminal to ensure everything is current. Rebuild your codespace if asked.

## Assignments
Complete and submit the following tasks:
- **Hello, World**: Write a simple "Hello, World" program.
- **Hello, It’s Me**: Submit a personalized greeting program.
- **Mario**:
    - Choose either a simpler or more advanced version of the Mario problem based on your comfort level.
- **Financial Programs**:
    - Opt for either the Cash (simpler) or Credit (more advanced) assignment depending on your confidence.

**Note**: Only the higher score of the two submissions for both Mario and Financial Programs will be recorded.


# How to Begin

## Start
1. Click inside your terminal window.
2. Execute `cd` by itself. You should see a prompt that resembles `$`.

## Create Directory
Execute the following command to create a folder called `world` in your codespace:

```bash
mkdir world
```

Then, change directories into that folder with:

```bash
cd world
```

Your terminal prompt should now show as `world/ $`. You can now execute the following command to create a file called `hello.c`:

```bash
code hello.c
```

# How to Test

## Compilation
Recall that you can compile `hello.c` with:

```bash
make hello
```

If you don’t see an error message, it compiled successfully! Confirm with:

```bash
ls
```

This should list not only `hello.c` (which is source code) but also `hello` (which is machine code).

If you do see an error message, try to fix your code and compile it again. If you don't understand the error message, try executing:

```bash
help50 make hello
```

for advice.

## Execution
Once your code compiles successfully, you can execute your program with:

```bash
./hello
```

# Correctness

Execute the below command to evaluate the correctness of your code using `check50`, a command-line program that outputs happy faces when your code passes automated tests and sad faces when it doesn’t:

```bash
check50 cs50/problems/2024/x/world
```

# Style

Evaluate the style of your code using `style50` by executing:

```bash
style50 hello.c
```

This tool will output additions (in green) and deletions (in red) that you should make to improve the style of your program. If you have trouble seeing those colors, `style50` supports other modes too!

## Additional Resources
- Utilize source code examples from Week 1’s lectures.
- Refer to the [CS50 Style Guide for C](https://cs50.readthedocs.io/style/c/) for coding style tips.
- If you encounter compilation errors, use `help50` to understand error messages. For example, run `help50 make hello` if `make hello` fails.

## Good Luck!
Ensure to follow all instructions and review each assignment's criteria. Start early and reach out for help if you get stuck.
