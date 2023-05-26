#include "rectangle.h"
#include "rhombus.h"
#include "right_trapezoid.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#define N 100    //dimension of polygon pointer array


/// @brief menu with choice
/// @return choice
//int menu();     
void ClassCreation(); //calling a function that verify object creation

/// @brief lets you create a polygon (or more) and draw it
int main()
{
    
    ClassCreation();


    int test = 0;


        cout << endl << flush;

    cout << "Choose a number to show different tests" << endl;
    cout << "Press 1 to test classes with negative value" << endl;
    cout << "Press  to visualize some issue" << endl;
    cout << "Press  to test classes with zero value" << endl;
    cout << "Press 4 to show the code response to a char instead of a float as input " << endl;
    cout << endl << flush;

    scanf_s("%d", &test);

    Polygon* polygonarray[N] = { 0 };

    switch (test) {
    case 1: //checking the classes with negative values
        //checking the Rhombus
        polygonarray[0] = new Rhombus();

        float h, v;
        h = -1;
        v = -4;
        polygonarray[0] = new Rhombus(h, v);
        cout << "Polygon Rhombus" << endl;
        cout << endl << flush;

        polygonarray[0]->Draw();
        cout << "Area is:" << polygonarray[0]->GetArea() << endl;
        cout << endl << flush;

        cout << "Perimeter is:" << polygonarray[0]->GetPerimeter() << endl << endl;
        cout << endl << flush;

        delete polygonarray[0];
        //checking the Rectangle
        polygonarray[1] = new Rectangle();

        float l, w;
        l = -1;
        w = -4;
        polygonarray[1] = new Rectangle(l, w);
        cout << "Polygon Rectangle" << endl;
        cout << endl << flush;

        polygonarray[1]->Draw();
        cout << "Area is:" << polygonarray[1]->GetArea() << endl;
        cout << endl << flush;

        cout << "Perimeter is:" << polygonarray[1]->GetPerimeter() << endl << endl;
        cout << endl << flush;

        delete polygonarray[1];

        //checking the  RightTrapezoid
        polygonarray[2] = new Right_trapezoid();

        float ts, height, bs;
        height = -1;
        ts = -4;
        bs = -2;
        polygonarray[2] = new Right_trapezoid(ts, height, bs);
        cout << "Polygon RightTrapezoid" << endl;
        cout << endl << flush;

        polygonarray[2]->Draw();
        cout << "Area is:" << polygonarray[2]->GetArea() << endl;
        cout << endl << flush;

        cout << "Perimeter is:" << polygonarray[2]->GetPerimeter() << endl << endl;
        cout << endl << flush;

        delete polygonarray[2];
        break;

    case 2: //checking the class with 0 input

        //checking the Rhombus
        polygonarray[0] = new Rhombus();

        h = 0;
        v = 0;
        polygonarray[0] = new Rhombus(h, v);
        cout << "Polygon Rhombus" << endl;
        polygonarray[0]->Draw();
        cout << "Area is:" << polygonarray[0]->GetArea() << endl;
        cout << endl << flush;

        cout << "Perimeter is:" << polygonarray[0]->GetPerimeter() << endl << endl;
        cout << endl << flush;

        cout << "Rhombus Destroyer" << endl;
        cout << endl << flush;


        delete polygonarray[0];

        //checking the Rectangle
        polygonarray[1] = new Rectangle();

        l = 0;
        w = 0;
        polygonarray[1] = new Rectangle(l, w);
        cout << "Polygon Rectangle" << endl;
        polygonarray[1]->Draw();
        cout << "Area is:" << polygonarray[1]->GetArea() << endl;
        cout << endl << flush;

        cout << "Perimeter is:" << polygonarray[1]->GetPerimeter() << endl << endl;
        cout << endl << flush;

        cout << "Rectangle Destroyer" << endl;
        cout << endl << flush;


        delete polygonarray[1];

        // cheching the RightTrapezoid
        polygonarray[2] = new Right_trapezoid();

        height = 0;
        ts = 0;
        bs = 0;
        polygonarray[2] = new Right_trapezoid(ts, height, bs);
        cout << "Polygon RightTrapezoid" << endl;
        polygonarray[2]->Draw();
        cout << "Area is:" << polygonarray[2]->GetArea() << endl;
        cout << endl << flush;

        cout << "Perimeter is:" << polygonarray[2]->GetPerimeter() << endl << endl;
        cout << endl << flush;

        cout << "RightTrapezoid Destroyer" << endl;
        cout << endl << flush;


        delete polygonarray[2];

        break;

    case 3: //case 3, checking if the class rightrapezoid check that the value can rappresent an actual trapezoid

        polygonarray[0] = new Right_trapezoid();
        height = 5;
        ts = 10;
        bs = 10;
        polygonarray[0] = new Right_trapezoid(ts, height, bs);
        cout << "Polygon RightTrapezoid" << endl;
        polygonarray[0]->Draw();
        cout << "Area is:" << polygonarray[2]->GetArea() << endl;
        cout << endl << flush;

        cout << "Perimeter is:" << polygonarray[0]->GetPerimeter() << endl << endl;
        cout << endl << flush;

        cout << "RightTrapezoid Destroyer" << endl;
        cout << endl << flush;

        delete polygonarray[2];
        break;


    case 4: //case 3, checking if the class rightrapezoid check that the value can rappresent an actual trapezoid

        polygonarray[0] = new Right_trapezoid();
        cout << "PLEASE, type a letter to test" << endl;
        cout << endl << flush;
        scanf_s("%f %f %f", &ts, &height, &bs);
        polygonarray[0] = new Right_trapezoid(ts, height, bs);
        cout << "Polygon RightTrapezoid" << endl;
        polygonarray[0]->Draw();
        cout << "Area is:" << polygonarray[0]->GetArea() << endl;
        cout << "Perimeter is:" << polygonarray[0]->GetPerimeter() << endl << endl;
        cout << "RightTrapezoid Destroyer" << endl;
        delete polygonarray[2];
        break;

    };

}

