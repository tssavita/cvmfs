/**
 * This file is part of the CernVM File System.
 */

#ifndef CVMFS_NFS_MAPS_H_
#define CVMFS_NFS_MAPS_H_

#include <string>
#include "hash.h"
#include "shortstring.h"

namespace nfs_maps {

bool Init(const std::string &leveldb_dir, const uint64_t root_inode);
void Fini();

uint64_t GetInode(const PathString &path);
void GetPath(const uint64_t inode, PathString *path);

}  // namespace nfs_maps

#endif  // CVMFS_NFS_MAPS_H_