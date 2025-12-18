from tkinter import*
root=Tk ()
def onClick():
    mylabel=Label(root,text="you clicked Button")
    mylabel.pack()
myButton=Button(root,text="click me",command=onClick)
myButton.pack()
root.mainloop()