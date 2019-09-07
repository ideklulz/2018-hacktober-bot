# 2018-hacktober-bot
A customer service bot we made in C. It acts like a command prompt in that it accepts a limited number of commands:
-   **BILL**: opens the T-Mobile billing webpage.
-   **SPAM**: opens a page that has instructions on how to handle spam calls
-   **SIM**: opens a page that has instructions on activating the customer's T-Mobile SIM card.
-   **PROMO**: opens a page containing deals and promotions for T-Mobile customers
-   **EXIT**: exits the program

We currently can only run one command at a time. If the user input contains spaces, it would be understood as a request, and will be written to a request.txt file. A technician would then open the file and read through the customers' requests.

For T-Mobile Hacktober 2018

Team members:
-   **Dien Tran**: dien.kim.tran@utdallas.edu
-   **Arshdeep Singh**: arshdeep.singh2@utdallas.edu
-   **Jonathan Gonzalez**: jsg170000@utdallas.edu
