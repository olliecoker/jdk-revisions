/*
 * Copyright 2009-2010 Sun Microsystems, Inc.  All Rights Reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Sun Microsystems, Inc., 4150 Network Circle, Santa Clara,
 * CA 95054 USA or visit www.sun.com if you need additional information or
 * have any questions.
 *
 */

// ciCPCache
//
// This class represents a constant pool cache.
//
// Note: This class is called ciCPCache as ciConstantPoolCache is used
// for something different.
class ciCPCache : public ciObject {
public:
  ciCPCache(constantPoolCacheHandle cpcache) : ciObject(cpcache) {}

  // What kind of ciObject is this?
  bool is_cpcache() const { return true; }

  // Get the offset in bytes from the oop to the f1 field of the
  // requested entry.
  size_t get_f1_offset(int index);

  bool is_f1_null_at(int index);

  void print();
};
