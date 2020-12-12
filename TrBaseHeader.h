#pragma once
#include <QMap>
#include <QDebug>
#include <QString>
#include <QtCore/qglobal.h>
#include "ThostFtdcUserApiStruct.h"
#pragma execution_character_set("utf-8")

#if defined(TRBASE_LIBRARY)
#  define TRBASE_EXPORT Q_DECL_EXPORT
#else
#  define TRBASE_EXPORT Q_DECL_IMPORT
#endif

// TrBase QT 版

// 合约品种信息
struct TrContractField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///产品代码
	TThostFtdcInstrumentIDType	ProductID;
	///产品名称
	TThostFtdcProductNameType	ProductName;
	///市价单最大下单量
	TThostFtdcVolumeType	MaxMarketOrderVolume;
	///市价单最小下单量
	TThostFtdcVolumeType	MinMarketOrderVolume;
	///限价单最大下单量
	TThostFtdcVolumeType	MaxLimitOrderVolume;
	///限价单最小下单量
	TThostFtdcVolumeType	MinLimitOrderVolume;
	///合约数量乘数
	TThostFtdcVolumeMultipleType	VolumeMultiple;
	///最小变动价位
    TThostFtdcPriceType     PriceTick;
    ///交易时间段
    TThostFtdcFieldContentType  TraddingTimeRange;
};

