# Contributing Guidelines

This document contains certain rules and guidelines that developers are expected to follow, while contributing to any repository.

---

## 1. File system

-   Problem of the day questions have a folder called ```POD``` with week wise folders inside.
    -   For example: POD/Week6-DynamicProgramming/day1
- External contests contribution can be pushed under the ```Biweekly Contests``` in the respective folders with named as Platform name followed by Contest name and question.
    - For example: CodeForces/Codeforces Round #729 (Div. 2)/A_Odd_Set
- Same with the Weekly contest as well under ```Weekly Contests``` 
    - For example: WeeklyContests/Week1-Arrays/Q1

## 2. Commit Messages

-   Use the `-m` flag only for minor changes. The message following the `-m` flag must be of the below format :

    > `<Verb in present tense> <Action>`

    :white_check_mark: **Examples of valid messages:**

    -   Added serialisers.py for users app
    -   Updated utils/validator.js file
    -   Changed functionality of authentication process

    :x: **Examples of invalid messages:**

    -   Idk why this is not working
    -   Only ui bug fixes left
    -   All changes done, ready for production :)))

-   Before opening a PR, make sure you squash all your commits into one single commit using `git rebase` (squash). Instead of having 50 commits that describe 1 feature implementation, there must be one commit that describes everything that has been done so far. You can read up about it [here](https://www.internalpointers.com/post/squash-commits-into-one-git).
    > NOTE: While squashing your commits to write a new one, do not make use of `-m` flag. In this case, a vim editor window shall open. Write a title for the commit within 50-70 characters, leave a line and add an understandable description.

## 3. Issues

-   Issues **MUST** be opened any time any of the following events occur :
    1. You encounter an issue such that a major (50 lines of code or above) portion of the code needs to be changed/added.
    2. You want feature enhancements
    3. You encounter bugs
    4. Code refactoring is required
    5. Test coverage should be increased
-   **Open issues with the given template only.**
-   Feel free to label the issues appropriately.
-   Do not remove the headings (questions in bold) while opening an issue with the given template. Simply append to it.

## 4. Branches and PRs

-   No commits must be made to the `master` branch directly. The `master` branch shall only consist of the working code.
-   Developers are expected to work on feature branches, and upon successful development and testing, a PR (pull request) must be opened to merge with master.
-   A branch must be named as either as the feature being implemented, or the issue being fixed.

    :white_check_mark: **Examples of valid brach names:**

    -   #8123 (issue number)
    -   OAuth (feature)
    -   questionsUtils (functionality of the questions)

    :x: **Examples of invalid branch names**:

    -   name-testing
    -   attemptToFixAuth
    -   SomethingRandom

## 5. Discussion Ethics

-   Developers should be clear and concise while commenting on issues or PR reviews. If needed, one should provide visual reference or a code snippet for everyone involved to properly grasp the issue.
-   Everyone should be respectful of everyone's opinion. Any harsh/disrespectful language is **STRICTLY** prohibited and will not be tolerated under any circumstances.

## 6. Coding Ethics

-   Developers are highly encouraged to use comments wherever necessary and make the code self documented.
-   The project structure should be neat and organised. All folders and files should be organised semantically according to their functionality.
-   The name of the folders and files should not be too long but should be as self explanatory as possible.
-   Documentation shall **STRICTLY** have gender neutral terms. Instead of using "he/him" or "she/her", one should use "they/them" or "the user".

