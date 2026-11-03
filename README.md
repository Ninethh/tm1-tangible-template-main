# Multimedia Technologies I · Tangible Interactions

**Team:** _Name Surname (github-username), Name Surname (github-username), Name Surname (github-username)_

This repository is your group's **logbook for Module 2 (Tangible Interactions)**. After every session you add your code, a photo and a short video of what you built. Your teacher reviews it after each deadline, and at the end of the module you have a portfolio of everything you made.

> Replace the line above with your team's details, then tick ☐ → ☑ in the table below each time you finish a session.

## Sessions

Every session ends with a challenge. Push it **by 11:30 the same day**.

| #   | Date      | Session                                      | Challenge                 | Done |
| --- | --------- | -------------------------------------------- | ------------------------- | ---- |
| 1   | Tue 03/11 | [Hello, physical world](TI-01/README.md)     | Signal light              | ☐    |
| 2   | Thu 05/11 | [Digital and analog inputs](TI-02/README.md) | Hand-dimmed lamp (graded) | ☐    |
| 3   | Tue 10/11 | [Sensing the environment](TI-03/README.md)   | Automatic night light     | ☐    |
| 4   | Thu 12/11 | [Visual feedback](TI-04/README.md)           | The object that answers   | ☐    |
| 5   | Tue 17/11 | [Logic and states](TI-05/README.md)          | The safe box (graded)     | ☐    |
| 6   | Thu 19/11 | [Actuators and movement](TI-06/README.md)    | Physical gauge            | ☐    |
| 7   | Tue 24/11 | [Project lab](TI-07/README.md)               | Proof of concept          | ☐    |
| 8   | Thu 26/11 | [Installations and making](TI-08/README.md)  | Pitch your final idea     | ☐    |
| 9   | Tue 01/12 | [Project production](TI-09/README.md)        | Production milestone      | ☐    |
| 10  | Thu 03/12 | [Polish and demo day](TI-10/README.md)       | Public demo               | ☐    |
|     |           | [Final project](final-project/README.md)     | Final delivery            | ☐    |

---

## 1. First-time setup (session 1 only)

Do this once, in class. It takes about 20 minutes. **One member of the group** does steps 1–3; **everyone** does steps 4–6.

| Step | Action                          | How                                                                                                                                                                      |
| ---- | ------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| 1    | **Copy this template**          | Open the template link from Moodle → green **Use this template** button → **Create a new repository**.                                                                   |
| 2    | **Name it and make it private** | Owner: **you**. Name: `tm1-tangible-surname1-surname2-surname3`. Visibility: **Private**. Click **Create repository**.                                                                  |
| 3    | **Add your teacher and team**   | In your new repository: **Settings** → **Collaborators** → **Add people** → type `TEACHER_USERNAME` → **Add**. Do the same for each teammate.                            |
| 4    | **Accept and submit the link**  | Teammates: accept the invitation (check your email or github.com/notifications). Everyone: paste the repository's address in the Moodle assignment _"Your GitHub repository link"_. |
| 5    | **Install GitHub Desktop**      | Download it from [desktop.github.com](https://desktop.github.com), open it and sign in with your GitHub account.                                                         |
| 6    | **Clone your repository**       | In GitHub Desktop: **File** → **Clone repository** → pick your group's repository → choose a folder on your computer (e.g. `Documents/GitHub`) → **Clone**.           |

You now have a copy of this repository on your computer. That folder is where you work from now on.

---

## 2. Every session

| Step | Action                                     | How                                                                                                                                                                                  |
| ---- | ------------------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| 1    | **Pull**                                   | Open GitHub Desktop → click **Fetch origin**, then **Pull origin** if it appears. Always do this first: it brings in anything you changed on the website.                            |
| 2    | **Save your sketch in the session folder** | In the Arduino IDE: **File** → **Save As…** → go to your repository folder → open the session folder (e.g. `TI-03`) → name the sketch `ti03`. Arduino creates `TI-03/ti03/ti03.ino`. |
| 3    | **Add your photos**                        | Copy them into the session's `media` folder. Name the main one `photo-1.jpg` so it appears in the README automatically.                                                              |
| 4    | **Fill in the session README**             | Open `TI-03/README.md` (in any text editor, or on github.com later) and answer the questions.                                                                                        |
| 5    | **Commit**                                 | In GitHub Desktop you will see your changed files. Bottom left, write a summary such as `TI-03 finished` → click **Commit to main**.                                                 |
| 6    | **Push**                                   | Click **Push origin**. Your work is now on GitHub. ✅                                                                                                                                |
| 7    | **Add your video**                         | See section 3 below.                                                                                                                                                                 |

**Check:** open your repository on github.com and look at the session folder. If you can see your code and photo there, your teacher can see them too.

---

## 3. Photos and videos

**Photos**

- Create an schema of your circuits using TinkerCad and export it.
- A phone photo of your circuit is enough. Make sure the wiring is visible.
- Keep each photo **under 2 MB**.
- Use `.jpg` or `.png` (not `.heic`).

**Videos (short, under 10 MB)**

1. On github.com, open your session's `README.md`.
2. Click the ✏️ **pencil** icon (Edit this file).
3. Put the cursor under the **Video** heading and **drag your `.mp4` file** into the editor. Wait until a link appears.
4. Click **Commit changes…** → **Commit changes**.
5. Back in GitHub Desktop, click **Fetch origin** → **Pull origin** so your computer has the change too.

**Videos (longer)**
Upload to YouTube as **Unlisted** (or to Google Drive with "anyone with the link") and paste the link under the **Video** heading.

> 10–30 seconds showing the interaction working is better than a long video.

---

## 4. Rules

- **Deadline:** each challenge must be **pushed by 11:30** on the day of the session. The final project deadline will be on Moodle. GitHub records the date and time of every commit, and work pushed late counts as late.
- **Keep the repository private** and do not remove your teacher as a collaborator.
- **No big files:** GitHub rejects any file over 100 MB. Never commit raw video.
- **Group work:** challenges are done in groups of 3–4, and each group shares **one repository**. Only one member needs to upload each session, but anyone in the team can. List the team in every session README. To avoid conflicts, agree who pushes each session and always **Pull** before you start.
- **AI:** say where you used it in each README. Videos and photos must be real.
- **Commit often.** Several small commits are better than one at the end. They also show how your work developed.

---

## 5. Problems?

| Problem                                                                              | Solution                                                                                                |
| ------------------------------------------------------------------------------------ | ------------------------------------------------------------------------------------------------------- |
| GitHub Desktop says **"Push rejected"** or **"newer commits on remote"**             | Click **Pull origin** first, then **Push origin** again.                                                |
| Arduino says the sketch **must be in a folder with the same name**                   | Click **OK**: Arduino creates the folder for you. Check the final path is `TI-03/ti03/ti03.ino`.        |
| My **video won't upload**                                                            | It is too big. Compress it, or use an unlisted YouTube link.                                            |
| My **photo doesn't appear** in the README                                            | Check the file is called exactly `photo-1.jpg` (lower case) and is inside the session's `media` folder. |
| I edited files on github.com **and** on my computer, and now there is a **conflict** | Don't panic and don't delete anything. Ask your teacher in class.                                       |
| I can't find my repository in GitHub Desktop                                         | Check you are signed in with the right account: **GitHub Desktop** → **Settings** → **Accounts**.       |
