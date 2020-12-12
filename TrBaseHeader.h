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

// TrBase QT ��

// ��ԼƷ����Ϣ
struct TrContractField
{
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Ʒ����
	TThostFtdcInstrumentIDType	ProductID;
	///��Ʒ����
	TThostFtdcProductNameType	ProductName;
	///�м۵�����µ���
	TThostFtdcVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TThostFtdcVolumeType	MinMarketOrderVolume;
	///�޼۵�����µ���
	TThostFtdcVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TThostFtdcVolumeType	MinLimitOrderVolume;
	///��Լ��������
	TThostFtdcVolumeMultipleType	VolumeMultiple;
	///��С�䶯��λ
    TThostFtdcPriceType     PriceTick;
    ///����ʱ���
    TThostFtdcFieldContentType  TraddingTimeRange;
};

