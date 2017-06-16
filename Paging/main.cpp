/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mmanzanares
 *
 * Created on June 15, 2017, 9:31 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

const int MAXPAGES = 99;
char sequence[MAXPAGES];
int numFrames;
int framesArr[0];


void prompt(){
    cout << "Number of frames: ";
    cin >> numFrames;
}

void getSequence(){
    ifstream infile;
    infile.open("pages.txt");

    if(infile.fail()){
        cerr << "Error opening file" << endl;
        exit(1);
    } 
    
    while(!infile.eof()){
        infile >> sequence;
        cout << sequence;
    }
    cout << endl;
    infile.close();

}  

void initFrames(){
    for(int i=0;i<sizeof(framesArr); i++){
       framesArr[i]=NULL;
    }   
}
int getEmptyFramePos(){
    initFrames();
    for(int frame=1; frame<=numFrames; frame++){
        if(framesArr[frame] == NULL){
            return frame;
        }
    }
    return -1;
}

void opt(char sequence[MAXPAGES]);

void opt(char array[13]){
//    int length=sizeof(sequence);
//    cout << sequence[];
//    cout << length;
    
    for(int i=0; i<13; ++i){
        cout << array[i] << ' ';
        
//        int currPage;
//        int emptyFramePos;
//        currPage=sequence[i];
//        int emptyFramePos=getEmptyFramePos();
    }
    cout << endl;
}

int main() {
    prompt();
    getSequence();
    getEmptyFramePos();
    opt(sequence); //print out sequence
//    
    return 0;
}

