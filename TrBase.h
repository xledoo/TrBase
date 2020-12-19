#pragma once
#include "TrBaseHeader.h"

class TRBASE_EXPORT TrBase
{
public:
	// 获取合约信息
    static TrProductField get(QString code);
	// 获取当前合约数量
	static int count();
	// 获取合约产品名称
    static QString Name(QString code);
    // 获取产品名称 含合约月份
    static QString NameMonth(QString code);
	// 获取交易所ID
    static QString ExchangeID(QString code);
    // 获取交易所所有产品列表
    static QStringList ExchangeProducts(QString ExchangeID);
	// 获取最小变动单位
    static double PriceTick(QString code);
	// 获取合约乘数
    static int VolumeMultiple(QString code);
    // 自定义产品名
    static void SetName(QString code, QString name);
    // 自定义品种交易时间段
    // 默认所有品种交易时段为 QString("21:00:00-23:00:00;09:00:00-10:15:00;10:30:00-11:30:00;13:30:00-15:00:00");
    // 特殊品种请自行设置 格式如上所示 注意分号和横杠表示的意思
    static void SetTraddingRange(QString code, QString range);
    // 获取合约产品交易时间段
    static QString TraddingRange(QString code);
    // 设置合约信息 可以配合 tradespi OnRspQryInstrument 来添加所有的合约信息
    static void SetInstrument(CThostFtdcInstrumentField Instrument);
    // 获取合约信息
    static CThostFtdcInstrumentField Instrument(QString InstrumentID);
    // 合约信息是否存在
    static bool Exist(QString InstrumentID);
};
