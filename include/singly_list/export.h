#ifndef EXPORT_H
#define EXPORT_H

#ifdef __cplusplus
extern "C" {
#endif // #ifdef __cplusplus

#ifndef C_SINGLY_LIST_STATIC_DEFINE
#  include <c_singly_list/export_shared.h>
#else
#  include <c_singly_list/export_static.h>
#endif // #ifndef C_SINGLY_LIST_STATIC_DEFINE

#ifdef __cplusplus
}
#endif // #ifdef __cplusplus

#endif // #ifndef EXPORT_H

