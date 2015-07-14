/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   urr_sap.h
 *
 * Project:
 * --------
 *   MONZA
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *
 *===========================================================================
 * $Log:$
 *
 * 03 10 2015 rajasekhar.gade
 * [MOLY00095668] [Denali-1][MT6735][Stage-1][CSFB DSDS][Local FT][India-Delhi] Assert: u11101.c Line:194
 *
 * 01 17 2014 vend_yuhhwang.yu
 * [MOLY00026316] ???libnvram_daemon_callback  ????IMEI LID ??
 * .
 *
 * 06 18 2013 ivy.wang
 * [MOLY00025900] [Volunteer Patch][3G] Improve detection of SIB Change
 * smart paging - reduce possibility of missing bcch modification info
 *
 * 05 30 2013 ya.li
 * [MOLY00023642] [Volunteer Patch][3G][SMART PAGING]smart paging optimization for BCCH modification
 * .
 *
 * 03 28 2013 dongqing.qi
 * [MOLY00012897] [MMDC] Merge GAS/TAS/NAS/L4 code to WR8 for 6582+6290 type 1 MMDC feature developement
 * .MEME
 *
 * 12 19 2012 yenchih.yang
 * [MOLY00007503] [for LGE] WCDMA Dynamic Band Setting
 * .
 *
 * 12 19 2012 gordonjc.kuo
 * [MOLY00007503] [for LGE] WCDMA Dynamic Band Setting
 * .
 *
 * 12 19 2012 rachel.liu
 * [MOLY00007503] [for LGE] WCDMA Dynamic Band Setting
 * .
 * 
 * 10 26 2012 xuechao.wang
 * [MOLY00005344] ��MTK6515�������ƶ�Э��һ���Բ��ԡ�MTK U795 Signalling connection release indication procedure�����쳣
 * .
 * 
 * 10 26 2012 xuechao.wang
 * [MOLY00005344] ��MTK6515�������ƶ�Э��һ���Բ��ԡ�MTK U795 Signalling connection release indication procedure�����쳣
 * .
 * 
 * 09 14 2012 peng.hu
 * [MOLY00003486] [Vodafone Operator Test] make an Emergency Call on Intra-frequency restricted cells
 * .
 * 
 * 09 14 2012 mw.hsu
 * [MOLY00003486] [Vodafone Operator Test] make an Emergency Call on Intra-frequency restricted cells
 * <saved by Perforce>
 * 
 * 08 23 2012 ya.li
 * [MOLY00002550] [Athens17][CMCC Package][CMCC TD FT][Guangzhou][2 round-1 time][2.1��������š����Ų���]25th_10��23_��ʱ�޷���ͨ
 * .
 * 
 * 08 10 2012 maruco.tu
 * [MOLY00001700] [Inter-RAT] Correct IRCCO cause in RCR and remove unused msg_id
 * .
 * 
 * 08 09 2012 maruco.tu
 * [MOLY00001700] [Inter-RAT] Correct IRCCO cause in RCR and remove unused msg_id
 * [Inter-RAT] Correct IRCCO cause in RCR and remove unused msg_id.
 *
 * 06 27 2012 ye.yuan
 * [MOLY00000029] [3G TDD]modify msg id range in MOLY branch
 * USIME/CSE/CSCE/MEME/ADR/URR.
 *
 * 06 25 2012 yong.su
 * [MOLY00000029] [3G TDD]modify msg id range in MOLY branch
 * .
 *
 * 06 12 2012 qinghua.yu
 * removed!
 * .
 *
 * 06 11 2012 qinghua.yu
 * removed!
 * .
 *
 * 05 29 2012 austin.tsai
 * removed!
 * .
 *
 * 05 25 2012 yj.cheng
 * removed!
 * .
 *
 * 05 24 2012 wcpuser_integrator
 * removed!
 * Qinghua Yu check in global enum (MSG & SAP) at modem_dev.
 *
 * 05 24 2012 wcpuser_integrator
 * removed!
 * Qinghua Yu check in global enum (MSG & SAP) at modem_dev.
 *
 * 05 24 2012 wcpuser_integrator
 * removed!
 * Qinghua Yu check in global enum (MSG & SAP) at modem_dev.
 *
 * 05 06 2012 changchun.zhang
 * removed!
 * .
 *
 * 05 04 2012 hongwei.zhang
 * removed!
 * : merge sniffer sap.
 *
 * 04 11 2012 babylon.tien
 * removed!
 * <saved by Perforce>
 *
 * 04 10 2012 chi-chung.lin
 * removed!
 * [MT6280] code sync. from MT6280_DVT_DEV to MT6280_GCC_DEV
 *
 * 01 16 2012 yenchih.yang
 * removed!
 *
 * 01 12 2012 mark.ng
 * removed!
 * TK6280 code to MT6280_DVT_DEV
 *
 * 01 11 2012 shunwen.hsiao
 * removed!
 * Check in TK6280_DVT_DEV to MT6280_DVT_DEV
 *
 * 01 09 2012 nienteh.hsu
 * removed!
 * .
 *
 * 01 06 2012 chi-chung.lin
 * removed!
 * .
 *
 * 12 11 2011 haizhou.liu
 * removed!
 * .
 *
 * 11 23 2011 yenchih.yang
 * removed!
 * .
 *
 * 11 15 2011 ye.yuan
 * removed!
 * fix build error.
 *
 * 11 11 2011 xuechao.wang
 * removed!
 * .
 *
 * 11 10 2011 haizhou.liu
 * removed!
 * .
 *
 * 11 10 2011 yongtuan.qiao
 * removed!
 * modify for urr_sap.
 *
 * 08 28 2011 nicky.chou
 * removed!
 * .
 *
 * 06 21 2011 yenchih.yang
 * removed!
 * Rollback //MAUI/TRUNK/MAUI/mcu/uas/interfaces/sap/urr_sap.h to revision 14
 *
 * 05 24 2011 mw.hsu
 * removed!
 * .
 *
 * 04 15 2011 dennis.weng
 * removed!
 * .
 *
 * 03 18 2011 jd.ni
 * removed!
 * check in Fast Dormancy RRCE part.
 *
 * 03 16 2011 jessica.chang
 * removed!
 * MAUI_02622100: [MT6276][3G Gemini][UMAC] Gemini 2.0 check-in
 *
 * 03 16 2011 alvin.chen
 * removed!
 * .
 *
 * 03 16 2011 mw.hsu
 * removed!
 * .
 *
 * 12 23 2010 jd.ni
 * removed!
 * .
 *
 * 12 15 2010 dennis.weng
 * removed!
 * Rollback Gemini+ modification for TDD
 *
 * 12 09 2010 william.chang
 * removed!
 * .
 *
 * 12 09 2010 william.chang
 * removed!
 * .
 *
 * 12 09 2010 william.chang
 * removed!
 * .
 *
 * 12 09 2010 william.chang
 * removed!
 * .
 *
 * 12 07 2010 maruco.tu
 * removed!
 * .
 *
 * 12 01 2010 peng.pan
 * removed!
 * Remove version 19.
 *
 * 12 01 2010 quanping.wang
 * removed!
 * Merge TDD128 backto MAUI, based on 10AW1032MP_ASTRO w10.48 Tue. P1
 *
 * 11 30 2010 peng.pan
 * removed!
 * TDD 10A sync to MAUI.
 *
 * 10 30 2010 george.chang
 * removed!
 * .
 *
 * 10 11 2010 dennis.weng
 * removed!
 * .
 *
 * 08 06 2010 mw.hsu
 * removed!
 * .
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * SIB3/4 Change Indication for MEME
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * CSCE handles REGN_STATUS_UPDATE_REQ from RATCM instead of from RRCE.
 *
 * removed!
 * removed!
 * Message for MEME to notify CSCE Change of reference cell in DCH
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 1. Added New Cell Reselection Mechanism.
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * add to source control recursely
 *===========================================================================
 ****************************************************************************/
