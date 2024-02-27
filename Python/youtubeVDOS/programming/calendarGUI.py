from tkinter import *           
import calendar                 
from datetime import date       

def displayCalendar():  
    month = int(month_box.get())  
    year = int(year_box.get())  
    output_calendar = calendar.month(year, month)  
    calendar_field.delete(1.0, 'end')  
    calendar_field.insert('end', output_calendar)  

def reset():  
    calendar_field.delete(1.0, 'end')  
    month_var.set(current_month)  
    year_var.set(current_year)  
    month_box.config(textvariable = month_var)  
    year_box.config(textvariable = year_var)  

def close():  
    guiWindow.destroy()  

if __name__ == "__main__":  
    guiWindow = Tk()  
    guiWindow.title("GUI Calendar - TECH IN SECONDS")  
    guiWindow.resizable(0, 0)  
    guiWindow.configure(bg="#B0E0E6")  

    header_frame = Frame(guiWindow, bg = "#B0E0E6")  
    entry_frame = Frame(guiWindow, bg = "#B0E0E6")  
    result_frame = Frame(guiWindow, bg = "#B0E0E6")  
    button_frame = Frame(guiWindow, bg = "#B0E0E6")  

    header_frame.grid(row=0,column=0)  
    entry_frame.grid(row=1,column=0)  
    result_frame.grid(row=2,column=0)  
    button_frame.grid(row=3,column=0)  

    header_label = Label(  
        header_frame,  
        text = "CALENDAR",  
        font = ('verdana','25','bold'),  
        bg = "#B0E0E6",  
        fg = "#191970"  
        )
    
    header_label.pack(expand = True, fill = "both")    

    month_label = Label(  
        entry_frame,  
        text = "Month:",  
        font = ("consolas", "18"),  
        bg = "#B0E0E6",  
        fg = "#000000"  
    )

    year_label = Label(  
        entry_frame,  
        text = "Year:",  
        font = ("consolas", "18"),  
        bg = "#B0E0E6",  
        fg = "#000000"     
    )  

    month_label.grid(row=0, column=0)  
    year_label.grid(row=0, column=2)  

    month_var = IntVar(entry_frame)  
    year_var = IntVar(entry_frame)  

    current_month = date.today().month  
    current_year = date.today().year  

    month_var.set(current_month)  
    year_var.set(current_year)  

    month_box = Spinbox(  
        entry_frame,  
        from_ = 1,  
        font = ("consolas", "18"),  
        to = 12,  
        width = "10",  
        textvariable = month_var   
        )
    
    year_box = Spinbox(  
        entry_frame,  
        font = ("consolas", "18"),  
        from_ = 0000,  
        to = 3000,  
        width = "10",  
        textvariable = year_var  
    )  

    month_box.grid(row=0, column=1)  
    year_box.grid(row=0, column=3) 

    calendar_field = Text(  
        result_frame,
        width = 25,   
        height= 7,
        font = ("consolas", "19"),  
        relief = RIDGE,  
        borderwidth = 5,
        padx=40,
        pady=20
    )  

    calendar_field.grid(row=0, column=0)  
    display_button = Button(  
        button_frame,  
        text = "DISPLAY",  
        font = ("consolas", "18"),  
        bg = "#191970",  
        fg = "#E0FFFF",  
        command = displayCalendar  
    )  

    reset_button = Button(  
        button_frame,  
        text = "RESET",  
        font = ("consolas", "18"),  
        bg = "#191970",  
        fg = "#E0FFFF",  
        command = reset  
    )  

    close_button = Button(  
        button_frame,  
        text = "CLOSE",  
        bg = "#191970",  
        fg = "#E0FFFF",  
        font = ("consolas", "18"),  
        command = close  
    )  
    display_button.grid(row=0, column=0,columnspan=2)  
    reset_button.grid(row=0, column=2,columnspan=2)  
    close_button.grid(row=0, column=4,columnspan=2)  
    guiWindow.mainloop()  