//
// Created by bbs on 24-6-13.
//

#include "AnnexBReader.h"
AnnexB::AnnexBReader::AnnexBReader(std::string path):path_(path) {

}

AnnexB::AnnexBReader::~AnnexBReader() {

}

int AnnexB::AnnexBReader::open() {
    return 0;
}

int AnnexB::AnnexBReader::close() {
    return 0;
}

AnnexB::NALU AnnexB::AnnexBReader::NaluReader(NALU &nalu) {

    while(1){

    }
    return AnnexB::NALU();
};