#include "module_msg_range.h"

#ifndef _URR_MSG_H
#define _URR_MSG_H

#ifdef __SOURCE_INSIGHT_PARSE__
typedef enum {
#endif

/* mtk80197, merge TDD128 back to MAUI */
#if defined(__UMTS_FDD_MODE__)
MODULE_MSG_BEGIN( MSG_ID_ADR_CODE_BEGIN )
//MSG_ID_ADR_CODE_BEGIN,
MSG_ID_RLC_TM_DATA_IND = MSG_ID_ADR_CODE_BEGIN,
MSG_ID_RLC_UM_DATA_IND,
MSG_ID_RLC_AM_DATA_IND,

#ifdef UNIT_TEST
MSG_ID_ADR_UNPACK_UT_EVENT_PHY_DATA_IND, 
MSG_ID_ADR_UNPACK_UT_EVENT_RLC_DATA_IND, 
MSG_ID_ADR_PACK_UT_MOVE_TO_IDLE_REQ, 
MSG_ID_ADR_PACK_UT_SEND_CCCH_REQ, 
MSG_ID_ADR_PACK_UT_SEND_DCCH_REQ, 
#endif

MSG_ID_ADR_ADR_ACKNOWLEDGEMENT_IND,
MSG_ID_RLC_AM_DATA_CNF,
MSG_ID_ADR_CODE_END = MSG_ID_RLC_AM_DATA_CNF,
//MSG_ID_ADR_CODE_END,
MODULE_MSG_END( MSG_ID_ADR_CODE_TAIL )

MODULE_MSG_BEGIN( MSG_ID_CSCE_CODE_BEGIN )
//MSG_ID_CSCE_CODE_BEGIN,
//SLCE
MSG_ID_URR_SLCE_SET_ACTIVE_RAT_CNF = MSG_ID_CSCE_CODE_BEGIN,  /*Alfie: this msg_id is also used by RRCE*/
MSG_ID_CSCE_SLCE_INITIALISE_CNF,
MSG_ID_CSCE_SLCE_RF_ON_CNF,
MSG_ID_CSCE_SLCE_RF_OFF_CNF,
MSG_ID_CSCE_SLCE_RSSI_SNIFFER_STOP_CNF,

//RRCE
MSG_ID_CSCE_RRCE_MOVE_TO_IDLE_IND,
MSG_ID_CSCE_RRCE_MOVE_TO_CELL_DCH_IND,
MSG_ID_CSCE_RRCE_MOVE_TO_CONNECTED_IND,
MSG_ID_CSCE_RRCE_MOVE_TO_INACTIVE_IND,
MSG_ID_CSCE_RRCE_BCCH_MODIFICATION_INFO_IND,
MSG_ID_CSCE_RRCE_RRC_CONNECTION_ESTABLISHMENT_IND,
MSG_ID_CSCE_RRCE_RELEASE_CHANNELS_CNF,
MSG_ID_CSCE_RRCE_OUT_OF_SERVICE_AREA_CNF,
MSG_ID_RRCE_CSCE_SIB_COLLECTION_RSP,
MSG_ID_CSCE_RRCE_STEADY_INACTIVE_IND,

#ifdef __GEMINI_PREEMPT_PEER_SERVICE__
MSG_ID_CSCE_RRCE_ABORT_SERVICE_REQ,
MSG_ID_CSCE_RRCE_ABORT_SERVICE_COMPLETE_IND,
#endif

#ifdef __SMART_PAGING_3G_FDD__
MSG_ID_CSCE_RRCE_SMART_PAGING_STATUS_IND,
#endif

#ifdef __PRI_RESEL_SUPPORT__
MSG_ID_RRCE_CSCE_DEDI_PRIO_INFO_IND,
#endif

//CSE
MSG_ID_CSCE_CSE_CELL_SELECTION_STOP_CNF, 
MSG_ID_CSCE_CSE_CELL_SELECTION_CNF, 
MSG_ID_CSCE_CSE_PLMN_LIST_CNF, 
MSG_ID_CSCE_CSE_FREQ_SCAN_SUSPEND_IND, 

#ifdef __WCDMA_PREFERRED__
MSG_ID_CSCE_CSE_DETECT_CELL_SEARCH_START_REQ,
MSG_ID_CSCE_CSE_DETECT_CELL_SEARCH_SUSPEND_REQ,
MSG_ID_CSCE_CSE_DETECT_CELL_SEARCH_SUSPEND_CNF,
MSG_ID_CSCE_CSE_DETECT_CELL_SEARCH_CNF,
#endif

#ifdef __CSG_SUPPORT__
MSG_ID_CSCE_CSE_CSG_LIST_START_REQ,
MSG_ID_CSCE_CSE_CSG_LIST_SUSPEND_REQ,
MSG_ID_CSCE_CSE_CSG_LIST_CNF,
MSG_ID_CSCE_CSE_CSG_AUTONOMOUS_SEARCH_START_REQ,
MSG_ID_CSCE_CSE_CSG_AUTONOMOUS_SEARCH_SUSPEND_CNF,
MSG_ID_CSCE_CSE_CSG_AUTONOMOUS_SEARCH_CNF,
MSG_ID_MEME_CSE_CSG_AUTONOMOUS_SEARCH_INTRA_FREQ_CELL_IND,
MSG_ID_CSCE_CSE_CSG_AUTONOMOUS_SEARCH_SUSPEND_REQ,
MSG_ID_CSCE_CSE_EVALUATE_CSG_CELL_REQ,
MSG_ID_CSCE_CSE_EVALUATE_CSG_CELL_STOP_REQ,
MSG_ID_CSCE_CSE_EVALUATE_CSG_CELL_CNF,
MSG_ID_CSCE_CSE_EVALUATE_CSG_CELL_STOP_CNF,
#endif
//SIBE
MSG_ID_SIBE_SIB_COLLECTION_CNF, 
MSG_ID_SIBE_SIB_MONITORING_CNF, 
MSG_ID_SIBE_SIB_MONITORING_ERROR_IND, 
//MEME
MSG_ID_CSCE_MEME_CELL_MEASUREMENT_RESULT_IND,
MSG_ID_CSCE_MEME_CELL_REF_TIME_ANCHOR_IND,
MSG_ID_MEME_CSCE_MODIFY_CELL_LIST_IND,
MSG_ID_CSCE_MEME_REF_CELL_CHANGE_IND,
//USIME
MSG_ID_CSCE_USIME_USIM_REMOVED_IND,
MSG_ID_CSCE_USIME_READ_NVRAM_CNF,
MSG_ID_USIME_SIM_FILE_CHANGE_IND,
//RATCM
MSG_ID_RATCM_CSCE_INIT_REQ,
MSG_ID_RATCM_CSCE_PLMN_SEARCH_REQ,
MSG_ID_RATCM_CSCE_PLMN_LIST_REQ,
MSG_ID_RATCM_CSCE_PLMN_LIST_STOP_REQ,
MSG_ID_RATCM_CSCE_ADD_FORBIDDEN_LA_REQ,
MSG_ID_RATCM_CSCE_DEL_FORBIDDEN_LA_REQ,
MSG_ID_RATCM_CSCE_EQ_PLMN_LIST_UPDATE_REQ,
MSG_ID_RATCM_CSCE_HPLMN_INFO_UPDATE_REQ,
MSG_ID_RATCM_CSCE_RRC_DEACTIVATE_REQ,
MSG_ID_RATCM_CSCE_SET_RAT_MODE_REQ,
MSG_ID_RATCM_CSCE_RFON_REQ,
MSG_ID_RATCM_CSCE_RFOFF_REQ,
MSG_ID_RATCM_CSCE_SET_IMEI_REQ,
//CM
MSG_ID_CMCSCE_EMERGENCY_CALL_STATUS_IND,

#ifdef __GEMINI__
MSG_ID_RATCM_CSCE_SIM_STATUS_UPDATE_REQ,
#endif

#ifdef __CSG_SUPPORT__
MSG_ID_RATCM_CSCE_CSG_LIST_REQ,
MSG_ID_RATCM_CSCE_CSG_LIST_STOP_REQ,
MSG_ID_RATCM_CSCE_UPDATE_ALLOWED_CSG_LIST_REQ,
#endif

#ifdef __DYNAMIC_BAND_SEL__
MSG_ID_RATCM_CSCE_SET_PREFERRED_BAND_REQ,
#endif

MSG_ID_RATCM_CSCE_REGN_STATUS_UPDATE_REQ,
MSG_ID_CSCE_CODE_END = MSG_ID_RATCM_CSCE_REGN_STATUS_UPDATE_REQ, 
//MSG_ID_CSCE_CODE_END,
MODULE_MSG_END( MSG_ID_CSCE_CODE_TAIL )

MODULE_MSG_BEGIN( MSG_ID_CSE_CODE_BEGIN )
//MSG_ID_CSE_CODE_BEGIN,
//SLCE
MSG_ID_CSE_SLCE_FREQ_SCAN_SUSPEND_IND = MSG_ID_CSE_CODE_BEGIN,
// MEME
MSG_ID_CSE_MEME_CELL_MEASUREMENT_RESULT_IND,
// CSCE
MSG_ID_CSCE_CSE_CELL_SELECTION_START_REQ, 
MSG_ID_CSCE_CSE_CELL_SELECTION_STOP_REQ, 
MSG_ID_CSCE_CSE_PLMN_LIST_START_REQ, 
MSG_ID_CSCE_CSE_PLMN_LIST_SUSPEND_REQ, 
MSG_ID_CSCE_CSE_RF_OFF_REQ,                             // For auto band
MSG_ID_CSCE_CSE_PLMN_LOSS_WITH_LIST_IND,                // For PLMN List optimization
MSG_ID_CSE_SLCE_FREQ_SCAN_CNF,
MSG_ID_CSE_CACHE_INFO_IND,                              // For showing cache content to Catcher...>#I
MSG_ID_CSE_CODE_END = MSG_ID_CSE_CACHE_INFO_IND, 
MODULE_MSG_END( MSG_ID_CSE_CODE_TAIL )
//MSG_ID_CSE_CODE_END,

MODULE_MSG_BEGIN( MSG_ID_MEME_CODE_BEGIN )
//MSG_ID_MEME_CODE_BEGIN,
//SLCE
//UMAC
MSG_ID_MEME_UMAC_TRAFFIC_VOLUME_MEASUREMENT_IND = MSG_ID_MEME_CODE_BEGIN,
MSG_ID_MEME_UMAC_QUALITY_MEASUREMENT_IND,
MSG_ID_MEME_UMAC_ADDITIONAL_TVM_IND,
MSG_ID_MEME_UMAC_MEASUREMENT_ERROR_IND,
#ifdef __UMTS_R6__
MSG_ID_MEME_UMAC_TVM_EXCEED_THRESHOLD_IND,
#endif
MSG_ID_MEME_UMAC_CS_CIPHER_STATUS_IND,
//RRCE
MSG_ID_RRCE_MEME_MOVE_TO_STATE_REQ,
MSG_ID_MEME_RRCE_COMPRESSED_MODE_RECONFIGURE_FAILURE_IND,
MSG_ID_MEME_RRCE_COMPRESSED_MODE_RECONFIGURE_SUCCESS_IND,
MSG_ID_RRCE_MEME_ASU_IND,

//SLCE
MSG_ID_MEME_SLCE_SUSPEND_REPORT_IND,
MSG_ID_MEME_SLCE_RESUME_REPORT_IND,

//CSCE
MSG_ID_CSCE_MEME_INITIALISE_REQ,
MSG_ID_MEME_CSCE_CELL_SELECTED_IND,
MSG_ID_CSCE_MEME_MEAS_MANIPULATION_REQ,
MSG_ID_CSCE_MEME_RF_ON_REQ,
MSG_ID_CSCE_MEME_RF_OFF_REQ,
MSG_ID_CSCE_MEME_SET_MODE_REQ,
MSG_ID_CSCE_MEME_EQ_PLMN_LIST_UPDATE_REQ,
MSG_ID_CSCE_MEME_CLEAN_DB_CELL_REQ,
//SIBE
MSG_ID_MEME_SIBE_SIB3_CHANGE_IND,
MSG_ID_MEME_SIBE_SIB4_CHANGE_IND,
MSG_ID_MEME_SIBE_SIB11_CHANGE_IND, 
MSG_ID_MEME_SIBE_SIB12_CHANGE_IND, 
MSG_ID_MEME_SIBE_SIB18_CHANGE_IND, 
//MEME self
MSG_ID_MEME_MEME_SAVED_MEAS_CTRL_IND,

MSG_ID_MEME_CODE_END = MSG_ID_MEME_MEME_SAVED_MEAS_CTRL_IND,
MODULE_MSG_END( MSG_ID_MEME_CODE_TAIL )
//MSG_ID_MEME_CODE_END,

MODULE_MSG_BEGIN( MSG_ID_RRCE_CODE_BEGIN )
//MSG_ID_RRCE_CODE_BEGIN,
//UDC
MSG_ID_RATCM_RRCE_CONN_EST_REQ = MSG_ID_RRCE_CODE_BEGIN,
MSG_ID_RATCM_RRCE_CONN_REL_REQ,
MSG_ID_RATCM_RRCE_CONN_ABORT_REQ,
MSG_ID_RATCM_RRCE_DATA_TRANSFER_REQ,
MSG_ID_RATCM_RRCE_SECURITY_MODE_REQ,
MSG_ID_RATCM_RRCE_RB_RE_ESTABLISHMENT_RSP,
//UNT
MSG_ID_RATCM_RRCE_PAGING_PARAM_ASSIGN_REQ,
//NEW
MSG_ID_RATCM_RRCE_REGN_STATUS_UPDATE_REQ,
#ifdef __GEMINI__
MSG_ID_RATCM_RRCE_NO_IR_SIG_PROC_REQ,
#endif
#ifdef __NO_PSDATA_SEND_SCRI__
MSG_ID_RATCM_RRCE_END_PS_DATA_SESSION_REQ,
#endif
#ifdef __FAST_DORMANCY__
MSG_ID_RATCM_RRCE_END_PS_DATA_SESSION_REQ,
#endif

/* BMC */
MSG_ID_RRCE_BMC_RX_IND,
MSG_ID_RRCE_BMC_ETWS_IND,
/* URLC */
MSG_ID_RRCE_URLC_STATUS_IND,
/* PDCP */
MSG_ID_RRCE_PDCP_STATUS_IND,

//SLCE
MSG_ID_RRCE_SLCE_RECONFIG_COMPLETE_IND,
MSG_ID_RRCE_SLCE_RECONFIG_ERROR_IND,
MSG_ID_RRCE_SLCE_PDCP_RELOC_IND,
MSG_ID_RRCE_SLCE_GET_COUNT_C_CNF,
MSG_ID_RRCE_SLCE_ABORT_CNF,
#if 0
/* under construction !*/
/* under construction !*/
#endif
MSG_ID_RRCE_SLCE_L1_CONTAINER_RECEIVED_IND,
MSG_ID_RRCE_SLCE_MONITOR_ORDER_REQ,  
//SIBE
MSG_ID_RRCE_SIBE_CELL_RST_CNF, 
MSG_ID_RRCE_SIBE_CELL_RST_STOP_CNF,
//CSCE
MSG_ID_CSCE_RRCE_SUITABLE_CELL_SELECTED_REQ,
MSG_ID_CSCE_RRCE_ACCEPTABLE_CELL_SELECTED_REQ,
MSG_ID_CSCE_RRCE_OUT_OF_SERVICE_AREA_REQ,
MSG_ID_CSCE_RRCE_DEACTIVATE_REQ,
MSG_ID_CSCE_RRCE_SET_MODE_REQ,
MSG_ID_RRCE_CSCE_SIB_COLLECTION_IND,
MSG_ID_CSCE_RRCE_PCH_TO_FACH_READY_RSP,
MSG_ID_CSCE_RRCE_RELEASE_CHANNELS_REQ,
//MEME
MSG_ID_MEME_RRCE_COMPRESSED_MODE_RECONFIGURE_REQ,
MSG_ID_MEME_RRCE_MONITOR_ORDER_IND,  
//UMAC
MSG_ID_RRCE_UMAC_STATUS_DATA_PENDING_IND,
MSG_ID_RRCE_UMAC_STATUS_RACH_IND,
#ifdef __UMTS_R7__
MSG_ID_RRCE_UMAC_D_HRNTI_DETECTED_IND,
#endif
#ifdef __MTK_INTERNAL__
/* under construction !*/
/* under construction !*/
#endif
/* ACK */
MSG_ID_RRCE_RRCE_SECURITY_ACK_IND,//Jingo: R10CR 4427
MSG_ID_RRCL_RRC_ACKNOWLEDGEMENT_IND,
MSG_ID_RRCE_CODE_END = MSG_ID_RRCL_RRC_ACKNOWLEDGEMENT_IND,
MODULE_MSG_END( MSG_ID_RRCE_CODE_TAIL )
//MSG_ID_RRCE_CODE_END,

MODULE_MSG_BEGIN( MSG_ID_SIBE_CODE_BEGIN )

//MSG_ID_SIBE_CODE_BEGIN,
//SLCE
MSG_ID_SIBE_SLCE_CONFIGURE_BCH_FAILED_IND = MSG_ID_SIBE_CODE_BEGIN,
#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
MSG_ID_SIBE_SLCE_RECONFIGURE_BCH_CNF,
#endif
// SIBE self
MSG_ID_SIBE_SIB_COLLECTION_REQ, 
MSG_ID_SIBE_SIB_COLLECTION_CANCEL_REQ, 
MSG_ID_SIBE_START_SIB_MONITORING_REQ, 
MSG_ID_SIBE_STOP_SIB_MONITORING_REQ, 
MSG_ID_RRCE_SIBE_CELL_RST_REQ, 
MSG_ID_RRCE_SIBE_CELL_RST_STOP_REQ,
#ifdef __UMTS_R8__
MSG_ID_RRCE_SIBE_SIB7_EXPIRY_TIMER_IND,
#endif
MSG_ID_CSCE_SIBE_MOVE_TO_IDLE_REQ, 
MSG_ID_SIBE_DUMP_BCH_SIB_IND,
MSG_ID_SIBE_SIB_CHANGE_IND,
MSG_ID_SIBE_CODE_END = MSG_ID_SIBE_DUMP_BCH_SIB_IND,
MODULE_MSG_END( MSG_ID_SIBE_CODE_TAIL )
//MSG_ID_SIBE_CODE_END,

MODULE_MSG_BEGIN( MSG_ID_SLCE_CODE_BEGIN )

//MSG_ID_SLCE_CODE_BEGIN,
//RATCM
MSG_ID_RATCM_SLCE_MONITORING_CLOSE_LOOP_REQ = MSG_ID_SLCE_CODE_BEGIN,

/* RABM */
MSG_ID_CRABM_RAB_ESTABLISH_RSP,
MSG_ID_CRABM_RAB_RELEASE_RSP,
/* PDCP */
MSG_ID_CPDCP_CONFIG_CNF,
MSG_ID_CPDCP_RELOC_CNF,
MSG_ID_CPDCP_RELEASE_CNF,
/* URLC */
MSG_ID_CRLC_CONFIG_RAB_CNF,
MSG_ID_CRLC_CONFIG_TM_ESTABLISH_CNF,
MSG_ID_CRLC_CONFIG_UM_ESTABLISH_CNF,
MSG_ID_CRLC_CONFIG_AM_ESTABLISH_CNF,
MSG_ID_CRLC_CONFIG_RELEASE_CNF,
MSG_ID_CRLC_SUSPEND_CNF,
MSG_ID_CRLC_RESUME_CNF,
MSG_ID_CRLC_CONFIG_TX_CIPHERING_CNF,
MSG_ID_CRLC_CONFIG_RX_CIPHERING_CNF,
MSG_ID_CRLC_COUNT_C_CNF,
MSG_ID_CRLC_REESTABLISH_CNF,
/* SEQ */
MSG_ID_CSEQ_CONFIG_UL2ACC_CLK_ON_INFO_CNF,
MSG_ID_CSEQ_CONFIG_UL2ACC_CLK_OFF_INFO_CNF,
//CSCE
MSG_ID_CSCE_SLCE_INITIALISE_REQ,
MSG_ID_CSCE_SLCE_RF_OFF_REQ,
MSG_ID_CSCE_SLCE_RF_ON_REQ,
MSG_ID_CSCE_SLCE_RSSI_SNIFFER_START_REQ,
MSG_ID_CSCE_SLCE_RSSI_SNIFFER_STOP_REQ,
MSG_ID_CSCE_SLCE_RSSI_SNIFFER_STOP_IND,
#ifdef __GEMINI__
MSG_ID_CSCE_SLCE_RESUME_REQ,
#endif

//URR
MSG_ID_URR_SLCE_SET_ACTIVE_RAT_REQ,
//RRCE
MSG_ID_RRCE_SLCE_ABORT_REQ,
MSG_ID_RRCE_SLCE_GET_COUNT_C_REQ,
MSG_ID_RRCE_SLCE_RECONFIG_REQ,
//SIBE
MSG_ID_SIBE_SLCE_RECONFIGURE_BCH_REQ,
MSG_ID_SIBE_SLCE_SIB7_CHANGE_IND,
//CSE
MSG_ID_CSE_SLCE_FREQ_SCAN_CONTINUE_REQ,
MSG_ID_CSE_SLCE_FREQ_SCAN_REQ,
MSG_ID_CSE_SLCE_FREQ_SCAN_SUSPEND_REQ,
MSG_ID_CSE_SLCE_SPECIFIC_CELL_SEARCH_REQ,
MSG_ID_CSE_SLCE_SPECIFIC_CELL_SEARCH_STOP_REQ,
//MEME
MSG_ID_MEME_SLCE_ADDITIONAL_TVM_REQ,
MSG_ID_MEME_SLCE_MEASUREMENT_CONFIG_CELL_REQ,
MSG_ID_MEME_SLCE_MEASUREMENT_CONFIG_FMO_REQ,
MSG_ID_MEME_SLCE_MEASUREMENT_CONFIG_TGPS_REQ,
MSG_ID_MEME_SLCE_MEASUREMENT_CONFIG_GSMGAP_REQ,
MSG_ID_MEME_SLCE_RLC_CONTINUE_REQ,
MSG_ID_MEME_SLCE_RLC_STOP_REQ,                 
MSG_ID_MEME_SLCE_QUALITY_MEASUREMENT_REQ,
MSG_ID_MEME_SLCE_TVM_MEASUREMENT_REQ,
//SEQ
MSG_ID_SEQ_SEQUENCE_REQ,
MSG_ID_SEQ_SEQUENCE_CONFIRMED_IND,
MSG_ID_SEQ_SEQUENCE_INDICATED_IND,
MSG_ID_SEQ_SEQUENCE_ERROR_IND,

//UMAC
MSG_ID_CMAC_CONFIG_UE_CNF,
MSG_ID_CMAC_CONFIG_UE_IND,
MSG_ID_CMAC_CONFIG_TX_CCTRCH_CNF,
MSG_ID_CMAC_CONFIG_EDCH_CCTRCH_CNF,
MSG_ID_CMAC_CONFIG_TX_CCTRCH_IND,
MSG_ID_CMAC_CONFIG_EDCH_CCTRCH_IND,
MSG_ID_CMAC_REMOVE_TX_CCTRCH_CNF,
MSG_ID_CMAC_REMOVE_EDCH_CCTRCH_CNF,
MSG_ID_CMAC_REMOVE_TX_CCTRCH_IND,
MSG_ID_CMAC_REMOVE_EDCH_CCTRCH_IND,
MSG_ID_CMAC_CONFIG_RX_CCTRCH_CNF,
MSG_ID_CMAC_CONFIG_HSDSCH_CCTRCH_CNF,
MSG_ID_CMAC_CONFIG_RX_CCTRCH_IND,
MSG_ID_CMAC_CONFIG_HSDSCH_CCTRCH_IND,
MSG_ID_CMAC_REMOVE_RX_CCTRCH_CNF,
MSG_ID_CMAC_REMOVE_HSDSCH_CCTRCH_CNF,
MSG_ID_CMAC_REMOVE_RX_CCTRCH_IND,
MSG_ID_CMAC_REMOVE_HSDSCH_CCTRCH_IND,
MSG_ID_CMAC_CONFIG_RACH_CNF,
MSG_ID_CMAC_CONFIG_RACH_IND,
MSG_ID_CMAC_CONFIG_CPCH_CNF,
MSG_ID_CMAC_CONFIG_CIPHERING_CNF,
MSG_ID_CMAC_COUNT_C_CNF,
MSG_ID_CMAC_DELETE_CIPHERING_CNF,

MSG_ID_CMAC_CONFIG_TX_RLC_REESTABLISH_CNF,
MSG_ID_CMAC_CONFIG_TX_RLC_REESTABLISH_IND,
MSG_ID_CMAC_CONFIG_RX_RLC_REESTABLISH_CNF,
MSG_ID_CMAC_CONFIG_RX_RLC_REESTABLISH_IND,

MSG_ID_CMAC_CONFIG_ABORT_CNF,
MSG_ID_CMAC_CONFIG_TFC_SUBSET_CNF,
MSG_ID_CMAC_CONFIG_TFC_SUBSET_IND,

MSG_ID_SLCE_CODE_END = MSG_ID_CMAC_CONFIG_TFC_SUBSET_IND,
MODULE_MSG_END( MSG_ID_SLCE_CODE_TAIL )
//MSG_ID_SLCE_CODE_END,

MODULE_MSG_BEGIN( MSG_ID_DBME_CODE_BEGIN )
//MSG_ID_DBME_CODE_BEGIN,
MSG_ID_DBME_DUMP_IND = MSG_ID_DBME_CODE_BEGIN,
MSG_ID_DBME_DUMP_EXT_QUEUE_IND,
MSG_ID_DBME_CODE_END = MSG_ID_DBME_DUMP_EXT_QUEUE_IND,
MODULE_MSG_END( MSG_ID_DBME_CODE_TAIL )
//MSG_ID_DBME_CODE_END,

//MSG_ID_USIME_CODE_BEGIN,
MODULE_MSG_BEGIN( MSG_ID_USIME_CODE_BEGIN )
MSG_ID_RRCE_USIME_SAVE_REQ = MSG_ID_USIME_CODE_BEGIN,
MSG_ID_CSCE_USIME_READ_NVRAM_REQ,
MSG_ID_CSCE_USIME_SET_MODE_REQ,
MSG_ID_CSCE_USIME_SET_PREFERRED_BAND_REQ,
MSG_ID_RATCM_UAS_USIM_INFO_RESET_REQ,
MSG_ID_USIM_REGISTER_CNF,
MSG_ID_USIME_CODE_END = MSG_ID_USIM_REGISTER_CNF,
MODULE_MSG_END( MSG_ID_USIME_CODE_TAIL )
//MSG_ID_USIME_CODE_END,

//MSG_ID_URR_CODE_BEGIN,
MODULE_MSG_BEGIN( MSG_ID_URR_CODE_BEGIN )
MSG_ID_URR_NON_USED_MESSAGE_BEGIN = MSG_ID_URR_CODE_BEGIN,

#ifdef __GEMINI__
MSG_ID_URR_RRCE_SERVICE_RES_OCCUPY_IND,
MSG_ID_URR_CSCE_SWITCH_GEMINI_MODE_REQ,

/* ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */
MSG_ID_URR_RRCE_SWITCH_GEMINI_MODE_REQ,
MSG_ID_URR_CSE_SWITCH_GEMINI_MODE_REQ,
MSG_ID_URR_MEME_SWITCH_GEMINI_MODE_REQ,
MSG_ID_URR_SIBE_SWITCH_GEMINI_MODE_REQ,
MSG_ID_URR_CSCE_VIRTUAL_SUSPEND_SERVICE_COMPLETE_IND,
#if 0 /* move to ul1_sap.h */
/* under construction !*/
#endif
/* endif __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */
#endif /* __GEMINI__ */

/* DRLC */
MSG_ID_URR_DRLC_SRB_SDU_STOP_IND,

MSG_ID_URR_NON_USED_MESSAGE_END,
MSG_ID_URR_CODE_END = MSG_ID_URR_NON_USED_MESSAGE_END,
MODULE_MSG_END( MSG_ID_URR_CODE_TAIL )
//MSG_ID_URR_CODE_END,

#endif /* __UMTS_FDD_MODE__ */

/* mtk80197, merge TDD128 back to MAUI */
#if defined(__UMTS_TDD128_MODE__)
MODULE_MSG_BEGIN( MSG_ID_ADR_TDD_CODE_BEGIN )

//MSG_ID_ADR_CODE_BEGIN,
MSG_ID_RLC_TM_DATA_IND = MSG_ID_ADR_TDD_CODE_BEGIN,
MSG_ID_RLC_UM_DATA_IND,
MSG_ID_RLC_AM_DATA_IND,

#ifdef UNIT_TEST
MSG_ID_ADR_UNPACK_UT_EVENT_PHY_DATA_IND, 
MSG_ID_ADR_UNPACK_UT_EVENT_RLC_DATA_IND, 
MSG_ID_ADR_PACK_UT_MOVE_TO_IDLE_REQ, 
MSG_ID_ADR_PACK_UT_SEND_CCCH_REQ, 
MSG_ID_ADR_PACK_UT_SEND_DCCH_REQ, 
#endif

MSG_ID_ADR_ADR_ACKNOWLEDGEMENT_IND,
MSG_ID_RLC_AM_DATA_CNF,
MSG_ID_ADR_CODE_END = MSG_ID_RLC_AM_DATA_CNF,
MODULE_MSG_END( MSG_ID_ADR_TDD_CODE_TAIL )
//MSG_ID_ADR_CODE_END,

//MSG_ID_CSCE_CODE_BEGIN,
//SLCE
MODULE_MSG_BEGIN( MSG_ID_CSCE_TDD_CODE_BEGIN )
MSG_ID_URR_SLCE_SET_ACTIVE_RAT_CNF = MSG_ID_CSCE_TDD_CODE_BEGIN,  /*Alfie: this msg_id is also used by RRCE*/
MSG_ID_CSCE_SLCE_INITIALISE_CNF,
MSG_ID_CSCE_SLCE_RF_ON_CNF,
MSG_ID_CSCE_SLCE_RF_OFF_CNF,
#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
#ifdef __UMTS_TDD128_SNIFFER__
MSG_ID_CSCE_SLCE_RSSI_SNIFFER_STOP_CNF,
#endif
#endif
//RRCE
MSG_ID_CSCE_RRCE_MOVE_TO_IDLE_IND,
MSG_ID_CSCE_RRCE_MOVE_TO_CELL_DCH_IND,
MSG_ID_CSCE_RRCE_MOVE_TO_CONNECTED_IND,
MSG_ID_CSCE_RRCE_MOVE_TO_INACTIVE_IND,
MSG_ID_CSCE_RRCE_BCCH_MODIFICATION_INFO_IND,
MSG_ID_CSCE_RRCE_RRC_CONNECTION_ESTABLISHMENT_IND,
MSG_ID_CSCE_RRCE_RELEASE_CHANNELS_CNF,
MSG_ID_CSCE_RRCE_OUT_OF_SERVICE_AREA_CNF,
MSG_ID_RRCE_CSCE_SIB_COLLECTION_RSP,
MSG_ID_CSCE_RRCE_STEADY_INACTIVE_IND,

#ifdef __GEMINI_PREEMPT_PEER_SERVICE__
MSG_ID_CSCE_RRCE_ABORT_SERVICE_REQ,
MSG_ID_CSCE_RRCE_ABORT_SERVICE_COMPLETE_IND,
#endif

#ifdef __GEMINI__
MSG_ID_CSCE_RRCE_REVERT_RAT_IN_SUSPEND_IND,
#endif
MSG_ID_CSCE_RRCE_CHANNEL_CONFIG_FAILURE_IND,
MSG_ID_CSCE_RRCE_SMART_PAGING_STATUS_IND,

//CSE
MSG_ID_CSCE_CSE_CELL_SELECTION_STOP_CNF, 
MSG_ID_CSCE_CSE_CELL_SELECTION_CNF, 
MSG_ID_CSCE_CSE_PLMN_LIST_CNF, 
MSG_ID_CSCE_CSE_FREQ_SCAN_SUSPEND_IND, 
//SIBE
MSG_ID_SIBE_SIB_COLLECTION_CNF, 
MSG_ID_SIBE_SIB_MONITORING_CNF, 
MSG_ID_SIBE_SIB_MONITORING_ERROR_IND, 
MSG_ID_CSCE_SIBE_MIB_CHANGE_IND,
//MEME
MSG_ID_CSCE_MEME_CELL_MEASUREMENT_RESULT_IND,
MSG_ID_CSCE_MEME_CELL_REF_TIME_ANCHOR_IND,
MSG_ID_MEME_CSCE_MODIFY_CELL_LIST_IND,
MSG_ID_CSCE_MEME_REF_CELL_CHANGE_IND,
//USIME
MSG_ID_CSCE_USIME_USIM_REMOVED_IND,
MSG_ID_CSCE_USIME_READ_NVRAM_CNF,
//RATCM
MSG_ID_RATCM_CSCE_INIT_REQ,
MSG_ID_RATCM_CSCE_PLMN_SEARCH_REQ,
MSG_ID_RATCM_CSCE_PLMN_LIST_REQ,
MSG_ID_RATCM_CSCE_PLMN_LIST_STOP_REQ,
MSG_ID_RATCM_CSCE_ADD_FORBIDDEN_LA_REQ,
MSG_ID_RATCM_CSCE_DEL_FORBIDDEN_LA_REQ,
MSG_ID_RATCM_CSCE_EQ_PLMN_LIST_UPDATE_REQ,
MSG_ID_RATCM_CSCE_HPLMN_INFO_UPDATE_REQ,
MSG_ID_RATCM_CSCE_RRC_DEACTIVATE_REQ,
MSG_ID_RATCM_CSCE_SET_RAT_MODE_REQ,
MSG_ID_RATCM_CSCE_RFON_REQ,
MSG_ID_RATCM_CSCE_RFOFF_REQ,

//CM
MSG_ID_CMCSCE_EMERGENCY_CALL_STATUS_IND,

#ifdef __GEMINI__
MSG_ID_RATCM_CSCE_SIM_STATUS_UPDATE_REQ,
#endif

MSG_ID_RATCM_CSCE_REGN_STATUS_UPDATE_REQ,
MSG_ID_CSCE_CODE_END = MSG_ID_RATCM_CSCE_REGN_STATUS_UPDATE_REQ, 
MODULE_MSG_END( MSG_ID_CSCE_TDD_CODE_TAIL )
//MSG_ID_CSCE_CODE_END,

MODULE_MSG_BEGIN( MSG_ID_CSE_TDD_CODE_BEGIN )
//MSG_ID_CSE_CODE_BEGIN,
//SLCE
MSG_ID_CSE_SLCE_FREQ_SCAN_SUSPEND_IND = MSG_ID_CSE_TDD_CODE_BEGIN,
// MEME
MSG_ID_CSE_MEME_CELL_MEASUREMENT_RESULT_IND,
// CSCE
MSG_ID_CSCE_CSE_CELL_SELECTION_START_REQ, 
MSG_ID_CSCE_CSE_CELL_SELECTION_STOP_REQ, 
MSG_ID_CSCE_CSE_PLMN_LIST_START_REQ, 
MSG_ID_CSCE_CSE_PLMN_LIST_SUSPEND_REQ, 
MSG_ID_CSCE_CSE_RF_OFF_REQ,                             // For auto band
MSG_ID_CSCE_CSE_PLMN_LOSS_WITH_LIST_IND,                // For PLMN List optimization
MSG_ID_CSE_SLCE_FREQ_SCAN_CNF,
MSG_ID_CSE_CACHE_INFO_IND,                              // For showing cache content to Catcher...>#I
MSG_ID_CSE_CODE_END = MSG_ID_CSE_CACHE_INFO_IND, 
MODULE_MSG_END( MSG_ID_CSE_TDD_CODE_TAIL )
//MSG_ID_CSE_CODE_END,

MODULE_MSG_BEGIN( MSG_ID_MEME_TDD_CODE_BEGIN )
//MSG_ID_MEME_CODE_BEGIN,
//SLCE
//UMAC
MSG_ID_MEME_UMAC_TRAFFIC_VOLUME_MEASUREMENT_IND = MSG_ID_MEME_TDD_CODE_BEGIN,
MSG_ID_MEME_UMAC_QUALITY_MEASUREMENT_IND,
MSG_ID_MEME_UMAC_ADDITIONAL_TVM_IND,
MSG_ID_MEME_UMAC_MEASUREMENT_ERROR_IND,
#ifdef __UMTS_R6__
MSG_ID_MEME_UMAC_TVM_EXCEED_THRESHOLD_IND,
#endif
MSG_ID_MEME_UMAC_CS_CIPHER_STATUS_IND,
//RRCE
MSG_ID_RRCE_MEME_MOVE_TO_STATE_REQ,
MSG_ID_MEME_RRCE_COMPRESSED_MODE_RECONFIGURE_FAILURE_IND,
MSG_ID_MEME_RRCE_COMPRESSED_MODE_RECONFIGURE_SUCCESS_IND,
MSG_ID_RRCE_MEME_ASU_IND,


//SLCE
MSG_ID_MEME_SLCE_SUSPEND_REPORT_IND,
MSG_ID_MEME_SLCE_RESUME_REPORT_IND,

//CSCE
MSG_ID_CSCE_MEME_INITIALISE_REQ,
//MSG_ID_MEME_CSCE_CELL_RESELECTION_IND,	
MSG_ID_MEME_CSCE_CELL_SELECTED_IND,
MSG_ID_CSCE_MEME_MEAS_MANIPULATION_REQ,
MSG_ID_CSCE_MEME_RF_ON_REQ,
MSG_ID_CSCE_MEME_RF_OFF_REQ,
MSG_ID_CSCE_MEME_SET_MODE_REQ,
MSG_ID_CSCE_MEME_EQ_PLMN_LIST_UPDATE_REQ,
//SIBE
MSG_ID_MEME_SIBE_SIB3_CHANGE_IND,
MSG_ID_MEME_SIBE_SIB4_CHANGE_IND,
MSG_ID_MEME_SIBE_SIB11_CHANGE_IND, 
MSG_ID_MEME_SIBE_SIB12_CHANGE_IND, 
MSG_ID_MEME_SIBE_SIB18_CHANGE_IND, 
//MEME self
MSG_ID_MEME_MEME_SAVED_MEAS_CTRL_IND,

MSG_ID_MEME_CODE_END = MSG_ID_MEME_MEME_SAVED_MEAS_CTRL_IND,
//MSG_ID_MEME_CODE_END,
MODULE_MSG_END( MSG_ID_MEME_TDD_CODE_TAIL )

MODULE_MSG_BEGIN( MSG_ID_RRCE_TDD_CODE_BEGIN )
//MSG_ID_RRCE_CODE_BEGIN,
//UDC
MSG_ID_RATCM_RRCE_CONN_EST_REQ = MSG_ID_RRCE_TDD_CODE_BEGIN,
MSG_ID_RATCM_RRCE_CONN_REL_REQ,
MSG_ID_RATCM_RRCE_CONN_ABORT_REQ,
MSG_ID_RATCM_RRCE_DATA_TRANSFER_REQ,
MSG_ID_RATCM_RRCE_SECURITY_MODE_REQ,
MSG_ID_RATCM_RRCE_RB_RE_ESTABLISHMENT_RSP,
//UNT
MSG_ID_RATCM_RRCE_PAGING_PARAM_ASSIGN_REQ,
//NEW
MSG_ID_RATCM_RRCE_REGN_STATUS_UPDATE_REQ,
#ifdef __GEMINI__
MSG_ID_RATCM_RRCE_NO_IR_SIG_PROC_REQ,
#endif

#if defined (__NO_PSDATA_SEND_SCRI__) || defined (__FAST_DORMANCY__) 
MSG_ID_RATCM_RRCE_END_PS_DATA_SESSION_REQ,
MSG_ID_RATCM_RRCE_SERVICE_ACCEPT_NOTIFY_REQ,
#endif /* __NO_PSDATA_SEND_SCRI__ || __FAST_DORMANCY__ */

/* BMC */
MSG_ID_RRCE_BMC_RX_IND,
MSG_ID_RRCE_BMC_ETWS_IND,
/* URLC */
MSG_ID_RRCE_URLC_STATUS_IND,

//SLCE
MSG_ID_RRCE_SLCE_RECONFIG_COMPLETE_IND,
MSG_ID_RRCE_SLCE_RECONFIG_ERROR_IND,
MSG_ID_RRCE_SLCE_PDCP_RELOC_IND,
MSG_ID_RRCE_SLCE_GET_COUNT_C_CNF,
MSG_ID_RRCE_SLCE_ABORT_CNF,
MSG_ID_RRCE_SLCE_ACTIVATION_TIME_IND,

//SIBE
MSG_ID_RRCE_SIBE_SIB1_CHANGE_IND, 
MSG_ID_RRCE_SIBE_SIB2_CHANGE_IND, 
MSG_ID_RRCE_SIBE_SIB5_CHANGE_IND, 
MSG_ID_RRCE_SIBE_SIB6_CHANGE_IND, 
MSG_ID_RRCE_SIBE_SIB16_CHANGE_IND, 
MSG_ID_RRCE_SIBE_CELL_RST_CNF, 
MSG_ID_RRCE_SIBE_CELL_RST_STOP_CNF,
//CSCE
MSG_ID_CSCE_RRCE_SUITABLE_CELL_SELECTED_REQ,
MSG_ID_CSCE_RRCE_ACCEPTABLE_CELL_SELECTED_REQ,
MSG_ID_CSCE_RRCE_OUT_OF_SERVICE_AREA_REQ,
MSG_ID_CSCE_RRCE_DEACTIVATE_REQ,
MSG_ID_CSCE_RRCE_SET_MODE_REQ,
MSG_ID_RRCE_CSCE_SIB_COLLECTION_IND,
MSG_ID_CSCE_RRCE_PCH_TO_FACH_READY_RSP,
MSG_ID_CSCE_RRCE_RELEASE_CHANNELS_REQ,
//MEME
MSG_ID_MEME_RRCE_COMPRESSED_MODE_RECONFIGURE_REQ,
/* ACK */
MSG_ID_RRCL_RRC_ACKNOWLEDGEMENT_IND,
//UMAC
MSG_ID_RRCE_UMAC_STATUS_DATA_PENDING_IND,
MSG_ID_RRCE_UMAC_STATUS_RACH_IND,
#ifdef __HSUPA_SUPPORT__
MSG_ID_RRCE_UMAC_RL_FAILURE_IND,
#endif
#ifdef __MTK_INTERNAL__
/* under construction !*/
/* under construction !*/
#endif
MSG_ID_RRCE_UMAC_T308_EXPIRY_IND,
MSG_ID_RRCE_CODE_END = MSG_ID_RRCE_UMAC_T308_EXPIRY_IND,
MODULE_MSG_END( MSG_ID_RRCE_TDD_CODE_TAIL )
//MSG_ID_RRCE_CODE_END,

MODULE_MSG_BEGIN( MSG_ID_SIBE_TDD_CODE_BEGIN )
//MSG_ID_SIBE_CODE_BEGIN,
//SLCE
MSG_ID_SIBE_SLCE_CONFIGURE_BCH_FAILED_IND = MSG_ID_SIBE_TDD_CODE_BEGIN,
MSG_ID_SIBE_SLCE_RECONFIGURE_BCH_CNF,
// SIBE self
MSG_ID_SIBE_SIB_COLLECTION_REQ, 
MSG_ID_SIBE_SIB_COLLECTION_CANCEL_REQ, 
MSG_ID_SIBE_START_SIB_MONITORING_REQ, 
MSG_ID_SIBE_STOP_SIB_MONITORING_REQ, 
MSG_ID_RRCE_SIBE_CELL_RST_REQ, 
MSG_ID_RRCE_SIBE_CELL_RST_STOP_REQ,
MSG_ID_CSCE_SIBE_MOVE_TO_IDLE_REQ, 
MSG_ID_SIBE_DUMP_BCH_SIB_IND,
MSG_ID_SIBE_CODE_END = MSG_ID_SIBE_DUMP_BCH_SIB_IND,
//MSG_ID_SIBE_CODE_END,
MODULE_MSG_END( MSG_ID_SIBE_TDD_CODE_TAIL )

MODULE_MSG_BEGIN( MSG_ID_SLCE_TDD_CODE_BEGIN )
//MSG_ID_SLCE_CODE_BEGIN,
//RATCM
MSG_ID_RATCM_SLCE_MONITORING_CLOSE_LOOP_REQ = MSG_ID_SLCE_TDD_CODE_BEGIN,

/* RABM */
MSG_ID_CRABM_RAB_ESTABLISH_RSP,
MSG_ID_CRABM_RAB_RELEASE_RSP,
/* PDCP */
MSG_ID_CPDCP_CONFIG_CNF,
MSG_ID_CPDCP_RELOC_CNF,
MSG_ID_CPDCP_RELEASE_CNF,
/* URLC */
MSG_ID_CRLC_CONFIG_RAB_CNF,
MSG_ID_CRLC_CONFIG_TM_ESTABLISH_CNF,
MSG_ID_CRLC_CONFIG_UM_ESTABLISH_CNF,
MSG_ID_CRLC_CONFIG_AM_ESTABLISH_CNF,
MSG_ID_CRLC_CONFIG_RELEASE_CNF,
MSG_ID_CRLC_SUSPEND_CNF,
MSG_ID_CRLC_RESUME_CNF,
MSG_ID_CRLC_CONFIG_TX_CIPHERING_CNF,
MSG_ID_CRLC_CONFIG_RX_CIPHERING_CNF,
MSG_ID_CRLC_COUNT_C_CNF,

//CSCE
MSG_ID_CSCE_SLCE_INITIALISE_REQ,
MSG_ID_CSCE_SLCE_RF_OFF_REQ,
MSG_ID_CSCE_SLCE_RF_ON_REQ,
MSG_ID_CSCE_SLCE_RSSI_SNIFFER_START_REQ,
MSG_ID_CSCE_SLCE_RSSI_SNIFFER_STOP_REQ,
#ifdef __GEMINI__
MSG_ID_CSCE_SLCE_RESUME_REQ,
#endif

//URR
MSG_ID_URR_SLCE_SET_ACTIVE_RAT_REQ,
//RRCE
MSG_ID_RRCE_SLCE_ABORT_REQ,
MSG_ID_RRCE_SLCE_GET_COUNT_C_REQ,
MSG_ID_RRCE_SLCE_RECONFIG_REQ,
//SIBE
MSG_ID_SIBE_SLCE_RECONFIGURE_BCH_REQ,
MSG_ID_SIBE_SLCE_SIB7_CHANGE_IND,
//CSE
MSG_ID_CSE_SLCE_FREQ_SCAN_CONTINUE_REQ,
MSG_ID_CSE_SLCE_FREQ_SCAN_REQ,
MSG_ID_CSE_SLCE_FREQ_SCAN_SUSPEND_REQ,
MSG_ID_CSE_SLCE_SPECIFIC_CELL_SEARCH_REQ,
MSG_ID_CSE_SLCE_SPECIFIC_CELL_SEARCH_STOP_REQ,
//MEME
MSG_ID_MEME_SLCE_ADDITIONAL_TVM_REQ,
MSG_ID_MEME_SLCE_MEASUREMENT_CONFIG_CELL_REQ,
MSG_ID_MEME_SLCE_MEASUREMENT_CONFIG_FMO_REQ,
MSG_ID_MEME_SLCE_MEASUREMENT_CONFIG_TGPS_REQ,
MSG_ID_MEME_SLCE_MEASUREMENT_CONFIG_GSMGAP_REQ,
MSG_ID_MEME_SLCE_RLC_CONTINUE_REQ,
MSG_ID_MEME_SLCE_RLC_STOP_REQ,                 
MSG_ID_MEME_SLCE_QUALITY_MEASUREMENT_REQ,
MSG_ID_MEME_SLCE_TVM_MEASUREMENT_REQ,
#ifdef __MMDC_TYPE1_DUAL_LOAD__
//MEME
MSG_ID_MEME_SIBE_SIB19_CHANGE_IND, 
#endif /*__MMDC_TYPE1_DUAL_LOAD__*/

//SEQ
MSG_ID_SEQ_SEQUENCE_REQ,
MSG_ID_SEQ_SEQUENCE_CONFIRMED_IND,
MSG_ID_SEQ_SEQUENCE_INDICATED_IND,
MSG_ID_SEQ_SEQUENCE_ERROR_IND,

//UMAC
MSG_ID_CMAC_CONFIG_UE_CNF,
MSG_ID_CMAC_CONFIG_UE_IND,
MSG_ID_CMAC_CONFIG_TX_CCTRCH_CNF,
MSG_ID_CMAC_CONFIG_TX_CCTRCH_IND,
MSG_ID_CMAC_REMOVE_TX_CCTRCH_CNF,
MSG_ID_CMAC_REMOVE_TX_CCTRCH_IND,
MSG_ID_CMAC_CONFIG_RX_CCTRCH_CNF,
MSG_ID_CMAC_CONFIG_RX_CCTRCH_IND,
MSG_ID_CMAC_REMOVE_RX_CCTRCH_CNF,
MSG_ID_CMAC_REMOVE_RX_CCTRCH_IND,
MSG_ID_CMAC_CONFIG_HSDSCH_CCTRCH_CNF,
MSG_ID_CMAC_CONFIG_HSDSCH_CCTRCH_IND,
MSG_ID_CMAC_REMOVE_HSDSCH_CCTRCH_CNF,
MSG_ID_CMAC_REMOVE_HSDSCH_CCTRCH_IND,
#ifdef __HSUPA_SUPPORT__
MSG_ID_CMAC_CONFIG_EDCH_CCTRCH_CNF,
MSG_ID_CMAC_CONFIG_EDCH_CCTRCH_IND,
MSG_ID_CMAC_REMOVE_EDCH_CCTRCH_CNF,
MSG_ID_CMAC_REMOVE_EDCH_CCTRCH_IND,
#endif
MSG_ID_CMAC_CONFIG_RACH_CNF,
MSG_ID_CMAC_CONFIG_RACH_IND,
MSG_ID_CMAC_CONFIG_CPCH_CNF,
MSG_ID_CMAC_CONFIG_CIPHERING_CNF,
MSG_ID_CMAC_COUNT_C_CNF,
MSG_ID_CMAC_DELETE_CIPHERING_CNF,
MSG_ID_CMAC_CONFIG_TX_RLC_MODIFY_CNF,
MSG_ID_CMAC_CONFIG_TX_RLC_MODIFY_IND,
MSG_ID_CMAC_CONFIG_RX_RLC_MODIFY_CNF,
MSG_ID_CMAC_CONFIG_RX_RLC_MODIFY_IND,
MSG_ID_CMAC_CONFIG_ABORT_CNF,
MSG_ID_CMAC_CONFIG_TFC_SUBSET_CNF,
MSG_ID_CMAC_CONFIG_TFC_SUBSET_IND,

MSG_ID_SLCE_CODE_END = MSG_ID_CMAC_CONFIG_TFC_SUBSET_IND,
MODULE_MSG_END( MSG_ID_SLCE_TDD_CODE_TAIL )
//MSG_ID_SLCE_CODE_END,

MODULE_MSG_BEGIN( MSG_ID_DBME_TDD_CODE_BEGIN )
//MSG_ID_DBME_CODE_BEGIN,
MSG_ID_DBME_DUMP_IND = MSG_ID_DBME_TDD_CODE_BEGIN,
MSG_ID_DBME_DUMP_EXT_QUEUE_IND,
MSG_ID_DBME_CODE_END = MSG_ID_DBME_DUMP_EXT_QUEUE_IND,
MODULE_MSG_END( MSG_ID_DBME_TDD_CODE_TAIL )
//MSG_ID_DBME_CODE_END,

//MSG_ID_USIME_CODE_BEGIN,
MODULE_MSG_BEGIN( MSG_ID_USIME_TDD_CODE_BEGIN )
MSG_ID_RRCE_USIME_SAVE_REQ = MSG_ID_USIME_TDD_CODE_BEGIN,
MSG_ID_CSCE_USIME_READ_NVRAM_REQ,
MSG_ID_CSCE_USIME_SET_MODE_REQ,
MSG_ID_RATCM_UAS_USIM_INFO_RESET_REQ,
MSG_ID_USIM_REGISTER_CNF,
MSG_ID_USIME_CODE_END = MSG_ID_USIM_REGISTER_CNF,
MODULE_MSG_END( MSG_ID_USIME_TDD_CODE_TAIL )
//MSG_ID_USIME_CODE_END,

//MSG_ID_URR_CODE_BEGIN,
MODULE_MSG_BEGIN( MSG_ID_URR_TDD_CODE_BEGIN )
MSG_ID_URR_NON_USED_MESSAGE_BEGIN = MSG_ID_URR_TDD_CODE_BEGIN,

#ifdef __GEMINI__
MSG_ID_URR_RRCE_SERVICE_RES_OCCUPY_IND,
MSG_ID_URR_CSCE_SWITCH_GEMINI_MODE_REQ,

/* ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */
MSG_ID_URR_RRCE_SWITCH_GEMINI_MODE_REQ,
MSG_ID_URR_CSE_SWITCH_GEMINI_MODE_REQ,
MSG_ID_URR_MEME_SWITCH_GEMINI_MODE_REQ,
MSG_ID_URR_SIBE_SWITCH_GEMINI_MODE_REQ,
MSG_ID_URR_CSCE_VIRTUAL_SUSPEND_SERVICE_COMPLETE_IND,
#if 0 /* move to ul1_sap.h */
/* under construction !*/
#endif
/* endif __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */
#endif /* __GEMINI__ */

MSG_ID_URR_NON_USED_MESSAGE_END,
MSG_ID_URR_CODE_END = MSG_ID_URR_NON_USED_MESSAGE_END,
MODULE_MSG_END( MSG_ID_URR_TDD_CODE_TAIL )
//MSG_ID_URR_CODE_END,

#endif /* __UMTS_TDD128_MODE__ */


#ifdef __SOURCE_INSIGHT_PARSE__
};
#endif

#endif  //_URR_MSG_H