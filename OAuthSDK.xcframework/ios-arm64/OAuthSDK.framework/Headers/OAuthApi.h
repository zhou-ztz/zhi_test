//
//  OAuthApi.h
//  OAuthSDK
//
//  Created by dong on 2024/6/20.
//

#import <Foundation/Foundation.h>
#import <OAuthSDK/OAuthSDK.h>

NS_ASSUME_NONNULL_BEGIN

#pragma mark - OAuthApiDelegate
/*! @brief 接收并处理来自OAuth终端程序的事件消息
 *
 * 接收并处理来自OAuth终端程序的事件消息，期间界面会切换到第三方应用程序。
 * OAuthApiDelegate 会在handleOpenURL:delegate:中使用并触发。
 */

@protocol OAuthApiDelegate <NSObject>
/*!
 * 收到一个来自RewardsLink的请求
 * @param response 返回的path url
 * @param isAllow 是否同意授权
 */
- (void)onAuthResp:(NSString *)response isAllow:(BOOL)isAllow;

@end

@interface OAuthApi : NSObject

@property (nonatomic, weak) id<OAuthApiDelegate> delegate;

+ (instancetype)sharedManager;

- (void)handleOpenURL:(NSURL *)url;

/*! @brief 发送请求到RewardsLink，等待RewardsLink返回onResp
 *
 * 函数调用后，会切换到RewardsLink的界面。第三方应用程序等待RewardsLink返回onResp
 * @param req 具体的发送请求。
 * @param completion 调用结果回调block
 */
- (void)sendReq:(OAuthSendAuthReq *)req completion:(void (^)(OAuthUserResp * _Nullable userInfo, NSError * _Nullable error))completion;

@end

NS_ASSUME_NONNULL_END
