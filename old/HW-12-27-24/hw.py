"""
TODO 3: Pygame init and Architecture
This TODO is just a test if you understand the way pygame (and by extension SDL) is built around:
drawing, events (like keys input), and of course some basic OOP

I would reccommend looking back at previous asignments, class notes, and of course the api refrence for pyganme at pygame wiki


Create a pygame window of 500 x 500 

The window should have a red square/rectangle (50,50) and can move based on WASD/ arrow keys. This means we can change the velocity of 
said via buttons or (different way) the position of the square can be modifed (added/subtracted) by buttons

(optional) Idealy, movement is handled via a class function (in x.[walk]([some pos])) just so you understand inheritance

A class should be made called Player that inherits from pygame.Rect (this makes like easier)

Warning: refresh the display/surface your drawing too; you will hate yourself if you spend time debugging because of this
"""

import pygame

pygame.init()


def main():
    pass #delete this line before coding :)

