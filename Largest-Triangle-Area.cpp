class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        //from discussions 
        //You can calculate the area of a triangle constructed on 3 points (x1,y1), (x2,y2), and (x3,y3) using
        //Shoelace's Formula (also known as Gauss's area formula and surveyor's formula):
        // area = 0.5 * abs();
        double max = 0;
        for(int i = 0 ; i < points.size() ; i++)
        {
            for(int j = 0; j < points.size() ; j++)
            {
                for(int z = 0 ; z < points.size() ; z++)
                {
                    double area = 0.5 * abs(points[i][0] * (points[j][1] - points[z][1]) + 
                                            points[j][0] * (points[z][1] - points[i][1]) + 
                                            points[z][0] * (points[i][1] - points[j][1]));

                    if(area > max) max = area;
                }
            }
        }

        return max;
    }
};