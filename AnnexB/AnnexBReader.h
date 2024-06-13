//
// Created by bbs on 24-6-13.
//

#ifndef H264_ANNEXBREADER_H
#define H264_ANNEXBREADER_H

#include <string>
namespace AnnexB{


class NALU{

};

class AnnexBReader {
public:
    AnnexBReader(std::string filepath);
    ~AnnexBReader();

    int open();
    int close();
    NALU NaluReader(NALU &nalu);
private:
    std::string path_;
};




}



#endif //H264_ANNEXBREADER_H
