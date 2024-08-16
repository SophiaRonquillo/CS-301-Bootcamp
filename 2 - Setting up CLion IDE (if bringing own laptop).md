# Before you start

It would be helpful to make sure you have 
a [GitHub account](https://github.com/signup) already created.

You can use either a personal or school email address with your GitHub account.

# CLion

CLion is a **I**ntegrated **D**evelopment **E**nvironment (IDE) created by the 
company JetBrains.  

This is a short guide how to get the free education license for CLion and 
install it on your machine. 

### Educator License
* Start by applying for a license by filling out their application.

    https://www.jetbrains.com/community/education/#students
* After you apply, you will get an email with a confirmation link you will
  need to click.

  ![img.png](_md_images/img.png)

  ![img_1.png](_md_images/img_1.png)



### Install and Set up CLion

* Once you have been approved, you can log in using the JB account you created.

    ![img_2.png](_md_images/img_2.png)

* When you first open CLion, you should have this welcome window. From here 
you can add your GitHub using **"Get from VCS"**.

* From here, you can add your GitHub credentials:

    ![img.png](_md_images/Get_from_Version_Control.png)

    ![img_1.png](_md_images/Authorize_in_GitHub.png)

    ![img_2.png](_md_images/Sign_in_to_GitHub.png)

# Configuring the Compiler for MacOS

Next you will need to configure your compiler.

* [Windows Instructions](CLion%20Compiler%20Setup%20(Windows).md)
* [MacOS Instructions](CLion%20Compiler%20Setup%20(MacOS).md)

# Windows Only (Optional)

There is a small issue with printing where an extra space is printed the 
first instance you call `cout`.  This can be fixed using the following steps.

### Help &rarr; Find Action
![./images/registry_01.png](_md_images/registry_01.png)

### Search for Registry
![./images/registry_00.png](_md_images/registry_00.png)

### Select run.processess.with.pty
![./images/registry_02.png](_md_images/registry_02.png)

# Clone bootcamp repository
After you set up your IDE, you can now clone the bootcamp repository to your 
local machaine.

> ### Note
> You may need to install Git if you do not have this option.

* Click "Get from VCS"

  ![img_8.png](_md_images/Welcome_to_CLion.png)

  Alternatively, you can also click **"File" &rarr; "New" &rarr; "Project from
  Version Control"**

  ![img_9.png](_md_images/project_from_VC.png)
* From here you should be able to see all of your GitHub projects.  Click
  **Clone**.

  ![img_10.png](_md_images/get_from_vc_clone.png)

* Click **"Ok"** after you see the following settings wizard prompt

  ![img_11.png](_md_images/open_project_wizard.png)
