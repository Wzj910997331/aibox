
#ifndef __CVIAPP_TYPEDEF_H_
#define __CVIAPP_TYPEDEF_H_

#include <stdint.h>

#define CVIAPP_PREVIEW_MAX_IPC_VIEW  9
#define CVIAPP_INVALID_CHAN_ID       0xFF

/* The define for the length of cvi app string */
#define CVIAPP_LABEL_STR_MAX_LEN         128
#define CVIAPP_TEXT_STR_MAX_LEN          256
#define CVIAPP_TEXT_LARGE_STR_MAX_LEN    512
#define CVIAPP_KEY_STR_MAX_LEN           128

#define CVIAPP_CONNECTED_IPC_MAX_NB      128 /* The max num of IPC we can connected */


typedef enum
{
    E_LAYOUT_WITHOUT_MUNU,
    E_LAYOUT_WITH_SIDEBAR,
    E_LAYOUT_WITH_ALL_MENU,
    E_LAYOUT_TYPE_MAX
} CVIAPP_PREVIEW_LAYOUT_TYPE;

typedef enum
{
    E_PREVIEW_SPLIT_1,
    E_PREVIEW_SPLIT_2,
    E_PREVIEW_SPLIT_4,
    E_PREVIEW_SPLIT_6,
    E_PREVIEW_SPLIT_8,
    E_PREVIEW_SPLIT_9,
    E_PREVIEW_SPLIT_DIY,
    E_PREVIEW_SPLIT_MAX
} CVIAPP_PREVIEW_SPLIT_TYPE;

#endif
