from tkinter import*
root=Tk ()
e=Entry(root,width=50)
e.pack()
def myClick():
    abc="Hello"+e.get()
    mylabel=Label(root,text=abc)
    mylabel.pack()
myButton=Button(root,text="click me!",command=myClick)
myButton.pack()
root.mainloop()