# Tower Of Hanoi :
    towerOfHanoi(int n,char src,char help,char dest);

## Example Problem :
*n=4*

--- 
FOR EVERY N :
--
- N - 1 disks from SRC to HELP ROD       
   
    { towerOfHanoi(n-1,src,dest,help); }
- Move Nth disk to from SRC to DEST. ROD
- N - 1 disks from HELP to DEST. ROD 
   
    { towerOfHanoi(n-1,help,src,dest); }

---
Base Condition :
-- 
n==1 
    Move 1st from src to dest 


---
# Code
    (4,A,B,C)
    {
        (3,A,C,B){
            (2,A,B,C){
                (1,A,C,B){
                    Move 1st From A to B
                }
                Move 2nd from A to C
                (1,B,A,C){
                    Move 1st from B to C
                }
            }  
            Move 3rd From A to B
            (2,C,A,B){
                (1,C,B,A){
                    Move 1st from C to A
                }
                Move 2nd from C to B
                (1,A,C,B){
                    Move 1st from A to B
                }
            }
        }

        Move 4th from A to C
        
        (3,B,A,C){
            (2,B,C,A){
                (1,B,A,C){
                    Move 1st from B to C
                }
                Move 2nd from B to A
                (1,C,B,A){
                    Move 1st from C to A
                }
            }
            Move 3rd from B to C
            (2,A,B,C){
                (1,A,C,B){
                    Move 1st from A to B
                }
                Move 2nd from A to C
                (1,B,A,C){
                    Move 1st from B to C
                }
            }
        } 

    }





