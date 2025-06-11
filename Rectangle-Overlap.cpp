class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        

        //I tried here to cover all possible cases of overlapping , that is like you make a shit exactly !!
        // making shit is more easier 
        //my brain is a shit too

        // //rec1 is the reference 
        // //its coordinates 
        // // [0],[3]..........[2],[3]
        // // -------          -------
        // // -------          -------
        // // [0],[1]..........[2],[1]

        // if(rec1[0] == rec2[0] && rec1[1] == rec2[1] && rec1[2] == rec2[2] && rec1[3] == rec2[3])
        // {
        //     return true;
        // }

        // //-----------------------------------------------------------------

        // if(rec2[0] == rec1[2] && rec2[2] >= rec1[2])
        // {
        //     return false;
        // }

        // if(rec2[2] == rec1[0] && rec2[0] <= rec1[0])
        // {
        //     return false;
        // }

        // if(rec2[3] == rec1[1] && rec2[1] <= rec1[1])
        // {
        //     return false;
        // }

        // if(rec2[1] == rec1[3] && rec2[3] >= rec1[1])
        // {
        //     return false;
        // }
        // //-------


        // if(rec2[0] == rec1[0] && rec2[2] > rec1[0])
        // {
        //     return true;
        // }

        // if(rec2[2] == rec1[2] && rec2[0] < rec1[2])
        // {
        //     return true;
        // }

        // if(rec2[1] == rec1[1] && rec2[3] > rec1[1])
        // {
        //     return true;
        // }

        // if(rec2[3] == rec1[3] && rec2[1] < rec1[3])
        // {
        //     return true;
        // }
        // //-----------------------------------------------------------------




        // //-----------------------------------------------------------------

        // // check for every coordinates of rec2
        // if(rec2[0] > rec1[0] && rec2[0] < rec1[2] && rec2[1] > rec1[1] && rec2[1] < rec1[3])
        // {
        //     return true;
        // }

        // if(rec2[0] > rec1[0] && rec2[0] < rec1[2] && rec2[3] > rec1[1] && rec2[3] < rec1[3])
        // {
        //     return true;
        // }

        // if(rec2[2] > rec1[0] && rec2[2] < rec1[2] && rec2[1] > rec1[1] && rec2[1] < rec1[3])
        // {
        //     return true;
        // }

        // if(rec2[2] > rec1[0] && rec2[2] < rec1[2] && rec2[3] > rec1[1] && rec2[3] < rec1[3])
        // {
        //     return true;
        // }
        // //-----------------------------------------------------------------
        // bool case1 = false;
        // bool case2 = false;
        // bool case3 = false;
        // bool case4 = false;

        // if(rec2[0] >= rec1[0] && rec2[0] <= rec1[2] && rec2[1] >= rec1[1] && rec2[1] <= rec1[3])
        // {
        //     case1 = true;
        // }

        // if(rec2[0] >= rec1[0] && rec2[0] <= rec1[2] && rec2[3] >= rec1[1] && rec2[3] <= rec1[3])
        // {
        //     case2 = true;
        // }

        // if(rec2[2] >= rec1[0] && rec2[2] <= rec1[2] && rec2[1] >= rec1[1] && rec2[1] <= rec1[3])
        // {
        //     case3 = true;
        // }

        // if(rec2[2] >= rec1[0] && rec2[2] <= rec1[2] && rec2[3] >= rec1[1] && rec2[3] <= rec1[3])
        // {
        //     case4 = true;
        // }

        // if(case1 && case2)
        // {
        //     return true;
        // }

        // if(case1 && case3)
        // {
        //     return true;
        // }

        // if(case1 && case4)
        // {
        //     return true;
        // }

        // if(case2 && case3)
        // {
        //     return true;
        // }

        // if(case2 && case4)
        // {
        //     return true;
        // }

        // if(case3 && case4)
        // {
        //     return true;
        // }

        // if(rec2[0] > rec1[0] && rec2[0] < rec1[2] && rec2[2] > rec1[0] && rec2[2] < rec1[2])
        // {
        //     return true;
        // }

        // if(rec2[1] > rec1[1] && rec2[1] < rec1[3] && rec2[3] > rec1[1] && rec2[3] < rec1[3])
        // {
        //     return true;
        // }

        // return false;

        return rec1[0] < rec2[2] && rec1[1] < rec2[3] && rec1[2] > rec2[0] && rec1[3] > rec2[1];



    }
};