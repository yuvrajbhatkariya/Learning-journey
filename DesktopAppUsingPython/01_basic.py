# 1 .imports
from PyQt5.QtCore import Qt
from PyQt5.QtWidgets import QApplication,QWidget,QLabel,QPushButton,QVBoxLayout,QHBoxLayout

from random import choice
# 2. Main App Objects
app = QApplication([])
main_window = QWidget()
main_window.setWindowTitle("My First App")
main_window.resize(400,250)


# 3. Create All app Obeject
title = QLabel("Random Keyword")

text1 = QLabel("?")
text2 = QLabel("?")
text3 = QLabel("?")

button1 = QPushButton("Click Me")
button2 = QPushButton("Click Me")
button3 = QPushButton("Click Me")

words = words = ["Aurora", "Compass", "Lantern", "Velvet", "Glacier", "Thunder", "Meadow", "Orbit", "Whisper", "Sapphire", "Canyon", "Mosaic", "Phoenix", "Willow", "Eclipse", "Harbor", "Zephyr", "Marble", "Forest", "Stardust"]


# 4. All design ,widgets
master_layout = QVBoxLayout()

row1 = QHBoxLayout()
row2 = QHBoxLayout()
row3 = QHBoxLayout()

row1.addWidget(title,alignment=Qt.AlignCenter)

row2.addWidget(text1 ,alignment=Qt.AlignCenter)
row2.addWidget(text2 ,alignment=Qt.AlignCenter)
row2.addWidget(text3 ,alignment=Qt.AlignCenter)

row3.addWidget(button1)
row3.addWidget(button2)
row3.addWidget(button3)

master_layout.addLayout(row1)
master_layout.addLayout(row2)
master_layout.addLayout(row3)

main_window.setLayout(master_layout)


# Create Functions :-


def randomWord1():
    word = choice(words)
    return word

# 5. Events
button1.clicked.connect(lambda: text1.setText(randomWord1()))
button2.clicked.connect(lambda: text2.setText(randomWord1()))
button3.clicked.connect(lambda: text3.setText(randomWord1()))


# 6. Show / Run App
main_window.show()
app.exec_()