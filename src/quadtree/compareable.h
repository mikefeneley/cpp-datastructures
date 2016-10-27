class Compareable
{
    public:
        // Returns the x-coordinate field of the user data object.
        virtual long getX();
        
        // Returns the y-coordinate field of the user data object.
        virtual long getY();


        // Returns indicator of the direction to the user data object from the
        // location (X, Y) specified by the parameters.
        // The indicators are defined in the enumeration Direction, and are used
        // as follows:
        //
        // NE: vector from (X, Y) to user data object has a direction in the
        // range [0, 90) degrees (relative to the positive horizontal axis
        // NW: same as above, but direction is in the range [90, 180)
        // SW: same as above, but direction is in the range [180, 270)
        // SE: same as above, but direction is in the range [270, 360)
        // NOQUADRANT: location of user data object is equal to (X, Y)
        Direction directionFrom(long x, long y);
        

        // Returns indicator of which quadrant of the rectangle specified by the
        // parameters that user data object lies in.
        // The indicators are defined in the enumeration Direction, and are used
        // as follows, relative to the center of the rectangle:
        //
        // NE: user data object lies in NE quadrant, including non-negative
        // x-axis, but not the positive y-axis
        // NW: user data object lies in the NW quadrant, including the
        // positive y-axis, but not the negative x-axis
        //  SW: user data object lies in the SW quadrant, including the
        // negative x-axis, but not the negative y-axis
        // SE: user data object lies in the SE quadrant, including the
        Direction inQuadrant(double xLo, double xHi, double yLo, double yHi);


        // Returns true iff the user data object lies within or on the boundaries
        // of the rectangle specified by the parameters.
        bool inBox(double xLo, double xHi, double yLo, double yHi);

};
