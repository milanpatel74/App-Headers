/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController, NSDictionary;

@interface SPMediationCoordinator : NSObject {

	UIViewController* _hostViewController;
	NSDictionary* _providersByName;

}

@property (retain) UIViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (retain) NSDictionary * providersByName;                     //@synthesize providersByName=_providersByName - In the implementation block
-(void)videosFromProvider:(id)arg1 available:(/*^block*/id)arg2 ;
-(void)playVideoFromProvider:(id)arg1 eventsCallback:(/*^block*/id)arg2 ;
-(id)providerWithName:(id)arg1 ;
-(BOOL)providerAvailable:(id)arg1 ;
-(NSDictionary *)providersByName;
-(void)setProvidersByName:(NSDictionary *)arg1 ;
-(void)setHostViewController:(UIViewController *)arg1 ;
-(UIViewController *)hostViewController;
@end
