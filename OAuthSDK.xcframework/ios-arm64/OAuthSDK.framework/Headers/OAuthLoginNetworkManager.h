//
//  OAuthLoginNetworkManager.h
//  OAuthSDK
//
//  Created by dong on 2024/6/25.
//

#import <Foundation/Foundation.h>
#import <OAuthSDK/OAuthSDK.h>
#import <OAuthSDK/OAuthNetworkManager.h>

@interface OAuthLoginNetworkManager : NSObject

+ (instancetype)sharedManager;

- (void)fetchOauthUserData:(void (^)(OAuthUserResp *authUser, NSError *error))completion;
@end