void ClassCreation() {

    cout << "Default Creation" << endl;
    cout << endl << flush;
   
    Right_trapezoid obj1;
    Rhombus obj2;
    Rectangle obj3;

        obj1.Draw();
        obj2.Draw(); //THERE IS AN ERROR IN THE VALUE OF THE RHOMBUS, THEY ARE NOT LIKE THEY SHOULD
        obj3.Draw();


        cout << "Destructor" << endl;
        cout << endl << flush;  


        cout << "Testing the assignation of the value" << endl;
        cout << endl << flush;

        Right_trapezoid obj4;
        Rhombus obj5;
        Rectangle obj6;
        float a, b, c;
        a = 10;
        b = 10;
        c = 7;
        obj4.SetDim(a,b,c);


        float d = 7;
        float e = 8;
        obj5.SetDim(a, b);

        float f,g ;
        f = 10;
        g = 10;
        obj5.SetDim(f,g);


        //print the trap
        obj4.Draw();
        cout << endl << flush;
        //print the rhomb
        obj5.Draw();
            cout << endl << flush;
            //print the rect
        obj6.Draw();
        cout << endl << flush;
        ///////////////////////////////////////
        //EVERYTHING WORKS ALMOST FINE
        ///////////////////////////////////////
};



/////////////////////////////////////
//THIS WAS THE PREVIOUS MAIN AND INTERFACE
///////////////////////////////////////////
    /*
    Polygon* polygonarray[N] = { 0 };               //all polygon pointers array inizialized to 0 
    int index = 0;
    while (true) {
        switch (menu())

        {
        case 1:
            float l, w;
            cout << "Insert length and width: ";

                   scanf_s("%f %f", &l, &w);
       
            cin.get();
            polygonarray[index] = new Rectangle(l, w);
            index++;
            break;

        case 2:
            float h, v;
            cout << "Insert horizontal diagonal and vertical diagonal: ";
            scanf_s("%f %f", &h, &v);
            cin.get();
            polygonarray[index] = new Rhombus(h, v);
            index++;
            break;

        case 3:
            float ts, he, bs;
            cout << "Insert top side, height and bottom side: ";
            scanf_s("%f %f %f", &ts, &he, &bs);
            cin.get();
            polygonarray[index] = new Right_trapezoid(ts, he, bs);
            index++;
            break;

        case 4:
            cout << "There are " << index << " polygons to be drawn." << endl;
            cout << "---------------------------------" << endl;
            for (int i = 0; i <= index; i++) {
                if (polygonarray[i] != NULL)
                {
                    cout << "Polygon n." << i + 1 << endl;
                    polygonarray[i]->Draw();
                    cout << "Area is:" << polygonarray[i]->GetArea() << endl;
                    cout << "Perimeter is:" << polygonarray[i]->GetPerimeter() << endl << endl;

                }
            }
            break;

        case 0:
            for (int i = 0; i <= index; i++) {
           
                delete polygonarray[i];

            }

            cout << endl;
            cout << "Shutting down..." << endl;
            return;



        default:
            cout << "Bad choice! Please try again.\n";
        }
    };
}
    int menu()
    {
        int choice = 0;
        cout << "*----------------------------*" << endl;
        cout << "| Choose an option, please:  |" << endl;
        cout << "*----------------------------*" << endl;
        cout << "| 1: Create a rectangle      |" << endl;
        cout << "| 2: Create a rhombus        |" << endl;
        cout << "| 3: Create a right trapezoid|" << endl;
        cout << "| 4: Draw all                |" << endl;
        cout << "| 0: exit                    |" << endl;
        cout << "*----------------------------*" << endl;
        cout << endl;

        scanf_s("%d", &choice);
        cin.get();
        return choice;
    };
    */