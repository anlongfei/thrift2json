
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : anlongfei
#   Email         : anlongfei@meituan.com
#   File Name     : main.cpp
#   Last Modified : 2018-11-21 14:20
#   Describe      :
#
# ====================================================*/

#include <iostream>
#include <protocol/TBinaryProtocol.h>
#include <protocol/TJSONProtocol.h>
#include <transport/TBufferTransports.h>

#include "gen-cpp/student_types.h"

using namespace std;

template <class T>
std::string serializeToJSON(const T& r) {
    boost::shared_ptr<apache::thrift::transport::TMemoryBuffer> buffer(new apache::thrift::transport::TMemoryBuffer);
    boost::shared_ptr<apache::thrift::protocol::TJSONProtocol> protocol(new apache::thrift::protocol::TJSONProtocol(buffer));
    r.write(protocol.get());
    return buffer->getBufferAsString();
}

int main() {
    SharedStruct stu;
    stu.__set_num(123);
    stu.__set_name("alf");
    std::cout << serializeToJSON(stu) << std::endl;
    return 0;
}
