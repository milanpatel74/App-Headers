/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBGroupMallAdsExperimentContext : FBExperimentContext {

	BOOL _enabled;
	BOOL _showLikeNux;
	BOOL _showQPFooterForGroupViewers;
	BOOL _showQPFooterForGroupAdmin;

}

@property (nonatomic,readonly) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL showLikeNux;                              //@synthesize showLikeNux=_showLikeNux - In the implementation block
@property (nonatomic,readonly) BOOL showQPFooterForGroupViewers;              //@synthesize showQPFooterForGroupViewers=_showQPFooterForGroupViewers - In the implementation block
@property (nonatomic,readonly) BOOL showQPFooterForGroupAdmin;                //@synthesize showQPFooterForGroupAdmin=_showQPFooterForGroupAdmin - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)showQPFooterForGroupAdmin;
-(BOOL)showQPFooterForGroupViewers;
-(BOOL)showLikeNux;
-(BOOL)enabled;
@end
