/// \file
/// \addtogroup Scene
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#pragma once

#include <bnb/utils/defs.hpp>
#include <string>

namespace bnb { namespace interfaces {

class BNB_EXPORT cubemap {
public:
    virtual ~cubemap() {}

    virtual void set_faces(const std::string & x_positive, const std::string & x_negative, const std::string & y_positive, const std::string & y_negative, const std::string & z_positive, const std::string & z_negative) = 0;

    virtual void load_ktx(const std::string & filename) = 0;

    virtual std::string get_x_positive() const = 0;

    virtual std::string get_x_negative() const = 0;

    virtual std::string get_y_positive() const = 0;

    virtual std::string get_y_negative() const = 0;

    virtual std::string get_z_positive() const = 0;

    virtual std::string get_z_negative() const = 0;
};

} }  // namespace bnb::interfaces
/// @}

