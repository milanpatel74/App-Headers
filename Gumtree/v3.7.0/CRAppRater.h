/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class CRRateAppAlert, CritterImpl, CRPreferences;

@interface CRAppRater : NSObject {

	unsigned long long _appLoadCount;
	CRRateAppAlert* _rateMeAlert;
	CritterImpl* _critterDelegate;
	CRPreferences* _storedState;

}

@property (nonatomic,retain) CRRateAppAlert * rateMeAlert;              //@synthesize rateMeAlert=_rateMeAlert - In the implementation block
@property (assign) CritterImpl * critterDelegate;                       //@synthesize critterDelegate=_critterDelegate - In the implementation block
@property (retain) CRPreferences * storedState;                         //@synthesize storedState=_storedState - In the implementation block
-(CRPreferences *)storedState;
-(void)setStoredState:(CRPreferences *)arg1 ;
-(CritterImpl *)critterDelegate;
-(void)setCritterDelegate:(CritterImpl *)arg1 ;
-(BOOL)shouldResetRateMeSettings;
-(void)resetRateMeSettings;
-(void)incrementAppLoadCount;
-(void)persistItunesIdIfPresent:(id)arg1 ;
-(BOOL)shouldDisplayRateMeAlertWithDict:(id)arg1 ;
-(void)setRateMeAlert:(CRRateAppAlert *)arg1 ;
-(CRRateAppAlert *)rateMeAlert;
-(void)openAppStore;
-(id)initWithStoredState:(id)arg1 andCritterDelegate:(id)arg2 ;
-(void)appLoadedWithLaunch:(BOOL)arg1 ;
-(void)handleRateMeSettings:(id)arg1 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end
