
class Solution {
    void DFS(vector<vector<int>>& image, int sr, int sc,int oldColor, int newColor)
    {
        if(sr<0 || sc<0 || sr==image.size() || sc==image[0].size() || image[sr][sc]!=oldColor )
            return;
        image[sr][sc] = newColor;
        DFS(image, sr+1, sc, oldColor, newColor);
        DFS(image, sr-1, sc, oldColor, newColor);
        DFS(image, sr, sc+1, oldColor, newColor);
        DFS(image, sr, sc-1, oldColor, newColor);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor)
            return image;
        DFS(image,sr, sc,image[sr][sc], newColor);
        return image;
    }
};
