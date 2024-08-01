//
//  IntegralList.h
//  OAuthSDK
//
//  Created by 深圳壹艺科技有限公司-zhi on 2024/6/24.
//

#import <Foundation/Foundation.h>


@interface IntegralList : NSObject
///交易ID
@property (nonatomic, copy) NSString *transaction_id;
///支付抵扣金额换算的积分，计算规则：支付抵扣金额 / 金额换算积分比率
@property (nonatomic, copy) NSString *points;
///创建时间
@property (nonatomic, copy) NSString *created_at;
///pending:0,success:1,refunded:2,failed:99
@property (nonatomic, copy) NSString *status_label;
///expenses:-1,income:1
@property (nonatomic, copy) NSString *type_label;
///RL用户ID
@property (nonatomic) NSInteger user_id;
///pending:0,success:1,refunded:2,failed:99
@property (nonatomic) NSInteger status;
///expenses:-1,income:1
@property (nonatomic) NSInteger type;



@end

