#ifndef IMAGECONTAINER_HPP
#define IMAGECONTAINER_HPP

#include <gui_generated/containers/imageContainerBase.hpp>
#include <BitmapDatabase.hpp>

class imageContainer : public imageContainerBase
{
public:
    imageContainer();
    virtual ~imageContainer() {}

    virtual void initialize();
	
	void setNumber(int no)
    {
        switch (no % 3)
        {
        case 0:
        image1.setBitmap(Bitmap(BITMAP_DOWNLOAD_REMOVEBG_PREVIEW_ID));
            break;
        case 1:
        image1.setBitmap(Bitmap(BITMAP_DOWNLOAD1_REMOVEBG_PREVIEW_ID));
            break;
        case 2:
        image1.setBitmap(Bitmap(BITMAP_SNAPSHOTIMAGEHANDLER_214572791_2_REMOVEBG_PREVIEW_ID));
            break;
        }
    }
	
protected:
};

#endif // IMAGECONTAINER_HPP
