# 1 imports libraires
from PyQt5.QtWidgets import QApplication, QWidget, QLineEdit, QPushButton, QLabel, QHBoxLayout, QVBoxLayout, QGridLayout

# 2 Main Object or App settings
app = QApplication([])
main_window = QWidget()
main_window.setWindowTitle("Calculator App")
main_window.resize(300,300)

# 3 Ohter Objecs and widgets
text_box = QLineEdit()
grid = QGridLayout()

buttons = ["7","8","9","/",
           "4","5","6","*",
           "3","2","1","-",
           "0",".","=","+"
]

clear = QPushButton("Clear")
delete = QPushButton("del")

# 4 Functions:-
def button_click():
    button = app.sender()
    text = button.text()

    if text == "=":
        exp = text_box.text()
        try:
            result = eval(exp)
            text_box.setText(str(result))

        except Exception as e:
            text_box.setText("Error")
            print("Error ", )

    elif text == "Clear":
        text_box.clear()

    elif text == "del":
        curr = text_box.text()
        text_box.setText(curr[:-1])

    else:
        curr = text_box.text()
        text_box.setText(curr + text)


# Making a nuber grid
col = 0
row = 0

for i in buttons:
    button = QPushButton(i)
    button.clicked.connect(button_click)
    grid.addWidget(button,row,col)

    col+=1
    while(col>3):
        col = 0
        row +=1




# 5 AddLayouts / Design
master_layout = QVBoxLayout()
master_layout.addWidget(text_box)
master_layout.addLayout(grid)

button_row = QHBoxLayout()
button_row.addWidget(clear)
button_row.addWidget(delete)

master_layout.addLayout(button_row)


main_window.setLayout(master_layout)

# 6 Events
clear.clicked.connect(button_click)
delete.clicked.connect(button_click)

# 7 Run & execution 
main_window.show()
app.exec_()
