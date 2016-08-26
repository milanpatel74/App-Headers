/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBUserSessionClassProvidable.h>

@class ZRUrlRewriter, ZRApplicationState, NSString;

@interface ZRTariffedUrlBoundary : NSObject <FBUserSessionClassProvidable> {

	ZRUrlRewriter* _rewriter;
	ZRApplicationState* _zeroRatingState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)urlIsUnsafeWebPage:(id)arg1 ;
-(id)initWithRewriter:(id)arg1 zeroRatingState:(id)arg2 ;
-(BOOL)urlIsZeroRatingSafe:(id)arg1 ;
-(void)dealloc;
@end
