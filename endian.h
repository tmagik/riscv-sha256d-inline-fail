// Copyright (c) 2014-2015 The Bitcoin developers
// where * = (Bit, Lite, PP, Peerunity, Blu, Cat, Solar, URO, ...)
// Previously distributed under the MIT/X11 software license, see the
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
// Copyright (c) 2014-2015 Troy Benjegerdes, under AGPLv3
// Distributed under the Affero GNU General public license version 3
// file COPYING or http://www.gnu.org/licenses/agpl-3.0.html

#ifndef CODECOIN_COMPAT_ENDIAN_H
#define CODECOIN_COMPAT_ENDIAN_H

/* support Debian now, others later */

#include <stdint.h>

#include "byteswap.h"

#if !defined(MAC_OSX)
/* Linux */
#include <endian.h>
#else 
/* MacOS X */
#if defined(WORDS_BIGENDIAN)

inline uint16_t htobe16(uint16_t host_16bits)
{
    return host_16bits;
}

inline uint16_t htole16(uint16_t host_16bits)
{
    return bswap_16(host_16bits);
}

inline uint16_t be16toh(uint16_t big_endian_16bits)
{
    return big_endian_16bits;
}

inline uint16_t le16toh(uint16_t little_endian_16bits)
{
    return bswap_16(little_endian_16bits);
}

inline uint32_t htobe32(uint32_t host_32bits)
{
    return host_32bits;
}

inline uint32_t htole32(uint32_t host_32bits)
{
    return bswap_32(host_32bits);
}

inline uint32_t be32toh(uint32_t big_endian_32bits)
{
    return big_endian_32bits;
}

inline uint32_t le32toh(uint32_t little_endian_32bits)
{
    return bswap_32(little_endian_32bits);
}

inline uint64_t htobe64(uint64_t host_64bits)
{
    return host_64bits;
}

inline uint64_t htole64(uint64_t host_64bits)
{
    return bswap_64(host_64bits);
}

inline uint64_t be64toh(uint64_t big_endian_64bits)
{
    return big_endian_64bits;
}

inline uint64_t le64toh(uint64_t little_endian_64bits)
{
    return bswap_64(little_endian_64bits);
}

#else // WORDS_BIGENDIAN

inline uint16_t htobe16(uint16_t host_16bits)
{
    return bswap_16(host_16bits);
}

inline uint16_t htole16(uint16_t host_16bits)
{
    return host_16bits;
}

inline uint16_t be16toh(uint16_t big_endian_16bits)
{
    return bswap_16(big_endian_16bits);
}

inline uint16_t le16toh(uint16_t little_endian_16bits)
{
    return little_endian_16bits;
}

inline uint32_t htobe32(uint32_t host_32bits)
{
    return bswap_32(host_32bits);
}

inline uint32_t htole32(uint32_t host_32bits)
{
    return host_32bits;
}

inline uint32_t be32toh(uint32_t big_endian_32bits)
{
    return bswap_32(big_endian_32bits);
}

inline uint32_t le32toh(uint32_t little_endian_32bits)
{
    return little_endian_32bits;
}

inline uint64_t htobe64(uint64_t host_64bits)
{
    return bswap_64(host_64bits);
}

inline uint64_t htole64(uint64_t host_64bits)
{
    return host_64bits;
}

inline uint64_t be64toh(uint64_t big_endian_64bits)
{
    return bswap_64(big_endian_64bits);
}

inline uint64_t le64toh(uint64_t little_endian_64bits)
{
    return little_endian_64bits;
}
#endif // WORDS_BIGENDIAN

#endif // MAC_OSX

#endif // BITCOIN_COMPAT_ENDIAN_H
