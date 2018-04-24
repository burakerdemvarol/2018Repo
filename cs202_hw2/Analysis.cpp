/**
* Title: Binary Search Trees
* Author: Burak Erdem Varol
* ID: 21202534
* Section: 3
* Assignment: 2
* Description: Height Analysis implementation is here. */
#include <iostream>
#include <stdlib.h>
#include "PbBST.h"
using namespace std;

void heightAnalysis() {
    PbBST deneme;
    // 20000 value created randomly and filled in array
    int array[20000];

    for (int i = 0; i < 20000; i++) {
        array[i] = static_cast<int>(random());
    }
    // Insertion Part 1000 to 20000
    cout << "Insertion Part And Results" << endl;
    for (int j = 0; j < 1000; j++) {
        deneme.insert(array[j]);
    }
    cout << "After 1000 insertion binary search tree height is :" << deneme.getHeight() << endl;

    for (int j = 1000; j < 2000; j++) {
        deneme.insert(array[j]);
    }
    cout << "After 2000 insertion binary search tree height is :" << deneme.getHeight() << endl;

    for (int j = 2000; j < 3000; j++) {
        deneme.insert(array[j]);
    }
    cout << "After 3000 insertion binary search tree height is :" << deneme.getHeight() << endl;

    for (int j = 3000; j < 4000; j++) {
        deneme.insert(array[j]);
    }
    cout << "After 4000 insertion binary search tree height is :" << deneme.getHeight() << endl;

    for (int j = 4000; j < 5000; j++) {
        deneme.insert(array[j]);
    }
    cout << "After 5000 insertion binary search tree height is :" << deneme.getHeight() << endl;

    for (int j = 5000; j < 6000; j++) {
        deneme.insert(array[j]);
    }
    cout << "After 6000 insertion binary search tree height is :" << deneme.getHeight() << endl;
    for (int j = 6000; j < 7000; j++) {
        deneme.insert(array[j]);
    }
    cout << "After 7000 insertion binary search tree height is :" << deneme.getHeight() << endl;
    for (int j = 7000; j < 8000; j++) {
        deneme.insert(array[j]);
    }
    cout << "After 8000 insertion binary search tree height is :" << deneme.getHeight() << endl;
    for (int j = 8000; j < 9000; j++) {
        deneme.insert(array[j]);
    }
    cout << "After 9000 insertion binary search tree height is :" << deneme.getHeight() << endl;
    for (int j = 9000; j < 10000; j++) {
        deneme.insert(array[j]);
    }
    cout << "After 10000 insertion binary search tree height is :" << deneme.getHeight() << endl;
    for (int j = 10000; j < 11000; j++) {
        deneme.insert(array[j]);
    }
    cout << "After 11000 insertion binary search tree height is :" << deneme.getHeight() << endl;
    for (int j = 11000; j < 12000; j++) {
        deneme.insert(array[j]);
    }
    cout << "After 12000 insertion binary search tree height is :" << deneme.getHeight() << endl;
    for (int j = 12000; j < 13000; j++) {
        deneme.insert(array[j]);
    }
    cout << "After 13000 insertion binary search tree height is :" << deneme.getHeight() << endl;
    for (int j = 13000; j < 14000; j++) {
        deneme.insert(array[j]);
    }
    cout << "After 14000 insertion binary search tree height is :" << deneme.getHeight() << endl;
    for (int j = 14000; j < 15000; j++) {
        deneme.insert(array[j]);
    }
    cout << "After 15000 insertion binary search tree height is :" << deneme.getHeight() << endl;
    for (int j = 15000; j < 16000; j++) {
        deneme.insert(array[j]);
    }
    cout << "After 16000 insertion binary search tree height is :" << deneme.getHeight() << endl;
    for (int j = 16000; j < 17000; j++) {
        deneme.insert(array[j]);
    }
    cout << "After 17000 insertion binary search tree height is :" << deneme.getHeight() << endl;
    for (int j = 17000; j < 18000; j++) {
        deneme.insert(array[j]);
    }
    cout << "After 18000 insertion binary search tree height is :" << deneme.getHeight() << endl;
    for (int j = 18000; j < 19000; j++) {
        deneme.insert(array[j]);
    }
    cout << "After 19000 insertion binary search tree height is :" << deneme.getHeight() << endl;
    for (int j = 19000; j < 20000; j++) {
        deneme.insert(array[j]);
    }
    cout << "After 20000 insertion binary search tree height is :" << deneme.getHeight() << endl;

    cout<<endl;

    cout<<endl;

    // Deletion Part 1000 to 20000 items deleted
    cout << "Deletion Part And Results" << endl;

    for(int i = 0; i < 1000; i++){
        deneme.deleted(array[i]);
    }
    cout << "After 1000 deletion binary search tree height is :" << deneme.getHeight() << endl;
    for(int i = 1000; i < 2000; i++){
        deneme.deleted(array[i]);
    }
    cout << "After 2000 deletion binary search tree height is :" << deneme.getHeight() << endl;
    for(int i = 2000; i < 3000; i++){
        deneme.deleted(array[i]);
    }
    cout << "After 3000 deletion binary search tree height is :" << deneme.getHeight() << endl;
    for(int i = 3000; i < 4000; i++){
        deneme.deleted(array[i]);
    }
    cout << "After 4000 deletion binary search tree height is :" << deneme.getHeight() << endl;
    for(int i = 4000; i < 5000; i++){
        deneme.deleted(array[i]);
    }
    cout << "After 5000 deletion binary search tree height is :" << deneme.getHeight() << endl;
    for(int i = 5000; i < 6000; i++){
        deneme.deleted(array[i]);
    }
    cout << "After 6000 deletion binary search tree height is :" << deneme.getHeight() << endl;
    for(int i = 6000; i < 7000; i++){
        deneme.deleted(array[i]);
    }
    cout << "After 7000 deletion binary search tree height is :" << deneme.getHeight() << endl;
    for(int i = 7000; i < 8000; i++){
        deneme.deleted(array[i]);
    }
    cout << "After 8000 deletion binary search tree height is :" << deneme.getHeight() << endl;
    for(int i = 8000; i < 9000; i++){
        deneme.deleted(array[i]);
    }
    cout << "After 9000 deletion binary search tree height is :" << deneme.getHeight() << endl;
    for(int i = 9000; i < 10000; i++){
        deneme.deleted(array[i]);
    }
    cout << "After 10000 deletion binary search tree height is :" << deneme.getHeight() << endl;
    for(int i = 10000; i < 11000; i++){
        deneme.deleted(array[i]);
    }
    cout << "After 11000 deletion binary search tree height is :" << deneme.getHeight() << endl;
    for(int i = 11000; i < 12000; i++){
        deneme.deleted(array[i]);
    }
    cout << "After 12000 deletion binary search tree height is :" << deneme.getHeight() << endl;
    for(int i = 12000; i < 13000; i++){
        deneme.deleted(array[i]);
    }
    cout << "After 13000 deletion binary search tree height is :" << deneme.getHeight() << endl;
    for(int i = 13000; i < 14000; i++){
        deneme.deleted(array[i]);
    }
    cout << "After 14000 deletion binary search tree height is :" << deneme.getHeight() << endl;
    for(int i = 14000; i < 15000; i++){
        deneme.deleted(array[i]);
    }
    cout << "After 15000 deletion binary search tree height is :" << deneme.getHeight() << endl;
    for(int i = 15000; i < 16000; i++){
        deneme.deleted(array[i]);
    }
    cout << "After 16000 deletion binary search tree height is :" << deneme.getHeight() << endl;
    for(int i = 16000; i < 17000; i++){
        deneme.deleted(array[i]);
    }
    cout << "After 17000 deletion binary search tree height is :" << deneme.getHeight() << endl;
    for(int i = 17000; i < 18000; i++){
        deneme.deleted(array[i]);
    }
    cout << "After 18000 deletion binary search tree height is :" << deneme.getHeight() << endl;
    for(int i = 18000; i < 19000; i++){
        deneme.deleted(array[i]);
    }
    cout << "After 19000 deletion binary search tree height is :" << deneme.getHeight() << endl;
    for(int i = 19000; i < 20000; i++){
        deneme.deleted(array[i]);
    }
    cout << "After 20000 deletion binary search tree height is :" << 0 << endl;


}
