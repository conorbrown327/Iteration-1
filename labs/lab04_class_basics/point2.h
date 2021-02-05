class Point2
{
    public:
        Point2();
        Point2(float x, float y);
        void Print();
        float DistanceBetween(Point2 p);
        int Quadrant();
    private:
        float xPos;
        float yPos;
};