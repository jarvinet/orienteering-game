Beat About The Bush
===================

Beat About The Bush is an orienteering simulation program or game, depending on the way you look at it.
It runs on a variety of platforms, including Windows, Linux, FreeBSD and OS X. 

Batb has a three dimensional view of the terrain and a map that you use to navigate through the terrain.
The terrain is very simple in that it only consists of altitude variations and trees. However, the terrain
can be very complex requiring great skill to navigate. Given this simplicity of the terrain, the map is also 
simple. It consists of only contours. Being able to read the contours is considered one of the most challenging
and important skills in orienteering, so this makes a very good training for real orienteering.

Batb includes both a single player game and multiplayer game. In singleplayer mode you run a course alone trying
to set the best time on the course. In multiplayer game you can play with other players over the internet and compete
against them.

Unlimited amount of terrains, maps and courses. You can easily control the complexity of the terrain by setting
certain parameters that affect the generated terrain.

Batb window consists of two main views: terrain view and map view. You toggle between these two views by pressing
the space bar on the keyboard. Map view is available only when the race is on, i.e. you are actually running a course.

In the terrain view, you can run through the terrain and look around. To run, press and hold the left mouse button.
When running, moving the mouse changes your direction of view, and the direction you are running. When not running, 
you can look around by depressing the right mouse button and moving the mouse. When running you can also look around
without changing the direction you are running by depressing the right mouse button and moving the mouse. Your running
direction does not change but the direction of your view changes. This is like turning your head to look around without
changing your running direction.

The map view shows the map, the course you are supposed to navigate and the compass. The compass' red needle points north.
You can move, rotate and scale the map. Move map by depressing the left mouse button, rotate map by depressing the
right mouse button. The map can be scaled by depressing both left and right mouse buttons. The start of the course is
marked with a triangle. The controls are marked with circles, then are numbered and connected with lines. You must navigate 
the controls in order to finish the course. You finish the course when you have visited all the controls in order. There is 
no goal as such, the course is finished when you reach the last control of the course.

Cheating: in the map view you can use keyboard commands to show or set your current location in the terrain. Be aware though,
if you use any of these commands, you current run will be disqualified. You can show your current location on map, show the 
route you have taken so far, or set your current location. To show your current location, press the l key on the keyboard. 
Hit the l key again to hide you location. To show your route, hit the r key. To set your location hit and release the s key
and click the mouse on the location on the map where you want to locate yourself.

In addition to the terrain and map view, batb has a set of dialogs to control the game. The dialogs are context sensitive
so that they only present you with the options that are relevent in your current state. You can always hide/show the dialog
by pressing the Esc key on the keyboard.

Creating a new orienteer
------------------------

Creating new events
-------------------
When you hit the "Start singleplayer game" on the main menu, you are presented with a dialog with two panes.
The left pane show a list of all events with one event selected (this is the current event). The right pane
show a list of all runs performed in the selected event, sorted by the time it took to finish the course.

In the left pane you can hit the "Create" button to create a new event. A new dialog is opened that has three panes.
The leftmost pane shows a list of all terrains with one terrain selected (the current terrain), the upper righmost 
pane shows all the maps that are drawn from the current terrain, and the lower righmost pane shows all the courses 
that are set in the current terrain. To create a new event, select any of the existing terrain, map and course, give
name to your event, and hit the "OK" button. You can also create new terrain, map and course, if you so prefer.

When creating a new terrain, you can set several parameters that control the generation of the terrain.

singleplayer game
-----------------

multiplayer game
----------------
In multiplayer game you can play against other batb players over the internet. When playing with other players, 
you can see them in the terrain view as they navigate through the terrain. In a multiplayer event all players
start the course at the same time.

When setting up a multiplyer game, one player has to act as a server hosting the game. The other players are
clients and they join the game. The clients need to know the hostname (or ip-address) and port number of the
server hosting the game.

Building
--------
The following libraries are needed to build on linux (ubuntu 11.10)
libplib-dev
freeglut3
mesa-common-dev
libglew-dev
