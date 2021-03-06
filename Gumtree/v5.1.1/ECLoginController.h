/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ECLoginViewControllerProtocol;
@class ECSignInData, ECMetricsTracker;

@interface ECLoginController : NSObject {

	id<ECLoginViewControllerProtocol> _delegate;
	ECSignInData* _signInData;
	ECMetricsTracker* _metricsTracker;

}

@property (nonatomic,retain) id<ECLoginViewControllerProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ECSignInData * signInData;                               //@synthesize signInData=_signInData - In the implementation block
@property (nonatomic,retain) ECMetricsTracker * metricsTracker;                       //@synthesize metricsTracker=_metricsTracker - In the implementation block
+(id)trackingCategoryForSignInMode:(long long)arg1 ;
-(void)setSignInData:(ECSignInData *)arg1 ;
-(ECSignInData *)signInData;
-(ECMetricsTracker *)metricsTracker;
-(void)setMetricsTracker:(ECMetricsTracker *)arg1 ;
-(void)activateAccountWithSignInData:(id)arg1 ;
-(void)signUserInWithSignInData:(id)arg1 ;
-(id)initLoginControllerWithDelegate:(id)arg1 ;
-(id)optInPreferencesTrackingLabel;
-(void)loginFinished;
-(void)registerWithSignInData:(id)arg1 ;
-(void)setDelegate:(id<ECLoginViewControllerProtocol>)arg1 ;
-(id)init;
-(id<ECLoginViewControllerProtocol>)delegate;
-(void)login;
@end

