#ifndef _DLGEVENT_H
#define _DLGEVENT_H

#include <iostream>
#include "database.h"


class DlgEvent
    : public DlgBase, public DatabaseObserver
{
 private:
    puListBox* list_box;
    puSlider*  slider;
    puOneShot* new_button;
    //puOneShot* quick_create_button;
    puOneShot* delete_button;
    puOneShot* ok_button;
    puOneShot* cancel_button;

    void init(int width, int height);

    static void new_cb(puObject *);
    static void new_cancel_cb(puObject *);

    //static void quick_create_cb(puObject *);

    static void delete_cb(puObject *); 
    static void delete_ok_cb(puObject *);
    static void delete_cancel_cb(puObject *);

    static void handle_slider(puObject* slider);
    static void handle_select(puObject*);

    int updateEvents(void* callData) const;

 public:

    DlgEvent(DlgBase* parent, int posx, int posy, int width, int height)
	: DlgBase(parent, posx, posy)
    {
	init(width, height);
    }
	
    ~DlgEvent();

    void reshape(int x, int y, int width, int height);
    void print() { std::cout << "DlgEvent\n"; }
};

#endif // _DLGEVENT_H
