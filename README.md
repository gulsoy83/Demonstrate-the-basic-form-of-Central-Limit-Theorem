# Demonstrate-the-basic-form-of-Central-Limit-Theorem

NOTE: To properly see this page, select [raw](https://raw.githubusercontent.com/gulsoy83/Demonstrate-the-basic-form-of-Central-Limit-Theorem/main/README.md) display option. 

In this programming assignment, you will demonstrate the basic form of Central Limit Theorem (CLT). The classical CLT states that givenn independent and identically distributed (i.i.d.) random variables, their normalized sum approximates a normal distribution, and as n goes to infinity it will approach to a standard normal distribution.To demonstrate this, we will roll two dice simultaneously and add up their resulting face values. We will show that the probability distribution of this sum will approximate a normal distributioneven with n = 2 even if the probability distribution of a single die is uniform and is nowhere near normal.
The steps of the programming assignment are summarized below:
1. Run a 10000 random dice rolling simulation with 1 die only where at the end of each roll, you count the frequency of the resulting face value. Then, draw a bar graph of frequency versus face value made of ‘*’ symbols as shown below. The resulting graph will be close to a uniform distribution as below:

<img width="145" alt="1" src="https://github.com/gulsoy83/Demonstrate-the-basic-form-of-Central-Limit-Theorem/assets/46426033/719abb76-136e-4bd8-99c4-daf8210c1533">
```
*  *  * * 
* * * * * * 
* * * * * * 
* * * * * * 
* * * * * * 
* * * * * * 
1 2 3 4 5 6
```
2. Now instead of one die, run a simulation of 10000 rolls of two dice simultaneously and at the end of each roll, sum up the values of the resulting face values of the two dice. For instance, if one die reads 2, the other reads 6, the sum will be 8. Then, draw a bar graph of frequency versus possible face value sums as shown below (the sum of two dice will be between 2-12). The resulting graph will look like a normal distribution (bell shaped curve) as below:

<img width="200" alt="2" src="https://github.com/gulsoy83/Demonstrate-the-basic-form-of-Central-Limit-Theorem/assets/46426033/47299ebb-8b31-4ed4-b921-e90d96467f32">


          *           
          *           
        * * *         
        * * *         
        * * *         
      * * * * *       
      * * * * *       
      * * * * *       
    * * * * * * *     
    * * * * * * *     
    * * * * * * *     
  * * * * * * * *  *   
  * * * * * * * *  *   
* * * * * * * * *  *  *
* * * * * * * * *  *  * 
2 3 4 5 6 7 8 9 10 11 12

Note: You need to determine a proper scale factor x for your graph to make a single ‘*’ indicate x number of dice rolls. This scale is up to you. Experiment with different x values so that your graph looks compact and neat.

***
Bonus:
<img width="275" alt="3" src="https://github.com/gulsoy83/Demonstrate-the-basic-form-of-Central-Limit-Theorem/assets/46426033/d134b1ac-5da5-4846-826b-5bd8dea70101">

