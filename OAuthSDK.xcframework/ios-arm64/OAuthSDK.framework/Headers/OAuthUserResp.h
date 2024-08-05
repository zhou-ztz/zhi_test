//
//  OAuthUserResp.h
//  OAuthSDK
//
//  Created by dong on 2024/6/25.
//

#import <Foundation/Foundation.h>

@interface OAuthUserResp : NSObject

/** openid */
@property (nonatomic, copy) NSString *openid;

/** nickname */
@property (nonatomic, copy) NSString *nickname;

/** headimgurl */
@property (nonatomic, copy) NSString *avatar;

/** unionid */
@property (nonatomic, copy) NSString *unionid;

- (NSString *)toJSONString;

@end
