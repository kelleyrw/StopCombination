#ifndef SWISSCROSSINTERPOLATE_H 
#define SWISSCROSSINTERPOLATE_H 

class TH2D;

// SwissCrossInterpolate() implements a two step smearing. Its arguments are the histogram that should be interpolated
// and the direction in which to interpolate first (normally the direction in which the histogram changes 
// most slowly)
// Allowed types are SW (equivalently NE), SE (equivalently NW), NS, EW
// The second interpolation uses a "Swiss Cross" average (non-zero N, S, E, W neighbors)

struct Direction
{
    enum value_type
    {
        s,
        sw,
        se,
        sn,
        n,
        ne,
        nw,
        ns,
        e,
        w,
        ew,
        we,
        santa_fe,

        static_size
    };
};

// interpolation
TH2D SwissCrossInterpolate(const TH2D& hist, const Direction::value_type first_step_dir);

// increases binning by factor of two and interpolates in specified direction
TH2D SwissCrossRebin(const TH2D& hist, const Direction::value_type first_step_dir);

#endif // SWISSCROSSINTERPOLATE_H 
