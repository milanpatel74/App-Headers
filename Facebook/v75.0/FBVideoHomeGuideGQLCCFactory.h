/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBReactionRequestSupportedStylesProtocol;
@class FBUserSession, FBGraphQLConnectionControllerConfiguration, FBScenePath, FBReactionSessionInfo;

@interface FBVideoHomeGuideGQLCCFactory : NSObject {

	FBUserSession* _session;
	FBGraphQLConnectionControllerConfiguration* _reactionConfiguration;
	id<FBReactionRequestSupportedStylesProtocol> _supportedStyles;
	FBScenePath* _scenePath;
	FBReactionSessionInfo* _reactionSessionInfo;

}

@property (nonatomic,copy) FBScenePath * scenePath;                                      //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) FBReactionSessionInfo * reactionSessionInfo;              //@synthesize reactionSessionInfo=_reactionSessionInfo - In the implementation block
-(FBScenePath *)scenePath;
-(id)graphQLConnectionControllerUserInfoWithRequestType:(id)arg1 ;
-(FBReactionSessionInfo *)reactionSessionInfo;
-(id)createGraphQLConnectionController;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 reactionSessionInfo:(id)arg3 supportedStyles:(id)arg4 ;
-(void)setScenePath:(FBScenePath *)arg1 ;
@end

