#ifndef __LINUX_NLNPI_H
#define __LINUX_NLNPI_H
/*
 * npi netlink interface public header
 *
 * Wenjie.Zhang <Wenjie.Zhang@spreadtrum.com>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 */

#include <linux/types.h>

/**
 * enum nlnpi_commands - supported nlnpi commands
 *
 * @NLNPI_CMD_UNSPEC: unspecified command to catch errors
 *
 * @NLNPI_CMD_START: Start NPI operation, no parameters.
 * @NLNPI_CMD_STOP: Stop NPI operation.
 *
 * @NLNPI_CMD_MAX: highest used command number
 * @__NLNPI_CMD_AFTER_LAST: internal use
 */
enum nlnpi_commands {
/* don't change the order or add anything between, this is ABI! */
	NLNPI_CMD_UNSPEC,

	NLNPI_CMD_START,
	NLNPI_CMD_STOP,
	NLNPI_CMD_SET_MAC,
	NLNPI_CMD_GET_MAC,
	NLNPI_CMD_SET_CHANNEL,
	NLNPI_CMD_GET_CHANNEL,
	NLNPI_CMD_GET_RSSI,
	NLNPI_CMD_SET_TX_MODE,
	NLNPI_CMD_SET_RATE,
	NLNPI_CMD_GET_RATE,
	NLNPI_CMD_TX_START,
	NLNPI_CMD_TX_STOP,
	NLNPI_CMD_RX_START,
	NLNPI_CMD_RX_STOP,
	NLNPI_CMD_SET_TX_POWER,
	NLNPI_CMD_GET_TX_POWER,
	NLNPI_CMD_SET_TX_COUNT,
	NLNPI_CMD_GET_RX_OK_COUNT,
	NLNPI_CMD_GET_RX_ERR_COUNT,
	NLNPI_CMD_CLEAR_RX_COUNT,
	NLNPI_CMD_GET_REG,
	NLNPI_CMD_SET_REG,
	NLNPI_CMD_SET_DEBUG,
	NLNPI_CMD_GET_DEBUG,
	NLNPI_CMD_SET_SBLOCK,
	NLNPI_CMD_GET_SBLOCK,
	/* add new commands above here */
	/* hery.he add the sin wave test */
        NLNPI_CMD_SIN_WAVE,
	NLNPI_CMD_LNA_ON,
	NLNPI_CMD_LNA_OFF,
	NLNPI_CMD_GET_LNA_STATUS,
	NLNPI_CMD_SPEED_UP,
	NLNPI_CMD_SPEED_DOWN,
	/* used to define NLNPI_CMD_MAX below */
	__NLNPI_CMD_AFTER_LAST,
	NLNPI_CMD_MAX = __NLNPI_CMD_AFTER_LAST - 1
};

/**
 * enum nlnpi_attrs - nlnpi netlink attributes
 *
 * @NLNPI_ATTR_UNSPEC: unspecified attribute to catch errors
 *
 * @NLNPI_ATTR_MAX: highest attribute number currently defined
 * @__NLNPI_ATTR_AFTER_LAST: internal use
 */
enum nlnpi_attrs {
/* don't change the order or add anything between, this is ABI! */
	NLNPI_ATTR_UNSPEC,

	NLNPI_ATTR_IFINDEX,

	NLNPI_ATTR_REPLY_STATUS,
	NLNPI_ATTR_REPLY_DATA,
	NLNPI_ATTR_GET_NO_ARG,

	NLNPI_ATTR_START,
	NLNPI_ATTR_STOP,
	NLNPI_ATTR_TX_START,
	NLNPI_ATTR_TX_STOP,
	NLNPI_ATTR_RX_START,
	NLNPI_ATTR_RX_STOP,//10
	NLNPI_ATTR_TX_MODE,
	NLNPI_ATTR_TX_COUNT,
	NLNPI_ATTR_RSSI,
	NLNPI_ATTR_GET_RX_COUNT,
	NLNPI_ATTR_SET_RX_COUNT,
	NLNPI_ATTR_GET_TX_POWER,
	NLNPI_ATTR_SET_TX_POWER,
	NLNPI_ATTR_GET_CHANNEL,
	NLNPI_ATTR_SET_CHANNEL,
	NLNPI_ATTR_SET_RATE,//20
	NLNPI_ATTR_GET_RATE,
	NLNPI_ATTR_SET_MAC,
	/* all get attr is arg len */
	NLNPI_ATTR_GET_MAC,
	NLNPI_ATTR_SET_REG,
	NLNPI_ATTR_GET_REG,
	NLNPI_ATTR_GET_REG_ARG,
	NLNPI_ATTR_SET_DEBUG,
	NLNPI_ATTR_GET_DEBUG,
	NLNPI_ATTR_GET_DEBUG_ARG,
	NLNPI_ATTR_SBLOCK_ARG,//30
	/* add attributes here, update the policy in itm_nlnpi.c */
	/* hery.he add the sin wave test */
        NLNPI_ATTR_SIN_WAVE,
	NLNPI_ATTR_LNA_ON,
	NLNPI_ATTR_LNA_OFF,
	NLNPI_ATTR_GET_LNA_STATUS,
	NLNPI_ATTR_SPEED_UP,
	NLNPI_ATTR_SPEED_DOWN,
	__NLNPI_ATTR_AFTER_LAST,
	NLNPI_ATTR_MAX = __NLNPI_ATTR_AFTER_LAST - 1
};

#endif /* __LINUX_NLNPI_H */
