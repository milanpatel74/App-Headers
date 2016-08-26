/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ZRURLCheckerDelegate;
@interface ZRURLChecker : NSObject {

	id<ZRURLCheckerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ZRURLCheckerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)checkURL:(id)arg1 withZRTariffedUxSentry:(id)arg2 fencePrefKeyForURL:(id)arg3 ;
-(void)checkURL:(id)arg1 withZRTariffedUxSentry:(id)arg2 fencePrefKeyForURL:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)_setupSentry:(id)arg1 fencePrefKeyForURL:(id)arg2 ;
-(void)setDelegate:(id<ZRURLCheckerDelegate>)arg1 ;
-(id<ZRURLCheckerDelegate>)delegate;
@end
