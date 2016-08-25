/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface GADAutoClickProtection : NSObject {

	NSArray* _reportingURLStringTemplates;
	BOOL _enabled;

}

@property (nonatomic,readonly) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)reportSpamOpenActionWithNavigationURLString:(id)arg1 ;
-(void)reportSpamOpenActionWithAdDebugDialogString:(id)arg1 navigationURLString:(id)arg2 ;
-(id)initWithAutoClickProtectionEnabled:(BOOL)arg1 ;
-(BOOL)enabled;
-(id)initWithDictionary:(id)arg1 ;
@end
