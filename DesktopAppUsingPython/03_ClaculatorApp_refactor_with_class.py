# 1 imports libraires
from PyQt5.QtWidgets import QApplication, QWidget, QLineEdit, QPushButton, QLabel, QHBoxLayout, QVBoxLayout, QGridLayout

class CalculatorApp(QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("Calculator App")
        self.resize(300,300)

        # 3 Ohter Objecs and widgets
        self.text_box = QLineEdit()
        self.grid = QGridLayout()

        self.buttons = ["7","8","9","/",
                        "4","5","6","*",
                        "3","2","1","-",
                        "0",".","=","+"
        ]

        # Making a nuber grid
        col = 0
        row = 0
        for i in self.buttons:
            button = QPushButton(i)
            button.clicked.connect(self.button_click)
            self.grid.addWidget(button,row,col)

            col+=1
            while(col>3):
                col = 0
                row +=1

        self.clear = QPushButton("Clear")
        self.delete = QPushButton("del")

        master_layout = QVBoxLayout()
        master_layout.addWidget(self.text_box)
        master_layout.addLayout(self.grid)

        button_row = QHBoxLayout()
        button_row.addWidget(self.clear)
        button_row.addWidget(self.delete)

        master_layout.addLayout(button_row)
        self.setLayout(master_layout)

        self.clear.clicked.connect(self.button_click)
        self.delete.clicked.connect(self.button_click)

    # 4 Functions:-
    def button_click(self):
        button = app.sender()
        text = button.text()

        if text == "=":
            exp = self.text_box.text()
            try:
                result = eval(exp)
                self.text_box.setText(str(result))

            except Exception as e:
                self.text_box.setText("Error")
                print("Error ", )

        elif text == "Clear":
            self.text_box.clear()

        elif text == "del":
            curr = self.text_box.text()
            self.text_box.setText(curr[:-1])

        else:
            curr = self.text_box.text()
            self.text_box.setText(curr + text)




if __name__ == "__main__":
        app = QApplication([])
        main_window = CalculatorApp() 
        main_window.show()
        app.exec_()
