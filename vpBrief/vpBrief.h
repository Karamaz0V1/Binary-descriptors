/***************************************************************************
 *
 * First BRIEF implementation with Visp
 *
 * Author: Florent Guiotte <guiotte.florent@gmail.com>
 *
 **************************************************************************/

#ifndef __VPBRIEF_H__
#define __VPBRIEF_H__

#include <vector>
#include <visp/vpImage.h>
#include <bitset>
#define NB_PAIRS 16 // TODO: compilation option

using std::vector;

class vpBrief {
    public :
        vpBrief(int nb_pairs=128, int patch_size=10); // Refactor nb_pairs = sizeof(type[n])
        std::bitset<NB_PAIRS> * compute(const vpImage<unsigned char> & image, const vector<vpImagePoint> & keypoints); // TODO Refactor take into account user defined nb_pairs (see boost, bitmagic)
        ~vpBrief();

    private :
        int * pairs;
        const int nb_pairs;
        int patch_size;
        //const std::size_t N;
        void descriptorBit(const vpImage<unsigned char> & image, std::bitset<NB_PAIRS> & descriptor, vector<vpImagePoint>::const_iterator & it, int * pairs, int i);
};

#endif /* __VPBRIEF_H__ */
