### 基于QT5.14.2商品期货合约基础数据封装动态链接库，用于方便的获取到商品期货合约的基础数据。
目前包含4个交易所的67个合约信息

例如：
1、获取合约 rb2101 的中文名称
TrBase::Name("rb2101");
//return QString "螺纹钢"
TrBase::NameMonth("rb2101");
//return QString "螺纹钢2101"

2、可以自定义的内容
TrBase::SetName("rb", "螺纹");
TrBase::SetTraddingRange("rb",  QString("09:00:00-10:15:00;10:30:00-11:30:00;13:30:00-15:00:00"));

其他内容请看 TrBase.h
```
class TRBASE_EXPORT TrBase
{
public:
// 获取合约信息
    static TrContractField get(QString code);
	// 获取当前合约数量
	static int count();
	// 获取合约产品名称
    static QString Name(QString code);
    // 获取产品名称 含合约月份
    static QString NameMonth(QString code);
	// 获取交易所ID
    static QString ExchangeID(QString code);
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
    // 判断当前是否处于交易时间段
    static bool IsTradding(QString code);
};
```



